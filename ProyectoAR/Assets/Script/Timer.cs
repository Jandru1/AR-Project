using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using static PlayOrCreateButton;

public class Timer : MonoBehaviour
{
    public TextMeshProUGUI timer;
    public float tiempoIni;
    public float tiempo;

    public Button CreateButton;


    // Start is called before the first frame update
    void Start()
    {
       tiempo = tiempoIni;
       timer.text = tiempo.ToString();
    }

    // Update is called once per frame
    void Update()
    {
        if(tiempo > 0 && timer.isActiveAndEnabled)
        {
            tiempo -= Time.deltaTime;
            timer.text = tiempo.ToString("f0");
        }

        else if(tiempo == 0)
        {
            Instantiate(CreateButton);
        }
    }

    public void ResetTimer()
    {
        tiempo = tiempoIni;
    }
}
