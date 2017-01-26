using UnityEngine;
using System.Collections;

public class Alejarse : Estado {

	// Use this for initialization
	void Start () {
		id = 11;
		punto = GetComponent<Transform> ();
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public override void Updatesec () {
		
		GameObject g= GameObject.FindGameObjectWithTag("Player");
		if(punto.position.x>g.transform.position.x){
			punto.position=new Vector3(punto.position.x+1,punto.position.y,punto.position.z);
		}
		else{
			punto.position=new Vector3(punto.position.x-1,punto.position.y,punto.position.z);
		}

		if(punto.position.z>g.transform.position.z){
			punto.position=new Vector3(punto.position.x,punto.position.y,punto.position.z+1);
		}
		else{
			punto.position=new Vector3(punto.position.x,punto.position.y,punto.position.z-1);
		}
	}

}
