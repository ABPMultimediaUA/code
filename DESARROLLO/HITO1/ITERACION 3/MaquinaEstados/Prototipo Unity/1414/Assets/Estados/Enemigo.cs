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
		 Change();
		}
	}

			void Change (){
		if (state.id == 1) {
			
			state.enabled = false;
			//state.Salida();
			state=g.GetComponent<Estado2>();
			state.enabled = true;
			//state.Entrada

		} else {
			
			state.enabled = false;
			//state.Salida();
			state=g.GetComponent<Estado1>();
			state.enabled = true;
			//state.Entrada
		}
		//Debug.Log (state);
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
