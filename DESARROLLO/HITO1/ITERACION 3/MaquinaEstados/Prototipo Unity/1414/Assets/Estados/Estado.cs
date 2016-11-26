using UnityEngine;
using System.Collections;

public class Estado : MonoBehaviour {
	public int id;
	public Transform punto;
	// Use this for initialization
	public void Start () {
		 id = 0;
		punto = GetComponent<Transform> ();

	}

	public virtual void Entrada(){
	}

	public virtual void Salida(){
	}
	
	// Update is called once per frame
	public void Update () {
		
	}

	public virtual void Updatesec(){

	}
}
