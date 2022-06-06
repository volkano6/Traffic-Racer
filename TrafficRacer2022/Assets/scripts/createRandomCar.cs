using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class createRandomCar : MonoBehaviour
{   
    public GameObject newCar0, newCar1, newCar2, newCar3;
    public Vector3 newRoadPosition;

    private void OnCollisionEnter(Collision other) {

        GameObject[] cars = {newCar0, newCar1, newCar2, newCar3};
        float[] rotationOfRandomCars = {-2.67f, -1.17f, 0.46f, 2.02f};

        int createRandomCar = Random.Range(0, 4);
        int createRotatonOfRandomCars = Random.Range(0, 4);
        
        newRoadPosition = new Vector3(rotationOfRandomCars[createRotatonOfRandomCars],3.67f ,transform.position.z+50);
        
        //int random1 = random.Next(0, 5);
        Debug.Log(createRandomCar);
        
        Instantiate(cars[createRandomCar], newRoadPosition, Quaternion.identity);
    }
}