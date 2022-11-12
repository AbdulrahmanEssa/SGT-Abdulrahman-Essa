using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class HomeViewController : MonoBehaviour
{
    private SavvyAdManager adManager;

    [SerializeField]
    private Button banner, interstitial, native, rewarded, rewardedInterstitial, clearAll;

    private void Start()
    {
        if (SavvyAdManager.instance != null)
        {
            adManager = SavvyAdManager.instance;
        }
        else
        {
            Debug.LogError("There is no instance of SavvyAdManager in the scene!");
        }

        banner.onClick.AddListener(OnClickBanner);
        interstitial.onClick.AddListener(OnClickInterstitial);
        native.onClick.AddListener(OnClickNative);
        rewarded.onClick.AddListener(OnClickRewarded);
        rewardedInterstitial.onClick.AddListener(OnClickRewardedInterstitial);
        clearAll.onClick.AddListener(OnClickClearAll);
    }


    public void OnClickBanner()
    {
        adManager.ShowAd(SavvyAdManager.AdType.banner);
    }
    public void OnClickInterstitial()
    {
        adManager.ShowAd(SavvyAdManager.AdType.interstitial);
    }
    public void OnClickNative()
    {
        adManager.ShowAd(SavvyAdManager.AdType.native);
    }
    public void OnClickRewarded()
    {
        adManager.ShowAd(SavvyAdManager.AdType.rewarded);
    }
    public void OnClickRewardedInterstitial()
    {
        adManager.ShowAd(SavvyAdManager.AdType.rewardedInterstitial);
    }
    public void OnClickClearAll()
    {
        adManager.HideAllAds();
    }

}
