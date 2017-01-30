using UnityEngine;
using System.Collections;

public class Enemigo : MonoBehaviour {


	Estado state;
	public GameObject g;
	int act=1;
	// Use this for initialization
	void Start () {
		g = this.gameObject;
		state= g.GetComponent<Perseguir> ();


	}
	
	// Update is called once per frame
	void Update () {
		//Debug.Log (state);
		if (Time.time >= act) {
			act = Mathf.FloorToInt (Time.time) + 1;
			state.Updatesec ();
			//Debug.Log (act);
		}
		if(Input.GetKeyDown(KeyCode.K)){
		 Change(10);
		}
		if(Input.GetKeyDown(KeyCode.R)){
			Change(11);
		}
		if(Input.GetKeyDown(KeyCode.P)){
			Change(12);
		}
	}

	void Change (int nuevo){
		switch (nuevo) {
		case 10:
			state.enabled=false;
		    //state.Salida();
			state=g.GetComponent<Perseguir>();
			state.enabled=true;
			//state.Entrada();
			break;
		case 11:
			state.enabled=false;
			//state.Salida();
			state=g.GetComponent<Alejarse>();
			state.enabled=true;
			//state.Entrada();
			break;
		case 12:
			state.enabled=false;
			//state.Salida();
			state=g.GetComponent<Irapunto>();
			state.enabled=true;
			//state.Entrada();
			break;
		}

	}


	/*
	 * 
	 * Como se hara change de verdad:
	 * void Change (int nuevo){
	 * switch (nuevo){
	 * case 1:
	 * state.enabled=false;
	 * state.Salida();
	 * state=g.GetComponent<Estado1>();
	 * state.enabled=true;
	 * state.Entrada();
	 * break;
	 * case 2:...
	 * }
	 * }
	 * 
	 * Otras funciones interesantes:
	 * Considerar si es necesario guardar el estado anterior en una variable, y volver a el inmediatamente.
	 * 
	 * */


}
