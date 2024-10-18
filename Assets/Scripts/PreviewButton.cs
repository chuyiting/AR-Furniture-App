using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PreviewButton : MonoBehaviour
{
    private Button btn;
    // Start is called before the first frame update
    void Start()
    {
        btn = GetComponent<Button>();
        btn.onClick.AddListener(togglePreview);
    }


    void togglePreview()
    {
        DataHandler.showPreview = !DataHandler.showPreview;
    }
}
