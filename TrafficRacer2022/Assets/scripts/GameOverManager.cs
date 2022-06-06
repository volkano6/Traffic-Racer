using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GameOverManager : MonoBehaviour
{
    private void Start() {
        
    }
    public void mainMenuButton(){
        SceneManager.LoadScene(0);

    }
    public void restartButton(){
        SceneManager.LoadScene(1);
        
    }
    public void settingsButton(){
        SceneManager.LoadScene(0);
    }
    public void quitButton(){
        Application.Quit();
    }
}
