using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using GoogleMobileAds.Api;
using GoogleMobileAds.Mediation;
using GoogleMobileAds.Api.Mediation.AdColony;
using GoogleMobileAds.Api.Mediation;

/// <summary>
/// This will be our main contact point with the module
/// </summary>
public class SavvyAdManager : MonoBehaviour, SavvyAdBannerDelegate, SavvyAdInterstitialDelegate, SavvyAdNativeDelegate, SavvyAdRewardedDelegate, SavvyAdRewardedInterstitialDelegate
{
    public AdMobKeys keys;
    public SavvyMessageBoard messageBoard;

    // Singleton creation
    private static SavvyAdManager _instance;

    // Various Ad heads
    private SavvyAdBanner adBanner;
    private SavvyAdInterstitial adInterstitial;
    private SavvyAdNative adNative;
    // The view of the native ad is decoupled from the NativeAdManager
    private SavvyAdNativeView adNativeView;
    private SavvyAdRewarded adRewarded;
    private SavvyAdRewardedInterstitial adRewardedInterstitial;

    public enum AdType
    {
        banner,
        interstitial,
        native,
        rewarded,
        rewardedInterstitial
    }

    // Singleton
    public static SavvyAdManager instance
    {
        get { return _instance; }
    }

    private void Awake()
    {
        if (_instance != null && _instance != this)
        {
            Destroy(gameObject);
        }
        else
        {
            _instance = this;
        }

        // Set app-level configurations
        InitializeMobileAds();


        // Load all ads so we don't have to do it when the request comes
        adBanner = gameObject.AddComponent<SavvyAdBanner>();
        adBanner.idSet = keys.banner;
        adBanner.adDelegate = this;

        adInterstitial = gameObject.AddComponent<SavvyAdInterstitial>();
        adInterstitial.idSet = keys.interstitial;
        adInterstitial.adDelegate = this;
        adInterstitial.Prepare();


        adNative = gameObject.AddComponent<SavvyAdNative>();
        adNative.idSet = keys.native;
        adNative.adDelegate = this;
        adNativeView = gameObject.GetComponentInChildren<SavvyAdNativeView>(true);
        adNative.view = adNativeView;
        adNative.Prepare();

        adRewarded = gameObject.AddComponent<SavvyAdRewarded>();
        adRewarded.idSet = keys.rewarded;
        adRewarded.adDelegate = this;
        adRewarded.Prepare();

        adRewardedInterstitial = gameObject.AddComponent<SavvyAdRewardedInterstitial>();
        adRewardedInterstitial.idSet = keys.rewardedInterstitial;
        adRewardedInterstitial.adDelegate = this;
        adRewardedInterstitial.Prepare();

    }


    private void Start()
    {
        //testing grounds

        //adBanner.Show();
        //adInterstitial.Show();
        //adNative.Show(); 
        //adRewarded.Show();
        //adRewardedInterstitial.Show();
    }

    private void InitializeMobileAds()
    {
        // Initialize the Mobile Ads SDK.
        MobileAds.Initialize((initStatus) =>
        {
            Dictionary<string, AdapterStatus> map = initStatus.getAdapterStatusMap();
            foreach (KeyValuePair<string, AdapterStatus> keyValuePair in map)
            {
                string className = keyValuePair.Key;
                AdapterStatus status = keyValuePair.Value;
                switch (status.InitializationState)
                {
                    case AdapterState.NotReady:
                        // The adapter initialization did not complete.
                        print("Adapter: " + className + " not ready.");
                        break;
                    case AdapterState.Ready:
                        // The adapter was successfully initialized.
                        print("Adapter: " + className + " is initialized.");
                        break;
                }
            }
        });

        AdColonyAppOptions.SetUserId("myUser");
        AdColonyAppOptions.SetTestMode(true);
    }

    #region Access Points
    public void ShowAd(AdType ofType)
    {
        switch (ofType)
        {
            case AdType.banner:
                adBanner.Show();
                break;
            case AdType.interstitial:
                adInterstitial.Show();
                adInterstitial.Prepare();
                break;
            case AdType.native:
                adNative.Show();
                adNative.Prepare();
                break;
            case AdType.rewarded:
                adRewarded.Show();
                adRewarded.Prepare();
                break;
            case AdType.rewardedInterstitial:
                adRewardedInterstitial.Show();
                adRewardedInterstitial.Prepare();
                break;
        }
    }

    public void HideAd(AdType ofType)
    {
        switch (ofType)
        {
            case AdType.banner:
                adBanner.Hide();
                break;
            case AdType.interstitial:
                adInterstitial.Hide();
                break;
            case AdType.native:
                adNative.Hide();
                break;
            case AdType.rewarded:
                adRewarded.Hide();
                break;
            case AdType.rewardedInterstitial:
                adRewardedInterstitial.Hide();
                break;
        }
    }

    public void HideAllAds()
    {
        adBanner.Hide();
        adInterstitial.Hide();
        adNative.Hide();
        adRewarded.Hide();
        adRewardedInterstitial.Hide();

        messageBoard.printMessage("Cleared all ads");
    }
    #endregion

    // Delegates help us decouple the lower levels of the code from the top level, now each ad module can run on its own, but can also accept a delegate to handle its callbacks. We could take this further and create a delegate for SavvyAdManager if we need to.
    #region Delegates
    #region Banner Delegate
    void SavvyAdBannerDelegate.Loaded(SavvyAdBanner bannerAd)
    {
        messageBoard.printMessage("Banner Ad Loaded");
    }

    void SavvyAdBannerDelegate.FailedToLoad(SavvyAdBanner bannerAd, AdFailedToLoadEventArgs error)
    {
        messageBoard.printError("ERROR: Could not load banner due to: " + error.LoadAdError.GetMessage());
    }

    void SavvyAdBannerDelegate.Opened(SavvyAdBanner bannerAd)
    {
        messageBoard.printMessage("Banner Ad Opened");
    }

    void SavvyAdBannerDelegate.Closed(SavvyAdBanner bannerAd)
    {
        messageBoard.printMessage("Banner Ad Closed");
    }
    #endregion

    #region Interstitial Delegate
    void SavvyAdInterstitialDelegate.Loaded(SavvyAdInterstitial interstitialAd)
    {
        messageBoard.printMessage("Loaded interstitial ad");
    }

    void SavvyAdInterstitialDelegate.FailedToLoad(SavvyAdInterstitial interstitialAd, AdFailedToLoadEventArgs error)
    {
        messageBoard.printError("Failed to load interstitial ad due to: " + error.LoadAdError.GetMessage());
    }

    void SavvyAdInterstitialDelegate.Opening(SavvyAdInterstitial interstitialAd)
    {
        messageBoard.printMessage("Opening interstitial ad");
    }

    void SavvyAdInterstitialDelegate.Closed(SavvyAdInterstitial interstitialAd)
    {
        messageBoard.printMessage("Closed interstitial ad");
    }

    void SavvyAdInterstitialDelegate.FailedToShow(SavvyAdInterstitial interstitialAd, string error)
    {
        messageBoard.printError("Could not display interstitial ad due to: " + error);
    }
    #endregion

    #region Native Delegate
    void SavvyAdNativeDelegate.FailedToLoad(SavvyAdNative nativeAd, AdFailedToLoadEventArgs error)
    {
        messageBoard.printError("Could not load native ad due to: " + error.LoadAdError.GetMessage());
    }

    void SavvyAdNativeDelegate.Loaded(SavvyAdNative nativeAd)
    {
        messageBoard.printMessage("Loaded native ad");
    }

    void SavvyAdNativeDelegate.FailedToRegisterGameObjectOn(SavvyAdNative nativeAd, GameObject gameObject)
    {
        messageBoard.printError("Could not register gameobject: " + gameObject.name + " to be part of native ad");
    }

    void SavvyAdNativeDelegate.Closed(SavvyAdNative nativeAd)
    {
        messageBoard.printMessage("Closed native ad");
    }
    #endregion

    #region Rewarded Delegate
    void SavvyAdRewardedDelegate.Loaded(SavvyAdRewarded rewardedAd)
    {
        messageBoard.printMessage("Loaded rewarded ad");
    }

    void SavvyAdRewardedDelegate.FailedToLoad(SavvyAdRewarded rewardedAd, AdFailedToLoadEventArgs error)
    {
        messageBoard.printError("Could not load rewarded ad due to: " + error.LoadAdError.GetMessage());
    }

    void SavvyAdRewardedDelegate.Opening(SavvyAdRewarded rewardedAd)
    {
        messageBoard.printMessage("Opening rewarded ad");
    }

    void SavvyAdRewardedDelegate.FailedToShow(SavvyAdRewarded rewardedAd, AdErrorEventArgs error)
    {
        messageBoard.printError("Could not load rewarded ad due to: " + error.AdError.GetMessage());
    }

    void SavvyAdRewardedDelegate.Closed(SavvyAdRewarded rewardedAd)
    {
        messageBoard.printMessage("Closed rewarded ad");
    }

    void SavvyAdRewardedDelegate.UserEarnedRewardOn(SavvyAdRewarded rewardedAd, double amount, string type)
    {
        messageBoard.printMessage("Congratulations! You've earned " + amount + " " + type);
    }
    #endregion

    #region Rewarded Interstitial Delegate
    void SavvyAdRewardedInterstitialDelegate.Presented(SavvyAdRewardedInterstitial rewardedInterstitialAd)
    {
        messageBoard.printMessage("Presented rewarded interstitial ad");
    }

    void SavvyAdRewardedInterstitialDelegate.Dismissed(SavvyAdRewardedInterstitial rewardedInterstitialAd)
    {
        messageBoard.printMessage("Dismissed rewarded interstitial ad");
    }

    void SavvyAdRewardedInterstitialDelegate.PaidEvent(SavvyAdRewardedInterstitial rewardedInterstitialAd)
    {
        messageBoard.printMessage("Paid event! (no idea what that means)");
    }

    void SavvyAdRewardedInterstitialDelegate.FailedToPresent(SavvyAdRewardedInterstitial rewardedInterstitialAd, AdErrorEventArgs error)
    {
        messageBoard.printError("Could not present rewarded interstitial ad due to: " + error.AdError.GetMessage());
    }

    void SavvyAdRewardedInterstitialDelegate.Rewarded(SavvyAdRewardedInterstitial rewardedInterstitialAd, Reward reward)
    {
        messageBoard.printMessage("Congratulations! You've earned " + reward.Amount + " " + reward.Type);
    }
    #endregion
    #endregion
}