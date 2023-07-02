using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ChangeScene : MonoBehaviour
{
    public void onClick()

    {
        SceneManager.LoadScene(1);
    }
}