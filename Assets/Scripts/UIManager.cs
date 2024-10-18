using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

// The listener of the canvas
public class UIManager : MonoBehaviour
{
    [SerializeField] private GameObject furnitureCatSelectPanel;
    [SerializeField] private GameObject furnitureSelectPanel;
    [SerializeField] private GameObject furnitureEditPanel;

    private GraphicRaycaster raycaster;
    private PointerEventData pData; // the mouse event
    private EventSystem eventSystem;

    public Transform selectionPoint;

    private static UIManager instance;
    public static UIManager Instance
    {
        get
        {
            if (instance == null)
            {
                instance = FindObjectOfType<UIManager>();
            }
            return instance;
        }
    }

    // Start is called before the first frame update
    void Start()
    {
        raycaster = GetComponent<GraphicRaycaster>(); // on canvas
        eventSystem = GetComponent<EventSystem>(); // from canvas
        pData = new PointerEventData(eventSystem);

        pData.position = selectionPoint.position;
    }

    // Update is called once per frame
    void Update()
    {
        if (DataHandler.panel == DataHandler.PAGE_FURNITURE_CATEGORY_SELECT)
        {
            furnitureEditPanel.SetActive(false);
            furnitureSelectPanel.SetActive(false);
            furnitureCatSelectPanel.SetActive(true);
        }
        else if (DataHandler.panel == DataHandler.PAGE_FURNITURE_SELECT)
        {
            furnitureEditPanel.SetActive(false);
            furnitureSelectPanel.SetActive(true);
            furnitureCatSelectPanel.SetActive(false);
            UIContentFitter.Instance.PrepareUI();
        }
        else
        {
            furnitureEditPanel.SetActive(true);
            furnitureCatSelectPanel.SetActive(false);
            furnitureSelectPanel.SetActive(false);
        }
    }

    public bool OnEntered(GameObject button)
    {
        List<RaycastResult> results = new List<RaycastResult>();
        raycaster.Raycast(pData, results);

        foreach (var result in results)
        {
            if (result.gameObject == button)
            {
                {
                    return true;
                }
            }
        }
        return false;
    }
}
