using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using GoogleMobileAds.Api;

internal class SavvyAdNative : MonoBehaviour
{
    // Created a separate Object for the UI, mayble later will link through an interface rather than hard reference
    [SerializeField] internal SavvyAdNativeView view;
    internal SavvyAdNativeDelegate adDelegate;
    internal AdmobIdSet idSet;
    private string adUnitId;

    private NativeAd nativeAd;
    private bool nativeAdLoaded;

    // Load ad assets, we do this so that the ads don't buffer
    internal void Prepare()
    {
#if UNITY_ANDROID
        adUnitId = idSet.android;
#elif UNITY_IPHONE
        adUnitId = idSet.iOS;
#else
            adUnitId = "unexpected_platform";
#endif
        AdLoader adLoader = new AdLoader.Builder(adUnitId).ForNativeAd().Build();
        adLoader.OnNativeAdLoaded += HandleNativeAdLoaded;
        adLoader.OnAdFailedToLoad += HandleNativeAdFailedToLoad;
        adLoader.LoadAd(new AdRequest.Builder().Build());
    }

    // For some reason the google sdk requires this part of the code to be in Update()
    void Update()
    {
        if (nativeAdLoaded)
        {
            nativeAdLoaded = false;

            // Update the view's entity info (which will cause it to update its UI)
            view.entity = new SavvyAdNativeView.Entity(
                icon: nativeAd.GetIconTexture(),
                headline: nativeAd.GetHeadlineText(),
                actionButtonText: nativeAd.GetCallToActionText(),
                nativeAd.GetAdvertiserText());

            // Register the objects as ad objects
            if (!nativeAd.RegisterIconImageGameObject(view.iconView.gameObject))
            {
                Debug.LogError("Could not register icon GameObject");
                // Tell the delegate what happened, might need to include the exact purpose of the gameObject as opposed to just a gameObject
                if (adDelegate != null)
                    adDelegate.FailedToRegisterGameObjectOn(this, view.iconView.gameObject);
            }
            if (!nativeAd.RegisterHeadlineTextGameObject(view.headlineLabel.gameObject))
            {
                Debug.LogError("Could not register Headline GameObject");
                if (adDelegate != null)
                    adDelegate.FailedToRegisterGameObjectOn(this, view.headlineLabel.gameObject);
            }
            if (!nativeAd.RegisterAdvertiserTextGameObject(view.advertiserTextLabel.gameObject))
            {
                Debug.LogError("Could not register AdvertiserText GameObject");
                if (adDelegate != null)
                    adDelegate.FailedToRegisterGameObjectOn(this, view.advertiserTextLabel.gameObject);
            }
            if (!nativeAd.RegisterCallToActionGameObject(view.actionButton.gameObject))
            {
                Debug.LogError("Could not register ActionButton GameObject");
                if (adDelegate != null)
                    adDelegate.FailedToRegisterGameObjectOn(this, view.actionButton.gameObject);
            }

        }
    }

    // General purpose show function
    internal void Show()
    {
        view.Show();
    }

    // General purpose hide function
    internal void Hide()
    {
        view.Hide();
        if (adDelegate != null)
            adDelegate.Closed(this);
    }

    #region Event Handlers
    internal void HandleNativeAdFailedToLoad(object sender, AdFailedToLoadEventArgs args)
    {
        Debug.Log("Native ad failed to load: " + args.LoadAdError.GetMessage());

        if (adDelegate != null)
            adDelegate.FailedToLoad(this, args);
    }

    internal void HandleNativeAdLoaded(object sender, NativeAdEventArgs args)
    {
        Debug.Log("Native ad loaded.");
        nativeAd = args.nativeAd;
        nativeAdLoaded = true;

        if (adDelegate != null)
            adDelegate.Loaded(this);
    }
    #endregion
}

internal interface SavvyAdNativeDelegate
{
    internal void FailedToLoad(SavvyAdNative nativeAd, AdFailedToLoadEventArgs error);
    internal void Loaded(SavvyAdNative nativeAd);
    internal void FailedToRegisterGameObjectOn(SavvyAdNative nativeAd, GameObject gameObject);
    internal void Closed(SavvyAdNative nativeAd);
}