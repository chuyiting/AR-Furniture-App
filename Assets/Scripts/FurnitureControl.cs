using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FurnitureControl : MonoBehaviour
{
    private Material transparentMat;
    private Material originalMat;

    private void Start()
    {
        transparentMat = Resources.Load("Materials/transparent", typeof(Material)) as Material;
        
    }

    void OnTriggerEnter(Collider collision)
    {
        if (collision.gameObject.tag == "preview")
        {
            InputManager.hasCollision = true;
            Renderer[] children;
            children = collision.gameObject.GetComponentsInChildren<MeshRenderer>();
            foreach (Renderer rend in children)
            {
         
                if (rend.material.color.a == 1.0)
                {
                    originalMat = rend.material;
                    InputManager.Instance.SetPreviewOriginalMat(originalMat);
                    rend.material = transparentMat;
                }
                
            }
        }    
    }

    void OnTriggerExit(Collider collision)
    {
        
        if (collision.gameObject.tag == "preview")
        {
            InputManager.hasCollision = false;
            Renderer[] children;
            children = collision.gameObject.GetComponentsInChildren<MeshRenderer>();
            foreach (Renderer rend in children)
            {
                Color materialColor = rend.material.color;
                if (rend.material.color.a == 0.0)
                {
                    rend.material = originalMat;
                }

            }
        }

        InputManager.Instance.SetPreviewOriginalMat(null);
    }
}
