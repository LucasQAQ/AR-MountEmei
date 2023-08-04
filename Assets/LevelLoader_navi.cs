using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class LevelLoader_navi : MonoBehaviour
{
    public Animator transition;
    public float transitionTime = 1f;
    public Button btn_n, btn_h, btn_help;
    public GameObject help_info;
    public int click_num;
    // Start is called before the first frame update
    void Start()
    {
        help_info.SetActive(false);
        btn_n.onClick.AddListener(LoadNextLevel);
        btn_h.onClick.AddListener(LoadHome);
        btn_help.onClick.AddListener(LoadHelp);
    }

    // Update is called once per frame
    void Update()
    {

    }
    public void LoadHelp()
    {
        click_num += 1;
        if (click_num == 1)
            help_info.SetActive(true);
        else
        {
            click_num = 0;
            help_info.SetActive(false);
        }
    }
    public void LoadHome()
    {
        //StartCoroutine(LoadLevel(1 - SceneManager.GetActiveScene().buildIndex));
        StartCoroutine(LoadLevel(0));
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
