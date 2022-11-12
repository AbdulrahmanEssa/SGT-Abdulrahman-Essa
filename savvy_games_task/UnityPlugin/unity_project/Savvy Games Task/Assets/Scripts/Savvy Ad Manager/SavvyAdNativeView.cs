using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

internal class SavvyAdNativeView : MonoBehaviour
{
    [SerializeField] private Button closeButton;
    [SerializeField] private GameObject mainPanel;
    [SerializeField] internal Image iconView;
    [SerializeField] internal TextMeshProUGUI headlineLabel, actionButton, advertiserTextLabel;

    // Data store
    internal struct Entity
    {
        internal Texture2D icon;
        internal string headline, actionButtonText, advertiserText;

        public Entity(Texture2D icon, string headline, string actionButtonText, string advertiserText)
        {
            this.icon = icon;
            this.headline = headline;
            this.actionButtonText = actionButtonText;
            this.advertiserText = advertiserText;
        }
    }

    internal Entity entity
    {
        set
        {
            entity = value;
            // update UI when receiving new values
            ReloadData();
        }
        get
        {
            return entity;
        }
    }

    private void Start()
    {
        iconView.gameObject.AddComponent<BoxCollider>();
        headlineLabel.gameObject.AddComponent<BoxCollider>();
        actionButton.gameObject.AddComponent<BoxCollider>();
        advertiserTextLabel.gameObject.AddComponent<BoxCollider>();
        closeButton.onClick.AddListener(onClickClose);
    }

    internal void Hide()
    {
        mainPanel.SetActive(false);
    }

    internal void Show()
    {
        mainPanel.SetActive(true);
    }

    private void onClickClose()
    {
        Hide();
    }

    /// <summary>
    /// UI Updater
    /// </summary>
    void ReloadData()
    {
        iconView.material.mainTexture = entity.icon;
        headlineLabel.text = entity.headline;
    }
}