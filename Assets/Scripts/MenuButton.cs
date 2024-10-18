using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MenuButton : MonoBehaviour
{
    private Button btn;
    // Start is called before the first frame update
    void Start()
    {
        btn = GetComponent<Button>();
        btn.onClick.AddListener(openMenu);
    }


    void openMenu()
    {
        DataHandler.panel = DataHandler.PAGE_FURNITURE_CATEGORY_SELECT;
    }
}
