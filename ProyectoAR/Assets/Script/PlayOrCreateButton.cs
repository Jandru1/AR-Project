using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PlayOrCreateButton : MonoBehaviour
{
    public Button PlayButton;
    public Button CreateButton;

    public Button MarronButton;
    public Button BlancoButton;
    public Button VerdeButton;
    public Button LilaButton;

    public GameObject ScoreBoard;

    public GameObject shoot;

    public GameObject timer;

    // Start is called before the first frame update
    void Start()
    {
        shoot.SetActive(false);
    }

    // Update is called once per frame
    void Update()
    {

    }

    public void Create()
    {
        SetColorsButtonsActive();
        PlayButton.gameObject.SetActive(true);
        CreateButton.gameObject.SetActive(false);
        ScoreBoard.gameObject.SetActive(false);
        timer.gameObject.SetActive(false);
    }

    public void Play()
    {
        SetColorsButtonsInactive();
        PlayButton.gameObject.SetActive(false);
        CreateButton.gameObject.SetActive(true);
        shoot.SetActive(true);
        ScoreBoard.gameObject.SetActive(true);
        timer.gameObject.SetActive(true);

        timer.GetComponent<Timer>().ResetTimer();//En teoria resetea el timer
    }

    void SetColorsButtonsActive()
    {
        MarronButton.gameObject.SetActive(true);
        BlancoButton.gameObject.SetActive(true);
        VerdeButton.gameObject.SetActive(true);
        LilaButton.gameObject.SetActive(true);
        shoot.SetActive(false);
    }
    void SetColorsButtonsInactive()
    {
        MarronButton.gameObject.SetActive(false);
        BlancoButton.gameObject.SetActive(false);
        VerdeButton.gameObject.SetActive(false);
        LilaButton.gameObject.SetActive(false);
    }
}