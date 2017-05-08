using UnityEngine;
using System.Collections;

public class MovimientoLOL : MonoBehaviour {

	public float velocidad = 8;
	private Vector3 posicionPersonaje;
	private Animator animator;

	private bool tieneUnObjetivo = false;
	private bool corriendo = false;
	private Vector3 objetivoActual;



	// Use this for initialization
	void Start () {

		this.animator = GetComponent<Animator> () as Animator;	

	}
	
	// Update is called once per frame
	void Update () {

		if(Mathf.Floor( transform.position.x ) == Mathf.Floor( posicionPersonaje.x) &&
		   Mathf.Floor( transform.position.z ) == Mathf.Floor( posicionPersonaje.z)){
			this.detenerModelo();
		}

		if (tieneUnObjetivo) {
				
			girarModelo(this.objetivoActual);
			moverModelo();
		}


		if (Input.GetKeyDown (KeyCode.Mouse0)) {
				
		


			Plane playerPlane = new Plane(Vector3.up,transform.position);
			Ray rayo  = Camera.main.ScreenPointToRay(Input.mousePosition);

			float hitdist = 0;

			if(playerPlane.Raycast(rayo, out hitdist))
			{

				posicionPersonaje  = rayo.GetPoint(hitdist);

				girarModelo(posicionPersonaje);
				this.objetivoActual = posicionPersonaje;

				tieneUnObjetivo = true;

				animator.SetBool("correr",true);

			}


		}


	
	}

	void detenerModelo()
	{
		this.tieneUnObjetivo = false;
		animator.SetBool ("correr", false);

	}

	void moverModelo()
	{
		transform.position = Vector3.MoveTowards (transform.position, posicionPersonaje, Time.deltaTime * velocidad);
	}
	void girarModelo(Vector3 posicionObjetivo)
	{
		this.objetivoActual = posicionObjetivo;
		transform.rotation = Quaternion.Slerp (transform.rotation, Quaternion.LookRotation (this.objetivoActual - this.transform.position), Time.deltaTime * 6f);
		                                                                                
		                                                                             
	}
		
	void girarModeloParaAtaque(Vector3 targetPos)
		{
			this.objetivoActual = targetPos;
			Quaternion targetRotation = Quaternion.LookRotation(objetivoActual - transform.position);
			transform.rotation = targetRotation;
		}


}