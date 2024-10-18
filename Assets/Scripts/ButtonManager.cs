using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using DG.Tweening;

public class ButtonManager : MonoBehaviour
{
    private Button btn;
    [SerializeField] private RawImage buttonImage;

    //public GameObject furniture; so that we don't need to manually add furniture prefab to each button

    private int _itemId;
    private Sprite _buttonTexture;

    // define setters 
    public int ItemId
    {
        set
        {
            _itemId = value;
        }
    }

    public Sprite ButtonTexture
    {
        set
        {
            _buttonTexture = value;
            buttonImage.texture = _buttonTexture.texture;
        }
    }

    // Start is called before the first frame update
    void Start()
    {
        btn = GetComponent<Button>();
    }

    // Update is called once per frame
    void Update()
    {
        if (UIManager.Instance.OnEntered(gameObject))
        {
           
            DataHandler.Instance.SetFurniturePrefab(_itemId);
            GameObject preview = DataHandler.Instance.GetPreviewFromId(_itemId);
            InputManager.Instance.UpdateFurniturePreviewIfNecessary(preview);

            transform.DOScale(new Vector3(1.5f, 1.5f, 1.5f), 0.2f);
        }
        else
        {
            transform.DOScale(Vector3.one, 0.2f);
        }
    }

}
