using UnityEngine;
using System.Collections;

public class MoverAscensor : MonoBehaviour {


    Animator anim;
    bool abajo;
    bool Triggerp = false;


    // Use this for initialization
    void Start () {
        anim = GetComponent<Animator>();
        abajo = true;
     
    }
	
	// Update is called once per frame
	void Update () {
        if (Input.GetKeyDown(KeyCode.G) && Triggerp)
        {
            if (abajo)
            {
                AscensorController("Subir");
                abajo = false;
            }
            else
            {
                AscensorController("Bajar");
                abajo = true;
            }
        }
    }


    void OnTriggerEnter(Collider col)
    {
        if (col.gameObject.tag == "Player")
        {
            Triggerp = true;
        }
    }

    void OnTriggerExit(Collider col)
    {
        if (col.gameObject.tag == "Player")
        {
            Triggerp = false;
        }
    }

    void AscensorController(string direction)
    {
        anim.SetTrigger(direction);
    }
}
