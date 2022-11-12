using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using GoogleMobileAds.Api;


internal class SavvyAdRewardedInterstitial : MonoBehaviour
{
    private RewardedInterstitialAd rewardedInterstitialAd;
    internal SavvyAdRewardedInterstitialDelegate adDelegate;
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
        // Create an empty ad request.
        AdRequest request = new AdRequest.Builder().Build();
        // Load the rewarded ad with the request.
        RewardedInterstitialAd.LoadAd(adUnitId, request, adLoadCallback);
    }

    internal void Show()
    {
        if (rewardedInterstitialAd != null)
        {
            rewardedInterstitialAd.Show(userEarnedRewardCallback);
        }
    }

    internal void Hide()
    {
        rewardedInterstitialAd.Destroy();
    }

    private void userEarnedRewardCallback(Reward reward)
    {
        if (adDelegate != null)
            adDelegate.Rewarded(this, reward);
    }

    private void adLoadCallback(RewardedInterstitialAd ad, AdFailedToLoadEventArgs error)
    {
        if (error == null)
        {
            rewardedInterstitialAd = ad;

            rewardedInterstitialAd.OnAdFailedToPresentFullScreenContent += HandleAdFailedToPresent;
            rewardedInterstitialAd.OnAdDidPresentFullScreenContent += HandleAdDidPresent;
            rewardedInterstitialAd.OnAdDidDismissFullScreenContent += HandleAdDidDismiss;
            rewardedInterstitialAd.OnPaidEvent += HandlePaidEvent;
        }
        else
        {

        }
    }

    #region Event Handlers
    private void HandleAdFailedToPresent(object sender, AdErrorEventArgs args)
    {
        print("Rewarded interstitial ad has failed to present.");
        if (adDelegate != null)
            adDelegate.FailedToPresent(this, args);
    }

    private void HandleAdDidPresent(object sender, EventArgs args)
    {
        print("Rewarded interstitial ad has presented.");
        if (adDelegate != null)
            adDelegate.Presented(this);
    }

    private void HandleAdDidDismiss(object sender, EventArgs args)
    {
        print("Rewarded interstitial ad has dismissed presentation.");
        if (adDelegate != null)
            adDelegate.Dismissed(this);
    }

    private void HandlePaidEvent(object sender, AdValueEventArgs args)
    {
        print(
            "Rewarded interstitial ad has received a paid event.");
        if (adDelegate != null)
            adDelegate.PaidEvent(this);
    }
    #endregion
}

internal interface SavvyAdRewardedInterstitialDelegate
{
    internal void Presented(SavvyAdRewardedInterstitial rewardedInterstitialAd);
    internal void Dismissed(SavvyAdRewardedInterstitial rewardedInterstitialAd);
    internal void PaidEvent(SavvyAdRewardedInterstitial rewardedInterstitialAd);
    internal void FailedToPresent(SavvyAdRewardedInterstitial rewardedInterstitialAd, AdErrorEventArgs error);
    internal void Rewarded(SavvyAdRewardedInterstitial rewardedInterstitialAd, Reward reward);
}