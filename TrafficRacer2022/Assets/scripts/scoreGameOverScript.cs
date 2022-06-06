using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class scoreGameOverScript : MonoBehaviour
{
    public GameObject scoretext;
    public Text score;
    // Start is called before the first frame update
    void Start()
    {
        score = scoretext.GetComponent<Text>();
        score.text = PlayerPrefs.GetFloat("savedScore").ToString();
    }
}
