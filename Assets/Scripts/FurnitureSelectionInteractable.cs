using System.Collections;
using System.Collections.Generic;
using UnityEngine.XR.Interaction.Toolkit.AR;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

public class FurnitureSelectionInteractable : ARSelectionInteractable
{
    [SerializeField] private GameObject furniture;

    protected override void OnSelectEntering(SelectEnterEventArgs args)
    {
        base.OnSelectEntering(args);
        DataHandler.SetIsFurnitureSelected(true);
        DataHandler.panel = DataHandler.PAGE_FURNITURE_EDIT;
       
        DataHandler.Instance.SetSelectedFurniture(furniture);
    }

    protected override void OnSelectExiting(SelectExitEventArgs args)
    {
        base.OnSelectExiting(args);
        DataHandler.SetIsFurnitureSelected(false);
        DataHandler.panel = DataHandler.PAGE_FURNITURE_SELECT;
    }
}
