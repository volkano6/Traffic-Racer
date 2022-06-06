using UnityEngine;
using System.Collections;
 
 
public class CarController3: MonoBehaviour {
 
    public float enginePower = 0.0f;
    public float speed;
    public float power = 0.0f;
    public float brake = 0.0f;
    public float steer = 0.0f;
    public float maxSteer = 25.0f;
    public float centerOfMass_x =.0f;
    public float centerOfMass_y = -0.5f;
    public float centerOfMass_z = 0.3f;
    public WheelCollider Wheel_LF;
    public WheelCollider Wheel_RF;
    public WheelCollider Wheel_LR;
    public WheelCollider Wheel_RR;
    public GameObject Wheel_LF_obj, Wheel_RF_obj;
    Vector3 turnLeft, turnRight;

    public bool pressıngGas, pressıngBrake, pressıngRight, pressıngLeft;

    void Start()
    {
        GetComponent<Rigidbody>().centerOfMass=new Vector3(centerOfMass_x, centerOfMass_y, centerOfMass_z);
    }
 
    void Update ()
    {   
        speed = GetComponent<Rigidbody>().velocity.z * 10;

        power = enginePower * 7.0f * Time.deltaTime;
        steer = maxSteer;
        brake = GetComponent<Rigidbody>().mass * 0.5f;

        Wheel_LF.steerAngle=0;
        Wheel_RF.steerAngle=0;

        Wheel_LR.motorTorque=power;
        Wheel_RR.motorTorque=power;

        //DÜZELT
        turnLeft = Wheel_LF_obj.transform.localEulerAngles;
        turnLeft.y = Wheel_LF.steerAngle;
        Wheel_LF_obj.transform.localEulerAngles = turnLeft /50;

        turnRight = Wheel_RF_obj.transform.localEulerAngles;
        turnRight.y = Wheel_RF.steerAngle;
        Wheel_RF_obj.transform.localEulerAngles = turnRight /50;
        
        if(pressıngBrake && pressıngRight)
        {
            Wheel_LR.motorTorque=0.0f;
            Wheel_RR.motorTorque=0.0f;
            Wheel_LF.brakeTorque=brake;
            Wheel_RF.brakeTorque=brake;
            Wheel_LR.brakeTorque=brake;
            Wheel_RR.brakeTorque=brake;
            Wheel_LF.steerAngle=steer * 1;
            Wheel_RF.steerAngle=steer * 1;

        }
        
        if(pressıngGas&&pressıngRight)
        {
            Wheel_LF.brakeTorque=0;
            Wheel_RF.brakeTorque=0;
            Wheel_LR.brakeTorque=0;
            Wheel_RR.brakeTorque=0;
            Wheel_LR.motorTorque=power;
            Wheel_RR.motorTorque=power;
            Wheel_LF.steerAngle=steer * 1;
            Wheel_RF.steerAngle=steer * 1;
        }

        if(pressıngBrake && pressıngLeft)
        {
            Wheel_LR.motorTorque=0.0f;
            Wheel_RR.motorTorque=0.0f;
            Wheel_LF.brakeTorque=brake;
            Wheel_RF.brakeTorque=brake;
            Wheel_LR.brakeTorque=brake;
            Wheel_RR.brakeTorque=brake;
            Wheel_LF.steerAngle=steer * -1;
            Wheel_RF.steerAngle=steer * -1;

        }
        
        if(pressıngGas && pressıngLeft)
        {
            Wheel_LF.brakeTorque=0;
            Wheel_RF.brakeTorque=0;
            Wheel_LR.brakeTorque=0;
            Wheel_RR.brakeTorque=0;
            Wheel_LR.motorTorque=power;
            Wheel_RR.motorTorque=power;
            Wheel_LF.steerAngle=steer * -1;
            Wheel_RF.steerAngle=steer * -1;
        }

        if(pressıngBrake)
        {
            Wheel_LR.motorTorque=0.0f;
            Wheel_RR.motorTorque=0.0f;
            Wheel_LF.brakeTorque=brake;
            Wheel_RF.brakeTorque=brake;
            Wheel_LR.brakeTorque=brake;
            Wheel_RR.brakeTorque=brake;

        }
        
        if(pressıngGas)
        {
            Wheel_LF.brakeTorque=0;
            Wheel_RF.brakeTorque=0;
            Wheel_LR.brakeTorque=0;
            Wheel_RR.brakeTorque=0;
            Wheel_LR.motorTorque=power;
            Wheel_RR.motorTorque=power;
        }

        if(pressıngLeft)
        {
            Wheel_LF.steerAngle=steer * -1;
            Wheel_RF.steerAngle=steer * -1;

        }
        
        if(pressıngRight)
        {
            Wheel_LF.steerAngle=steer * 1;
            Wheel_RF.steerAngle=steer * 1;
        }

        
    }
    public void brakeDown(){
        pressıngBrake = true;
        pressıngGas = false;
    }
    public void brakeExit(){
        pressıngBrake = false;
        pressıngGas = true;
    }
    public void gasDown(){
        pressıngGas = true;
    }
    public void gasExit(){
        pressıngGas = false;
    }


    public void rightDown(){
        pressıngRight = true;
    }
    public void rightExit(){
        pressıngRight = false;
    }
    public void leftDown(){
        pressıngLeft = true;
    }
    public void leftExit(){
        pressıngLeft = false;
    }
    


    
}