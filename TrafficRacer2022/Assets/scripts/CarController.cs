using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class CarController : MonoBehaviour
{   
    public GameObject mainCar;
    public Rigidbody car;
    public float velocity;
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {  

        car.velocity = new Vector3(0,0, velocity);


    }
    private void OnCollisionEnter(Collision other) {
        
        if (other.gameObject.name == PlayerPrefs.GetString("selectedCar"))
        {
            SceneManager.LoadScene(2);
        }
        
        
    }
}
