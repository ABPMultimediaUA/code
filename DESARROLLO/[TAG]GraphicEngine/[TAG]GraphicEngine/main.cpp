#include "framework\TGraphicEngine.h"
#include "entityTree\TTransform.h"
#include "entityTree\TCamara.h"
#include "entityTree\TNodo.h"
#include "entityTree\TMalla.h"
#include "entityTree\TLuz.h"

//variables constante para las dimenciones de la ventana
const GLuint WIDTH = 1920, HEIGHT = 1024;

int main() {
	TGraphicEngine motorApp;
	if (motorApp.init("Motor Grafico SpaceShip 1414", WIDTH, HEIGHT))
	{
		motorApp.info();

		//camara
		TTransform *transfRC = motorApp.crearTransform();
		TTransform *transfEC = motorApp.crearTransform();
		TTransform *transfTC = motorApp.crearTransform();
		transfTC->trasladar(0, 0, 35);
		TNodo* nodoTransfRC = motorApp.crearNodo(motorApp.nodoRaiz(), transfRC);
		TNodo* nodoTransfEC = motorApp.crearNodo(nodoTransfRC, transfEC);
		TNodo* nodoTransfTC = motorApp.crearNodo(nodoTransfEC, transfTC);
		TNodo* nodoCamara = motorApp.crearNodo(nodoTransfTC, motorApp.crearCamara(true,45.f,0.1f,1000.f,0.0f, 10.0f, 10.0f, true));
		motorApp.addRegistroCamara(nodoCamara);

		//Luz1
		TTransform *transfRL = motorApp.crearTransform();
		TTransform *transfEL = motorApp.crearTransform();
		TTransform *transfTL = motorApp.crearTransform();
		transfTL->trasladar(0, 5, 0);
		TNodo* nodoTransfRL = motorApp.crearNodo(motorApp.nodoRaiz(), transfRL);
		TNodo* nodoTransfEL = motorApp.crearNodo(nodoTransfRL, transfEL);
		TNodo* nodoTransfTL = motorApp.crearNodo(nodoTransfEL, transfTL);
		TNodo* nodoLuz = motorApp.crearNodo(nodoTransfTL, motorApp.crearLuz(0.0f,10.0f,10.0f, true));
		motorApp.addRegistroLuz(nodoLuz);

		//Luz2
		/*TTransform *transfRL2 = motorApp.crearTransform();
		TTransform *transfEL2 = motorApp.crearTransform();
		TTransform *transfTL2 = motorApp.crearTransform();
		transfTL2->trasladar(0, 52, 0);
		TNodo* nodoTransfRL2 = motorApp.crearNodo(motorApp.nodoRaiz(), transfRL2);
		TNodo* nodoTransfEL2 = motorApp.crearNodo(nodoTransfRL2, transfEL2);
		TNodo* nodoTransfTL2 = motorApp.crearNodo(nodoTransfEL2, transfTL2);
		TNodo* nodoLuz2 = motorApp.crearNodo(nodoTransfTL2, motorApp.crearLuz(10.0f, 0.0f, 10.0f, true));
		motorApp.addRegistroLuz(nodoLuz2);*/

		//Malla
		TTransform *transfRM1 = motorApp.crearTransform();
		TTransform *transfEM1 = motorApp.crearTransform();
		TTransform *transfTM1 = motorApp.crearTransform();
		TNodo* nodoTransfRM1 = motorApp.crearNodo(motorApp.nodoRaiz(), transfRM1);
		TNodo* nodoTransfEM1 = motorApp.crearNodo(nodoTransfRM1, transfEM1);
		TNodo* nodoTransfTM1 = motorApp.crearNodo(nodoTransfEM1, transfTM1);
		TNodo* nodoMalla1 = motorApp.crearNodo(nodoTransfTM1, motorApp.crearMalla("models/Nanosuit/nanosuit.obj"));

		//Malla2
		TTransform *transfRM2 = motorApp.crearTransform();
		TTransform *transfEM2 = motorApp.crearTransform();
		TTransform *transfTM2 = motorApp.crearTransform();
		transfEM2->escalar(0.5, 0.25, 0.5);
		transfTM2->trasladar(10, -15, -3);
		TNodo* nodoTransfRM2 = motorApp.crearNodo(motorApp.nodoRaiz(), transfRM2);
		TNodo* nodoTransfEM2 = motorApp.crearNodo(nodoTransfRM2, transfEM2);
		TNodo* nodoTransfTM2 = motorApp.crearNodo(nodoTransfEM2, transfTM2);
		TNodo* nodoMalla2 = motorApp.crearNodo(nodoTransfTM2, motorApp.crearMalla("models/Nanosuit/nanosuit.obj"));
		transfRM2->rotar(-3.1416, 1, 1, 1);

		//Malla3
		TTransform *transfRM = motorApp.crearTransform();
		TTransform *transfEM = motorApp.crearTransform();
		TTransform *transfTM = motorApp.crearTransform();
		transfEM->escalar(0.5, 0.5, 0.5);
		transfTM->trasladar(0, -150, -300);
		TNodo* nodoTransfRM = motorApp.crearNodo(motorApp.nodoRaiz(), transfRM);
		TNodo* nodoTransfEM = motorApp.crearNodo(nodoTransfRM, transfEM);
		TNodo* nodoTransfTM = motorApp.crearNodo(nodoTransfEM, transfTM);
		TNodo* nodoMalla = motorApp.crearNodo(nodoTransfTM, motorApp.crearMalla("models/StreetEnvironment/Street environment_V01.obj"));

		motorApp.run();
	}
	return 0;
}