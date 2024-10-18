using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CategoryButton : MonoBehaviour
{
    private Button btn;
    [SerializeField] private string category; // same as the folder name in resource

    // Start is called before the first frame update
    void Start()
    {
        btn = GetComponent<Button>();
        btn.onClick.AddListener(setCategory);
    }


    void setCategory()
    {
        InputManager.Instance.CleanUpPreview();
        // set category and prepare buttons
        DataHandler.Instance.SetUpFurnitureButtons(category);
        // change panel; will be updated by update function in UIManager
        DataHandler.panel = DataHandler.PAGE_FURNITURE_SELECT;
        
    }
}
