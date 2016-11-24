using UnityEngine;
using System.Collections;

public class Estado1 : Estado {




	// Use this for initialization
	public void Start () {
		id = 1;
		punto = GetComponent<Transform> ();
	}
	
	// Update is called once per frame
	public void Update () {


			punto.transform.position = new Vector3 (punto.transform.position.x + 1, punto.transform.position.y, punto.transform.position.z);

			


	}
}
