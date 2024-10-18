using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class DeleteButton : MonoBehaviour
{
    private Button btn;
    // Start is called before the first frame update
    void Start()
    {
        btn = GetComponent<Button>();
        btn.onClick.AddListener(rmFurniture);
    }


    void rmFurniture()
    {
        Destroy(DataHandler.Instance.GetSelectedFurniture());
        DataHandler.SetIsFurnitureSelected(false);
        DataHandler.panel = DataHandler.PAGE_FURNITURE_SELECT;
    }
}
