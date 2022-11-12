using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using GoogleMobileAds.Api;
using GoogleMobileAds.Api.Mediation.AdColony;

internal class SavvyAdRewarded : MonoBehaviour
{
    private RewardedAd rewardedAd;
    private string adUnitId;
    internal AdmobIdSet idSet;
    internal SavvyAdRewardedDelegate adDelegate;

    internal void Prepare()
    {
        #if UNITY_ANDROID
            adUnitId = idSet.android;
#elif UNITY_IPHONE
        adUnitId = idSet.iOS;
#else
            adUnitId = "unexpected_platform";
#endif

        rewardedAd = new RewardedAd(adUnitId);

        // Called when an ad request has successfully loaded.
        rewardedAd.OnAdLoaded += HandleRewardedAdLoaded;
        // Called when an ad request failed to load.
        rewardedAd.OnAdFailedToLoad += HandleRewardedAdFailedToLoad;
        // Called when an ad is shown.
        rewardedAd.OnAdOpening += HandleRewardedAdOpening;
        // Called when an ad request failed to show.
        rewardedAd.OnAdFailedToShow += HandleRewardedAdFailedToShow;
        // Called when the user should be rewarded for interacting with the ad.
        rewardedAd.OnUserEarnedReward += HandleUserEarnedReward;
        // Called when the ad is closed.
        rewardedAd.OnAdClosed += HandleRewardedAdClosed;

        // Set ad request parameters
        AdColonyMediationExtras extras = new AdColonyMediationExtras();
        extras.SetShowPrePopup(true);
        extras.SetShowPostPopup(true);

        AdRequest request = new AdRequest.Builder()
                .AddMediationExtras(extras)
                .Build();
        rewardedAd.LoadAd(request);
    }

    internal void Show()
    {
        rewardedAd.Show();
    }

    internal void Hide()
    {
        rewardedAd.Destroy();
    }

    #region Event Handlers
    internal void HandleRewardedAdLoaded(object sender, EventArgs args)
    {
        print("HandleRewardedAdLoaded event received");
        if (adDelegate != null)
            adDelegate.Loaded(this);
    }

    internal void HandleRewardedAdFailedToLoad(object sender, AdFailedToLoadEventArgs args)
    {
        print(
            "HandleRewardedAdFailedToLoad event received with message: "
                             + args.LoadAdError.GetMessage());
        if (adDelegate != null)
            adDelegate.FailedToLoad(this, args);
    }

    internal void HandleRewardedAdOpening(object sender, EventArgs args)
    {
        print("HandleRewardedAdOpening event received");
        if (adDelegate != null)
            adDelegate.Opening(this);
    }

    internal void HandleRewardedAdFailedToShow(object sender, AdErrorEventArgs args)
    {
        print(
            "HandleRewardedAdFailedToShow event received with message: "
                             + args.AdError.GetMessage());
        if (adDelegate != null)
            adDelegate.FailedToShow(this, args);
    }

    internal void HandleRewardedAdClosed(object sender, EventArgs args)
    {
        print("HandleRewardedAdClosed event received");
        if (adDelegate != null)
            adDelegate.Closed(this);
    }

    internal void HandleUserEarnedReward(object sender, Reward args)
    {
        string type = args.Type;
        double amount = args.Amount;
        print(
            "HandleRewardedAdRewarded event received for "
                        + amount.ToString() + " " + type);
        if (adDelegate != null)
            adDelegate.UserEarnedRewardOn(this, amount, type);
    }
    #endregion
}

internal interface SavvyAdRewardedDelegate
{
    internal void Loaded(SavvyAdRewarded rewardedAd);
    internal void FailedToLoad(SavvyAdRewarded rewardedAd, AdFailedToLoadEventArgs error);
    internal void Opening(SavvyAdRewarded rewardedAd);
    internal void FailedToShow(SavvyAdRewarded rewardedAd, AdErrorEventArgs error);
    internal void Closed(SavvyAdRewarded rewardedAd);
    internal void UserEarnedRewardOn(SavvyAdRewarded rewardedAd, double amount, string type);
}