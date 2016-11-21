using UnityEngine;
using System.Collections;

public class Abrirpuerta : MonoBehaviour {



	public bool Triggerp = false;

	Animator anim;
	SphereCollider punto;
	bool puerta;

	void Start () {
	



		anim = GetComponent<Animator> ();
		puerta = false;
		punto = GetComponent<SphereCollider> ();

	}


	void Update () {



		if (!puerta && Triggerp && Input.GetKeyDown (KeyCode.E)) 
		{

			puerta = true;			
				doorController ("Abrir");
			punto.center = new Vector3 (punto.center.x, punto.center.y, -1);
			

		}
		else if(puerta && Triggerp && Input.GetKeyDown (KeyCode.E)) 
		{
			




				puerta = false;
				doorController ("Cerrar");

			punto.center = new Vector3 (punto.center.x, punto.center.y, 0);

		} 
	}

	void OnTriggerEnter(Collider col)
	{
		if (col.gameObject.tag == "Player") {
			Triggerp = true;
		}
	}

	void OnTriggerExit(Collider col)
	{
		if (col.gameObject.tag == "Player") {
			Triggerp = false;
		}
	}


	void doorController(string direction) 
	{
		anim.SetTrigger(direction);
	}


	}

