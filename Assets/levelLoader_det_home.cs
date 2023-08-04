using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class levelLoader_det_home : MonoBehaviour
{
    public Animator transition;
    public float transitionTime = 1f;
    public Button btn_d;
    // Start is called before the first frame update
    void Start()
    {
        btn_d.onClick.AddListener(LoadNextLevel);
    }

    // Update is called once per frame
    void Update()
    {

    }

    public void LoadNextLevel()
    {
        //StartCoroutine(LoadLevel(1 - SceneManager.GetActiveScene().buildIndex));
         StartCoroutine(LoadLevel(1));
    }

    IEnumerator LoadLevel(int levelIndex)
    {
        transition.SetTrigger("Start");

        yield return new WaitForSeconds(transitionTime);

        SceneManager.LoadScene(levelIndex);
    }
}
