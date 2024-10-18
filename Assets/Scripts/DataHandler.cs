using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;


public class DataHandler : MonoBehaviour
{
    public const int PAGE_FURNITURE_CATEGORY_SELECT = 0;
    public const int PAGE_FURNITURE_SELECT = 1;
    public const int PAGE_FURNITURE_EDIT = 2;

    private GameObject selectedFurniturePrefab;
    private GameObject selectedFurniture;

    [SerializeField] private ButtonManager furnitureButtonPrefab;
    [SerializeField] private TextureButton textureButtonPrefab;
    [SerializeField] private GameObject textureButtonContainer;
    [SerializeField] private GameObject buttonContainer;
    
    [SerializeField] private List<Sprite> textures;

    private List<string> furnitureCategories = new List<string> { "Bathroom", "Beds", "Sofas&Chairs", "Vases" };

    public static string currentFurnitureCategory;
    public Dictionary<string, List<Item>> items = new Dictionary<string, List<Item>>();
    private Dictionary<string, List<GameObject>> previews = new Dictionary<string, List<GameObject>>();
    private Dictionary<string, List<ButtonManager>> furnitureButtons = new Dictionary<string, List<ButtonManager>>();


    private static bool isFurnitureSelected = false;
    public static bool showPreview = false;
    public static int panel = PAGE_FURNITURE_CATEGORY_SELECT; // 0: furniture category selection; 1: furniture selection; 2: furniture edit panel
    private static DataHandler instance;

    public static DataHandler Instance
    {
        get
        {
            if (instance == null)
            {
                instance = FindObjectOfType<DataHandler>();
            }
            return instance;
        }
    }

    private void Start()
    {
        LoadItemsIfNecessary();
        CreateFurnitureButtons();
        LoadTextures();
        CreateTextureButton();
    }

    public void LoadItemsIfNecessary()
    {
        if (items.ContainsKey(furnitureCategories[0])) return;

        foreach (string cat in furnitureCategories)
        {
            List<Item> itemList = new List<Item>();
            List<GameObject> previewList = new List<GameObject>();
            var items_obj = Resources.LoadAll("Items/" + cat, typeof(Item));
            foreach (var item in items_obj)
            {
                itemList.Add(item as Item);
                previewList.Add(null);
            }
            items.Add(cat, itemList);
            previews.Add(cat, previewList);
        }
    }

    void LoadTextures()
    {
        var textures_obj = Resources.LoadAll("textures", typeof(Sprite));
        foreach (var texture in textures_obj)
        {
            textures.Add(texture as Sprite);
        }

    }


    public void SetUpFurnitureButtons(string furnitureCategory)
    {
        if (furnitureCategory == currentFurnitureCategory) return;

        currentFurnitureCategory = furnitureCategory;
        foreach (var btnList in furnitureButtons)
        {
            foreach (ButtonManager btn in btnList.Value)
            {
                if (btnList.Key == furnitureCategory)
                {
                    btn.gameObject.SetActive(true);
                }
                else
                {
                    Debug.Log("deactivate non related buttons");
                    btn.gameObject.SetActive(false);
                }
            
            }
        }
    }

    void CreateTextureButton()
    {
        foreach (Sprite texture in textures)
        {

            TextureButton b = Instantiate(textureButtonPrefab, textureButtonContainer.transform);
            b.SetTexture(texture);
        }
    }

    void CreateFurnitureButtons()
    {
        foreach (var itemList in items)
        {
            int current_id = 0;
            List<ButtonManager> btns = new List<ButtonManager>();
            foreach (Item item in itemList.Value)
            {
                ButtonManager b = Instantiate(furnitureButtonPrefab, buttonContainer.transform);
                b.ItemId = current_id;
                b.ButtonTexture = item.itemImage;
                btns.Add(b);
                current_id++; 
            }
            furnitureButtons.Add(itemList.Key, btns);
        }
    }

    // instantiate
    public GameObject GetPreviewFromId (int id)
    {
        if (previews[currentFurnitureCategory][id] == null)
        {
            previews[currentFurnitureCategory][id] = Instantiate(items[currentFurnitureCategory][id].itemPrefab);
            previews[currentFurnitureCategory][id].tag = "preview";
            if (previews[currentFurnitureCategory][id].transform.Find("Outline") != null)
            {
                previews[currentFurnitureCategory][id].transform.Find("Outline").gameObject.SetActive(false);
            }
          
           
        }
        return previews[currentFurnitureCategory][id];
    }

    public void SetFurniturePrefab(int id) // id of the List<item>
    { 
        selectedFurniturePrefab = items[currentFurnitureCategory][id].itemPrefab;
    }

    public void SetSelectedFurniture(GameObject obj)
    {
        selectedFurniture = obj;
    }


    public GameObject GetFurniturePrefab()
    {
        return selectedFurniturePrefab;
    }

    public GameObject GetSelectedFurniture()
    {
        return selectedFurniture;
    }

    public static bool IsFurnitureSelected()
    {
        return isFurnitureSelected;
    }

    public static void SetIsFurnitureSelected(bool isSelected)
    {
        isFurnitureSelected = isSelected;
    }

}
