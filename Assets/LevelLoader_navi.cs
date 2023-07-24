using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class LevelLoader_navi : MonoBehaviour
{
    public Animator transition;
    public float transitionTime = 1f;
    public Button btn_n, btn_h;
    // Start is called before the first frame update
    void Start()
    {
        btn_n.onClick.AddListener(LoadNextLevel);
        btn_h.onClick.AddListener(LoadHome);
    }

    // Update is called once per frame
    void Update()
    {

    }
    public void LoadHome()
    {
        //StartCoroutine(LoadLevel(1 - SceneManager.GetActiveScene().buildIndex));
        StartCoroutine(LoadLevel(2));
    }

    public void LoadNextLevel()
    {
        //StartCoroutine(LoadLevel(1 - SceneManager.GetActiveScene().buildIndex));
        if (SceneManager.GetActiveScene().buildIndex == 1 || SceneManager.GetActiveScene().buildIndex == 2)
        {
            StartCoroutine(LoadLevel(0));
        }
        else
        {
            StartCoroutine(LoadLevel(1));
        }
    }

    IEnumerator LoadLevel(int levelIndex)
    {
        transition.SetTrigger("Start");

        yield return new WaitForSeconds(transitionTime);

        SceneManager.LoadScene(levelIndex);
    }
}
