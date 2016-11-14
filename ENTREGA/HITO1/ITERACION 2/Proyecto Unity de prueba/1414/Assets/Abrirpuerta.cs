using UnityEngine;
using System.Collections;

public class Abrirpuerta : MonoBehaviour {


	public bool Ahoraabierto = true;
	public bool Ahoracerrado = false;
	public bool Triggerp = false;

	Animator anim;
	bool puerta;

	void Start () {
	

		Ahoraabierto = true;
		Ahoracerrado = false;

		anim = GetComponent<Animator> ();
		puerta = false;

	}


	void Update () {
	
		if (Ahoraabierto == true)
			Ahoracerrado = false;

		else if (Ahoracerrado == true)
			Ahoraabierto = false;

		if (Ahoraabierto && Triggerp && Input.GetKeyDown (KeyCode.E)) 
		{
			
			Ahoraabierto = false;
			Ahoracerrado = true;

			puerta = true;





				
				doorController ("Abrir");
			

		}
		else if(Ahoracerrado && Triggerp && Input.GetKeyDown (KeyCode.E)) 
		{
			Ahoraabierto = true;
			Ahoracerrado = false;



			if (puerta) 
			{
				puerta = false;
				doorController ("Cerrar");
			}

		} 
	}


	void doorController(string direction) 
	{
		anim.SetTrigger(direction);
	}


	}

