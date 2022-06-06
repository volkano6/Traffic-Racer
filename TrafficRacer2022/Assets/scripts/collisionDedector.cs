using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class collisionDedector : MonoBehaviour
{   
    public GameManager game_manager;
    public GameObject road, mainCar;

    public Vector3 newRoadPosition;
    public GameObject newCar0, newCar1, newCar2, newCar3;
    public Vector3 newCarRoadPosition, secondNewCarRoadPosition, thirdNewCarRoadPosition;
    


    private void OnCollisionEnter(Collision other) {

        mainCar = game_manager.activeCar;

        if (other.gameObject.name == mainCar.name)
        {
            game_manager.score += 10;
            Debug.Log(game_manager.score); 
            
            newRoadPosition = new Vector3(0,0,road.transform.position.z + (4f*39.14f));
            road.transform.position = newRoadPosition;


            GameObject[] cars = {newCar0, newCar1, newCar2, newCar3};
            float[] rotationOfRandomCars = {-2.67f, -1.17f, 0.46f, 2.02f};

            int createRandomCar = Random.Range(0, 4);
            int secondCreateRandomCar = Random.Range(0, 4);
    
            

            int createRotatonOfRandomCars = Random.Range(0, 4);
            int secondCreateRotatonOfRandomCars = Random.Range(0, 4);
            while(createRotatonOfRandomCars == secondCreateRotatonOfRandomCars)
            {
                secondCreateRotatonOfRandomCars = Random.Range(0, 4);
            }

            int randomDistance = Random.Range(50, 70);
            int secondRandomDistance = Random.Range(50, 70);
            
            newCarRoadPosition = new Vector3(rotationOfRandomCars[createRotatonOfRandomCars],3.67f ,game_manager.activeCar.transform.position.z + randomDistance);
            secondNewCarRoadPosition = new Vector3(rotationOfRandomCars[secondCreateRotatonOfRandomCars],3.67f ,game_manager.activeCar.transform.position.z + secondRandomDistance);
        
            Instantiate(cars[createRandomCar], newCarRoadPosition, Quaternion.identity);
            Instantiate(cars[secondCreateRandomCar], secondNewCarRoadPosition, Quaternion.identity);

            float currentScore = PlayerPrefs.GetFloat("savedScore");
            if (currentScore >= 150.0f)
            {
                int thirdCreateRandomCar = Random.Range(0, 4);
                int thirdCreateRotatonOfRandomCars = Random.Range(0, 4);
                int thirdRandomDistance = Random.Range(50, 70);

                while(thirdCreateRotatonOfRandomCars == secondCreateRotatonOfRandomCars)
                {
                    thirdCreateRotatonOfRandomCars = Random.Range(0, 4);
                }

                while(thirdCreateRandomCar == secondCreateRandomCar)
                {
                    thirdCreateRandomCar = Random.Range(0, 4);
                }

                thirdNewCarRoadPosition = new Vector3(rotationOfRandomCars[thirdCreateRotatonOfRandomCars],3.67f ,game_manager.activeCar.transform.position.z + thirdRandomDistance);
                Instantiate(cars[thirdCreateRandomCar], thirdNewCarRoadPosition, Quaternion.identity);

            }
            

            
        }
        
        
    }
}
