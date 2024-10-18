using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.Interaction.Toolkit.AR;
using UnityEngine.XR.ARSubsystems;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class InputManager : ARBaseGestureInteractable
{
    [SerializeField] private Camera arCamera;
    [SerializeField] private ARRaycastManager _raycastManager;
    [SerializeField] private GameObject crosshair;
    private GameObject preview;
    private Material previewOriginalMat;

    private static InputManager instance;
    public static InputManager Instance
    {
        get
        {
            if (instance == null)
            {
                instance = FindObjectOfType<InputManager>();
            }
            return instance;
        }
    }

    private Touch touch;
    private Pose pose;
    private bool placementIsValid = false;

    public static bool hasCollision = false;
    // Start is called before the first frame update
    void Start()
    {

    }

    protected override bool CanStartManipulationForGesture(TapGesture gesture)
    {
        if (gesture.targetObject == null)
            return true;
        return false;
    }

    protected override void OnEndManipulation(TapGesture gesture)
    {
        if (gesture.isCanceled)
            return;
        if (gesture.targetObject != null || IsPointOverUI(gesture))
        {
            return;
        }

        if (hasCollision)
        {
            return;
        }

        if (placementIsValid)
        {
            GameObject placeObj = Instantiate(DataHandler.Instance.GetFurniturePrefab(), pose.position, pose.rotation);
            placeObj.transform.Find("Outline").gameObject.SetActive(false);
            Handheld.Vibrate();
            DataHandler.showPreview = false;

            // create anchor point for the furniture
            var anchorObject = new GameObject("PlacementAnchor");
            anchorObject.transform.position = pose.position;
            anchorObject.transform.rotation = pose.rotation;
            placeObj.transform.parent = anchorObject.transform;
        }


    }

    void Update()
    {
        UpdatePlacementPose();
        UpdateCrosshair();
        UpdateFurniturePreviewPose();
    }

    bool IsPointOverUI(TapGesture touch)
    {
        PointerEventData eventData = new PointerEventData(EventSystem.current);
        eventData.position = new Vector2(touch.startPosition.x, touch.startPosition.y);
        List<RaycastResult> results = new List<RaycastResult>();
        EventSystem.current.RaycastAll(eventData, results);
        return results.Count > 0;
    }

    void UpdateCrosshair()
    {
        if (placementIsValid)
        {
            crosshair.SetActive(true);
            // crosshair.transform.position = pose.position;
            // crosshair.transform.eulerAngles = new Vector3(90, 0, 0);
            crosshair.transform.SetPositionAndRotation(pose.position, pose.rotation);
            if (hasCollision)
            {
                crosshair.GetComponentInChildren<SpriteRenderer>().color = Color.red;
                //Invoke("resetHasCollision", 1.0f);
            }
            else
            {
                crosshair.GetComponentInChildren<SpriteRenderer>().color = Color.white;
            }
        }
        else
        {
            crosshair.SetActive(false);
        }
    }

    private void resetHasCollision()
    {
        InputManager.hasCollision = false; 
    }

    private void UpdatePlacementPose()
    {
        // view port space is from 0,0 (bottom left) to 1,1; screen space: pixel; 
        // note that viewport space is normalized regarding the camera, so it is a function of the camera
        Vector3 origin = arCamera.ViewportToScreenPoint(new Vector3(0.5f, 0.5f));

        // returns a ray (in world space) going from camera through a screen point (pixel coordinate)
        // mouse position in pixel coordinate; z component is always 0; bottom left of the window is (0, 0)
        Ray ray = arCamera.ScreenPointToRay(origin); // shoot a ray to the center of the screen
        var hits = new List<ARRaycastHit>();

        placementIsValid = GestureTransformationUtility.Raycast(origin, hits, TrackableType.PlaneWithinPolygon);
        if (placementIsValid)
        {
            pose = hits[0].pose;
            // Quaternion crosshairRotation = Quaternion.Euler(Vector3.down * 90);
            // pose.rotation = crosshairRotation * pose.rotation;
        }
    }


    public void UpdateFurniturePreviewIfNecessary(GameObject newPreview)
    {
        if (newPreview == preview) return;

        CleanUpPreview(); // inactivate old preview
        preview = newPreview;
        //if (placementIsValid && preview != null)
        //{
        //    preview.transform.SetPositionAndRotation(pose.position, pose.rotation);
        //}
       
    }

    private void UpdateFurniturePreviewPose()
    {
        if (preview == null) return;
        if (placementIsValid && DataHandler.showPreview && !DataHandler.IsFurnitureSelected())
        {
            preview.SetActive(true);
            preview.transform.SetPositionAndRotation(pose.position, pose.rotation);
            Vector3 normalDir = (pose.rotation * new Vector3(0.0f, 0.0f, 1.0f)).normalized;
            float distFromGround = 20 / 100; // 20 centimeters
            preview.transform.Translate(distFromGround * normalDir, Space.World);

        }
        else
        {
            preview.SetActive(false);
        }


    }

    public void CleanUpPreview()
    {
        if (preview == null)
        {
            return;
        }
        resetPreviewMaterial();
        preview.SetActive(false);
        hasCollision = false; // reset collision
    }

    private void resetPreviewMaterial()
    {
        if (previewOriginalMat == null) return;
        Renderer[] children;
        children = preview.GetComponentsInChildren<MeshRenderer>();
        foreach (Renderer rend in children)
        {
            Color materialColor = rend.material.color;
            if (rend.material.color.a == 0.0)
            {
                rend.material = previewOriginalMat;
            }

        }
    }

    public void SetPreviewOriginalMat(Material m)
    {
        this.previewOriginalMat = m;
    }
}
