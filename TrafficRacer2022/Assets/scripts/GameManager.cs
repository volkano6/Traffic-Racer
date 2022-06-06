using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviour
{   
    public GameObject activeCar, car,car1, car2, car3;
    
    public float score = 0;
    
    // Start is called before the first frame update
    void Start()
    {   
        car.SetActive(false);
        car1.SetActive(false);
        car2.SetActive(false);
        car3.SetActive(false);
        GameObject[] cars = {car,car1, car2, car3};
        for (int i = 0; i < cars.Length; i++)
        {
            if (PlayerPrefs.GetString("selectedCar") == cars[i].name)
            {
                cars[i].SetActive(true);
                activeCar = cars[i];
            }
        }
        
    }

    // Update is called once per frame
    void Update()
    {   
       
    }
    public void goToMaınMenu(){
        SceneManager.LoadScene(0);
    }
}
