using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class SavvyMessageBoard : MonoBehaviour
{
    [SerializeField]
    private bool consolify;
    [SerializeField]
    private TextMeshProUGUI label;

    private void Awake()
    {
        label = GetComponent<TextMeshProUGUI>();
    }

    public void printMessage(string message)
    {
        string text = "";
        if (consolify)
            text = "> ";
        text += message;
        label.text = text;
    }

    public void printError(string message)
    {
        label.color = Color.red;
        printMessage(message);
    }
}
