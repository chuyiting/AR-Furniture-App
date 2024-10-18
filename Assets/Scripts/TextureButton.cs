using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TextureButton : MonoBehaviour
{
    private Button btn;
    private Sprite _texture;

    // Start is called before the first frame update
    void Start()
    {
        btn = GetComponent<Button>();
        btn.onClick.AddListener(changeTexture);
    }


    void changeTexture()
    {

        Renderer[] children;
        children = DataHandler.Instance.GetSelectedFurniture().GetComponentsInChildren<Renderer>();
        foreach (Renderer rend in children)
        {
            rend.material.mainTexture = _texture.texture;
        }
        DataHandler.Instance.SetSelectedFurniture(DataHandler.Instance.GetSelectedFurniture());
        DataHandler.SetIsFurnitureSelected(true);

    }

    public void SetTexture(Sprite texture)
    {
        if (btn == null)
        {
            btn = GetComponent<Button>();
            btn.onClick.AddListener(changeTexture);
        }

        _texture = texture;
        btn.image.sprite = texture;
 
    }
}
