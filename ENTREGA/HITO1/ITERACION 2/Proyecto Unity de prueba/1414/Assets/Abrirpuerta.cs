using UnityEngine;
using System.Collections;

public class Abrirpuerta : MonoBehaviour {

	
	public bool abierto = false;
	public bool Triggerp = false;

	Animator anim;
	bool puerta;

	void Start () {
	
        
		abierto = false;

		anim = GetComponent<Animator> ();
		puerta = false;

	}


	void Update () {
	
		

		if (!abierto && Triggerp && Input.GetKeyDown (KeyCode.E)) 
		{
			
			puerta = true;
            doorController("Abrir");
            abierto = true;

        }
		else if(abierto && Triggerp && Input.GetKeyDown (KeyCode.E)) 
		{

			if (puerta) 
			{
				puerta = false;
				doorController ("Cerrar");
			}
            abierto = false;
		} 
	}


	void doorController(string direction) 
	{
		anim.SetTrigger(direction);
	}


	}

