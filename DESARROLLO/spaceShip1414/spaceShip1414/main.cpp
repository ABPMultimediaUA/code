#include "graphicEngine\TGraphicEngine.h"
#include "graphicEngine\entityTree\TTransform.h"
#include "graphicEngine\entityTree\TCamara.h"
#include "graphicEngine\entityTree\TNodo.h"
#include "graphicEngine\entityTree\TMalla.h"
#include "graphicEngine\entityTree\TLuz.h"
#include "Camara.h"
#include "player.h"
#include "readJson.h"
#include "Escenario.h"

//variables constante para las dimenciones de la ventana
const GLuint WIDTH = 800, HEIGHT = 600;

int main() {
	TGraphicEngine motorApp;
	if (motorApp.init("Motor Grafico SpaceShip 1414", WIDTH, HEIGHT))
	{
		motorApp.info();

		//camara

		Camara cam(&motorApp);
		cam.getTransformacion()->rotar(0.0f, 1.0f, 0.0f, 0.0f);
		cam.getTransformacion()->trasladar(0, 10, 20);
		Camara cam2(&motorApp);
		cam2.getTransformacion()->rotar(80.0f, 1.0f, 0.0f, 0.0f);
		cam2.getTransformacion()->trasladar(0, 0, 100);


		//Luz1
		TTransform *transfRL = motorApp.crearTransform();
		TTransform *transfEL = motorApp.crearTransform();
		TTransform *transfTL = motorApp.crearTransform();
		transfTL->trasladar(0, 100, 10);
		TNodo* nodoTransfRL = motorApp.crearNodo(motorApp.nodoRaiz(), transfRL);
		TNodo* nodoTransfEL = motorApp.crearNodo(nodoTransfRL, transfEL);
		TNodo* nodoTransfTL = motorApp.crearNodo(nodoTransfEL, transfTL);
		TNodo* nodoLuz = motorApp.crearNodo(nodoTransfTL, motorApp.crearLuz(0.0f,10.0f,10.0f, true));
		motorApp.addRegistroLuz(nodoLuz);
		
		//Malla
		player jugador(&motorApp);

		//Malla3
	/*	TTransform *transfRM = motorApp.crearTransform();
		TTransform *transfEM = motorApp.crearTransform();
		TTransform *transfTM = motorApp.crearTransform();
		transfEM->escalar(0.8, 0.8, 0.8);
		transfTM->trasladar(10, -10, 10);
		TNodo* nodoTransfRM = motorApp.crearNodo(motorApp.nodoRaiz(), transfRM);
		TNodo* nodoTransfEM = motorApp.crearNodo(nodoTransfRM, transfEM);
		TNodo* nodoTransfTM = motorApp.crearNodo(nodoTransfEM, transfTM);
		TNodo* nodoMalla = motorApp.crearNodo(nodoTransfTM, motorApp.crearMalla("resourse/models/StreetEnvironment/Street environment_V01.obj"));*/

	/*	TTransform *transfRM1 = motorApp.crearTransform();
		TTransform *transfEM1 = motorApp.crearTransform();
		TTransform *transfTM1 = motorApp.crearTransform();
		transfEM1->escalar(1,1,1);
		transfTM1->trasladar(10, 10,0);
		TNodo* nodoTransfRM1 = motorApp.crearNodo(motorApp.nodoRaiz(), transfRM1);
		TNodo* nodoTransfEM1 = motorApp.crearNodo(nodoTransfRM1, transfEM1);
		TNodo* nodoTransfTM1 = motorApp.crearNodo(nodoTransfEM1, transfTM1);
		TNodo* nodoMalla1 = motorApp.crearNodo(nodoTransfTM1, motorApp.crearMalla("resourse/models/untitled.obj"));*/
		
		Escenario *scene = new Escenario(&motorApp);
		readJson *json = new readJson(scene);
		
	
		motorApp.run();
	}
	return 0;
}