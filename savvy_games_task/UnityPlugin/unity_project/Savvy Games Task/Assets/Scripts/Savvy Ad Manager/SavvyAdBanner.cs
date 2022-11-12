using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using GoogleMobileAds.Api;

internal class SavvyAdBanner : MonoBehaviour
{
    private BannerView bannerView;
    private bool isShown = false;
    internal SavvyAdBannerDelegate adDelegate;
    internal AdmobIdSet idSet;
    private string adUnitId;

    internal void Show()
    {
#if UNITY_ANDROID
        adUnitId = idSet.android;
#elif UNITY_IPHONE
        adUnitId = idSet.iOS;
#else
            adUnitId = "unexpected_platform";
#endif

        // Create banner and register event handlers
        bannerView = new BannerView(adUnitId: adUnitId, adSize: AdSize.IABBanner, AdPosition.Bottom);
        bannerView.OnAdLoaded += HandleOnAdLoaded;
        bannerView.OnAdFailedToLoad += HandleOnAdFailedToLoad;
        bannerView.OnAdOpening += HandleOnAdOpened;
        bannerView.OnAdClosed += HandleOnAdClosed;

        // Requests ad info from server
        AdRequest request = new AdRequest.Builder().Build();
        bannerView.LoadAd(request);
        isShown = true;

        // Custom refresher
        StartCoroutine(Refresher());
    }

    internal void Hide()
    {
        isShown = false;
        if(bannerView != null)
        bannerView.Destroy();
    }

    private IEnumerator Refresher()
    {
        yield return new WaitForSeconds(5);

        Hide();

        // Reset the timer if the banner is still shown
        if(isShown == true)
        {
            Show();
        }
    }

    #region Event Handlers
    private void HandleOnAdLoaded(object sender, EventArgs args)
    {
        print("HandleAdLoaded event received");
        print(args);
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

    private void HandleOnAdOpened(object sender, EventArgs args)
    {
        print("HandleAdOpened event received");
        if (adDelegate != null)
            adDelegate.Opened(this);
    }

    private void HandleOnAdClosed(object sender, EventArgs args)
    {
        print("HandleAdClosed event received");
        if (adDelegate != null)
            adDelegate.Closed(this);
    }
    #endregion
}

internal interface SavvyAdBannerDelegate
{
    void Loaded(SavvyAdBanner bannerAd);

    void FailedToLoad(SavvyAdBanner bannerAd, AdFailedToLoadEventArgs error);

    void Opened(SavvyAdBanner bannerAd);

    void Closed(SavvyAdBanner bannerAd);
}