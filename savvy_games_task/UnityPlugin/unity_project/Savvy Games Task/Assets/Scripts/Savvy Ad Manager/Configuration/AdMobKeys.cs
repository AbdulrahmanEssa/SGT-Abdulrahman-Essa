using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;

[System.Serializable] [CreateAssetMenu(menuName ="SavvyAdManager/Admob Key Set")]
public class AdMobKeys : ScriptableObject
{
    [SerializeField] [TextArea(minLines: 3,maxLines:6)]
    private string description;
    public AdmobIdSet banner, interstitial, native, rewarded, rewardedInterstitial;
}

[System.Serializable]
public struct AdmobIdSet
{
    public string android;
    public string iOS;
}