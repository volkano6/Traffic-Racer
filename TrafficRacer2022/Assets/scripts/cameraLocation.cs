using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class cameraLocation : MonoBehaviour
{
    public GameObject road;
    public GameManager game_manager;
    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        transform.position = new Vector3(road.transform.position.x, 6.0f, game_manager.activeCar.transform.position.z - 3.5f);
        //transform.position = new Vector3(game_manager.activeCar.transform.position.x, 3.82f, game_manager.activeCar.transform.position.z + 0.1f);

    }
}
