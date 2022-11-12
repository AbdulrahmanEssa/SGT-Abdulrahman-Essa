using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using GoogleMobileAds.Api;


internal class SavvyAdInterstitial : MonoBehaviour
{
    private InterstitialAd interstitialAd;
    internal SavvyAdInterstitialDelegate adDelegate;
    internal AdmobIdSet idSet;
    private string adUnitId;

    internal void Prepare()
    {
#if UNITY_ANDROID
        adUnitId = idSet.android;
#elif UNITY_IPHONE
        adUnitId = idSet.iOS;
#else
            adUnitId = "unexpected_platform";
#endif
        // Initialize an InterstitialAd.
        interstitialAd = new InterstitialAd(adUnitId);

        // Called when an ad request has successfully loaded.
        interstitialAd.OnAdLoaded += HandleOnAdLoaded;
        // Called when an ad request failed to load.
        interstitialAd.OnAdFailedToLoad += HandleOnAdFailedToLoad;
        // Called when an ad is shown.
        interstitialAd.OnAdOpening += HandleOnAdOpening;
        // Called when the ad is closed.
        interstitialAd.OnAdClosed += HandleOnAdClosed;

        // Create an empty ad request.
        AdRequest request = new AdRequest.Builder().Build();
        // Load the interstitial with the request.
        interstitialAd.LoadAd(request);
    }

    internal void Show()
    {
        if (interstitialAd.IsLoaded())
        {
            interstitialAd.Show();
        }
        else
        {
            Debug.LogWarning("SavvyAdInterstitial has not loaded yet!");
            if (adDelegate != null)
                adDelegate.FailedToShow(this, "SavvyAdInterstitial has not loaded yet!");
        }
    }

    internal void Hide()
    {
        interstitialAd.Destroy();
    }

    #region Event Handlers
    private void HandleOnAdLoaded(object sender, EventArgs args)
    {
        print("HandleAdLoaded event received");
        if (adDelegate != null)
            adDelegate.Loaded(this);
    }

    private void HandleOnAdFailedToLoad(object sender, AdFailedToLoadEventArgs args)
    {
        print("HandleFailedToReceiveAd event received with message: "
                            + args.LoadAdError.GetMessage());
        if (adDelegate != null)
            adDelegate.FailedToLoad(this, args);
    }

    private void HandleOnAdOpening(object sender, EventArgs args)
    {
        print("HandleAdOpening event received");
        if (adDelegate != null)
            adDelegate.Opening(this);
    }

    private void HandleOnAdClosed(object sender, EventArgs args)
    {
        print("HandleAdClosed event received");
        if (adDelegate != null)
            adDelegate.Closed(this);
    }
    #endregion
}

internal interface SavvyAdInterstitialDelegate
{
    internal void Loaded(SavvyAdInterstitial interstitialAd);
    internal void FailedToLoad(SavvyAdInterstitial interstitialAd, AdFailedToLoadEventArgs error);
    internal void Opening(SavvyAdInterstitial interstitialAd);
    internal void Closed(SavvyAdInterstitial interstitialAd);
    internal void FailedToShow(SavvyAdInterstitial interstitialAd, string error);
}