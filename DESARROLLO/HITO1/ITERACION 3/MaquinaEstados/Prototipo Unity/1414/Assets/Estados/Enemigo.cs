using UnityEngine;
using System.Collections;

public class Enemigo : MonoBehaviour {


	Estado state;
	public GameObject g;
	// Use this for initialization
	void Start () {
		g = this.gameObject;
		state= g.GetComponent<Estado1> ();


	}
	
	// Update is called once per frame
	void Update () {
		//Debug.Log (state);
		state.Update ();

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
}
