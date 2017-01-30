using UnityEngine;
using System.Collections;

public class Perseguir : Estado {


	// Use this for initialization
	public void  Start () {
		id = 10;
		punto = GetComponent<Transform> ();

	}
	
	// Update is called once per frame
	void Update () {
		/*GameObject g= GameObject.FindGameObjectWithTag("Player");
		if(punto.position.x>g.transform.position.x){
			punto.position=new Vector3(punto.position.x-1,punto.position.y,punto.position.z);
		}
		else{
			punto.position=new Vector3(punto.position.x+1,punto.position.y,punto.position.z);
		}

		if(punto.position.z>g.transform.position.z){
			punto.position=new Vector3(punto.position.x,punto.position.y,punto.position.z-1);
		}
		else{
			punto.position=new Vector3(punto.position.x,punto.position.y,punto.position.z+1);
		}
		*/
	}

	public override void Updatesec () {
		//Debug.Log ("Hey");
		GameObject g= GameObject.FindGameObjectWithTag("Player");
		if(punto.position.x>g.transform.position.x){
			punto.position=new Vector3(punto.position.x-1,punto.position.y,punto.position.z);
		}
		else{
			punto.position=new Vector3(punto.position.x+1,punto.position.y,punto.position.z);
		}

		if(punto.position.z>g.transform.position.z){
			punto.position=new Vector3(punto.position.x,punto.position.y,punto.position.z-1);
		}
		else{
			punto.position=new Vector3(punto.position.x,punto.position.y,punto.position.z+1);
		}
	}
}
