#include "framework\TGraphicEngine.h"
#include "entityTree\TTransform.h"
#include "entityTree\TCamara.h"
#include "entityTree\TNodo.h"
#include "entityTree\TMalla.h"
#include "entityTree\TLuz.h"
#include "player.h"

//variables constante para las dimenciones de la ventana
const GLuint WIDTH = 1920, HEIGHT = 1024;

int main() {
	TGraphicEngine motorApp;
	if (motorApp.init("Motor Grafico SpaceShip 1414", WIDTH, HEIGHT))
	{
		motorApp.info();

		//camara
		/*TTransform *transfRC = motorApp.crearTransform();
		TTransform *transfEC = motorApp.crearTransform();
		TTransform *transfTC = motorApp.crearTransform();
		transfTC->trasladar(0, 10, 20);
		transfRC->rotar(-0.3, 1, 0, 0);
		TNodo* nodoTransfRC = motorApp.crearNodo(motorApp.nodoRaiz(), transfRC);
		TNodo* nodoTransfEC = motorApp.crearNodo(nodoTransfRC, transfEC);
		TNodo* nodoTransfTC = motorApp.crearNodo(nodoTransfEC, transfTC);
		TNodo* nodoCamara = motorApp.crearNodo(nodoTransfTC, motorApp.crearCamara(true,45.f,0.1f,1000.f,0.0f, 10.0f, 10.0f, false));
		motorApp.addRegistroCamara(nodoCamara);*/

		//camara2
		TTransform *transfRC2 = motorApp.crearTransform();
		TTransform *transfEC2 = motorApp.crearTransform();
		TTransform *transfTC2 = motorApp.crearTransform();
		transfTC2->trasladar(0, 10, 50);
		TNodo* nodoTransfRC2 = motorApp.crearNodo(motorApp.nodoRaiz(), transfRC2);
		TNodo* nodoTransfEC2 = motorApp.crearNodo(nodoTransfRC2, transfEC2);
		TNodo* nodoTransfTC2 = motorApp.crearNodo(nodoTransfEC2, transfTC2);
		TNodo* nodoCamara2 = motorApp.crearNodo(nodoTransfTC2, motorApp.crearCamara());
		motorApp.addRegistroCamara(nodoCamara2);

		

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
		
		player jugador(&motorApp);
		TNodo* camara = motorApp.addCamara(2,true, true, motorApp.getPadreX(jugador.getNodo()));
		motorApp.rotar(camara, -0.3f, 1, 0, 0);
		motorApp.trasladar(camara, 0, 10, 40);

		//camara
		//TTransform *transfRC3 = motorApp.crearTransform();
		//TTransform *transfEC3 = motorApp.crearTransform();
		//TTransform *transfTC3 = motorApp.crearTransform();
		//transfTC3->trasladar(0, 10, 40);
		//transfRC3->rotar(-0.3, 1, 0, 0);
		////TNodo* nodoTransfRC3 = motorApp.crearNodo(motorApp.nodoRaiz(), transfRC3);
		//TNodo* nodoTransfRC3 = motorApp.crearNodo(motorApp.getPadreX(jugador.getNodo()), transfRC3);
		//TNodo* nodoTransfEC3 = motorApp.crearNodo(nodoTransfRC3, transfEC3);
		//TNodo* nodoTransfTC3 = motorApp.crearNodo(nodoTransfEC3, transfTC3);
		//TNodo* nodoCamara3 = motorApp.crearNodo(nodoTransfTC3, motorApp.crearCamaraS(true, 45.f, 0.1f, 1000.f, 0.0f, 10.0f, 10.0f, true));
		//motorApp.addRegistroCamara(nodoCamara3);

		//Malla
		//player jugador(&motorApp, transfTC3);

		//Malla3
		TTransform *transfRM = motorApp.crearTransform();
		TTransform *transfEM = motorApp.crearTransform();
		TTransform *transfTM = motorApp.crearTransform();
		transfEM->escalar(0.8f, 0.8f, 0.8f);
		transfTM->trasladar(0, 0, 0);
		TNodo* nodoTransfRM = motorApp.crearNodo(motorApp.nodoRaiz(), transfRM);
		TNodo* nodoTransfEM = motorApp.crearNodo(nodoTransfRM, transfEM);
		TNodo* nodoTransfTM = motorApp.crearNodo(nodoTransfEM, transfTM);
		TNodo* nodoMalla = motorApp.crearNodo(nodoTransfTM, motorApp.crearMalla("models/StreetEnvironment/Street environment_V01.obj"));

		motorApp.run();
	}
	return 0;
}