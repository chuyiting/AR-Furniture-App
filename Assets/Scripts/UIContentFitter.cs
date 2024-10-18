using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UIContentFitter : MonoBehaviour
{
    private static UIContentFitter instance;

    public static UIContentFitter Instance
    {
        get
        {
            if (instance == null)
            {
                instance = FindObjectOfType<UIContentFitter>();
            }
            return instance;
        }
    }

    // Start is called before the first frame update
    public void PrepareUI()
    {
        HorizontalLayoutGroup hg = GetComponent<HorizontalLayoutGroup>();
        DataHandler.Instance.LoadItemsIfNecessary();
        int childCount = DataHandler.Instance.items[DataHandler.currentFurnitureCategory].Count;
        float childWidth = 200;
        float width = hg.spacing * (childCount - 1) + childWidth * (childCount - 1) + hg.padding.left;

        GetComponent<RectTransform>().sizeDelta = new Vector2(width, 0);
    }


}
