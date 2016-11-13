using UnityEngine;
using System.Collections;

public class Abrirpuerta : MonoBehaviour {


	public bool T_ActivatedOpen = true;
	public bool T_ActivatedClose = false;
	public bool activateTrigger = false;

	Animator animator;
	bool doorOpen;
	// Use this for initialization
	void Start () {
	

		T_ActivatedOpen = true;
		T_ActivatedClose = false;

		animator = GetComponent<Animator> ();
		doorOpen = false;

	}
	
	// Update is called once per frame
	void Update () {
	
		if (T_ActivatedOpen == true)
			T_ActivatedClose = false;

		else if (T_ActivatedClose == true)
			T_ActivatedOpen = false;

		if (activateTrigger && Input.GetKeyDown (KeyCode.E)) //For some reaseon you can't have both E (open and close).
		{
			
			T_ActivatedOpen = false;
			T_ActivatedClose = true;

			doorOpen = true;



			if (doorOpen) 
			{
				doorOpen = true;
				doorController ("Abrir");
			}

		}
		else if(T_ActivatedClose && activateTrigger && Input.GetKey (KeyCode.F)) 
		{
			T_ActivatedOpen = true;
			T_ActivatedClose = false;


			if (doorOpen) 
			{
				doorOpen = false;
				doorController ("Cerrar");
			}

		} 
	}


	void doorController(string direction) //Animator function.
	{
		animator.SetTrigger(direction);
	}


	}

