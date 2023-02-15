using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class Scoring : MonoBehaviour
{
    TextMeshProUGUI scoreText;
    GameObject scoreBoardUI;
    public static int score;

    private void Start()
    {
        gameObject.GetComponent<Shoot>().enabled = true;
        scoreBoardUI = GameObject.FindGameObjectWithTag("scoreBoardUI");
        scoreText = GameObject.FindGameObjectWithTag("score").GetComponent<TextMeshProUGUI>();
    }

    private void Update() 
    {
        scoreText.text = "Score: " + score.ToString();    
    }
}
