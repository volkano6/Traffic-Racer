using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Score : MonoBehaviour
{
    public GameManager gm;
    public GameObject scoretext;
    public Text score;
    // Start is called before the first frame update
    void Start()
    {
        score = scoretext.GetComponent<Text>();
    }

    // Update is called once per frame
    void Update()
    {
        score.text = gm.score.ToString();
        PlayerPrefs.SetFloat("savedScore", gm.score);

    }
}
