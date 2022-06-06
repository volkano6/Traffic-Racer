using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class awakeManager : MonoBehaviour
{
    public GameObject selectedCar, toRotate, car,car1, car2, car3;
    private Vector3 shown_position = new Vector3( 0.48f, 2.35f, 1.8f);
    private Vector3 cars_rotation = new Vector3(0, 180, 0);
    private Vector3 car_position = new Vector3( -3.6f, 1.82f, 4.53f);
    private Vector3 car1_position = new Vector3( -0.99f, 2.17f, 5.25f);
    private Vector3 car2_position = new Vector3( 2.14f, 2f, 4.96f);
    private Vector3 car3_position = new Vector3( 4.57f, 2.18f, 4.53f);
    private float rotateSpeed = 9.0f;
    public int currentCarNum = 0;
    private int previousCarNum = 3;

    private void FixedUpdate() {
        
        GameObject[] cars = {car, car1, car2, car3};
        Vector3[] positions = {car_position, car1_position, car2_position, car3_position};
        
        cars[0].transform.position = positions[0];
        cars[1].transform.position = positions[1];
        cars[2].transform.position = positions[2];
        cars[3].transform.position = positions[3];

        toRotate.transform.RotateAround(toRotate.transform.position, toRotate.transform.up, Time.deltaTime * rotateSpeed); 
        cars[currentCarNum].transform.RotateAround(toRotate.transform.position, toRotate.transform.up, Time.deltaTime * rotateSpeed); 
        cars[currentCarNum].transform.position = shown_position;
        selectedCar = cars[currentCarNum];
        cars[previousCarNum].transform.rotation = Quaternion.Euler(cars_rotation);
        
    }
    public void playGameButton(){
        PlayerPrefs.SetString("selectedCar", selectedCar.name);
        SceneManager.LoadScene(1);
        
    }
    public void quitButton(){
        Application.Quit();
    }
    public void nextCarButton(){
        
        
        if (currentCarNum < 3)
        {
            previousCarNum = currentCarNum;
            currentCarNum++;
        }else
        {
            previousCarNum = currentCarNum;
            currentCarNum = 0;
        }
    }
    public void previousCarButton(){
        
        if (currentCarNum > 0)
        {
            previousCarNum = currentCarNum;
            currentCarNum--;
        }else
        {
            previousCarNum = currentCarNum;
            currentCarNum = 3;
        }
    }


}
