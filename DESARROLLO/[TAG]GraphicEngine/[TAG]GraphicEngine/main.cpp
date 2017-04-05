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
		transfTC->trasladar(0, 4.5, 15);
		TNodo* nodoTransfRC = motorApp.crearNodo(motorApp.nodoRaiz(), transfRC);
		TNodo* nodoTransfEC = motorApp.crearNodo(nodoTransfRC, transfEC);
		TNodo* nodoTransfTC = motorApp.crearNodo(nodoTransfEC, transfTC);
		TNodo* nodoCamara = motorApp.crearNodo(nodoTransfTC, motorApp.crearCamara(true,45.f,0.1f,1000.f,0.0f, 10.0f, 10.0f, true));
		motorApp.addRegistroCamara(nodoCamara);

		//Luz1
		TTransform *transfRL = motorApp.crearTransform();
		TTransform *transfEL = motorApp.crearTransform();
		TTransform *transfTL = motorApp.crearTransform();
		transfTL->trasladar(0, 2, -50);
		TNodo* nodoTransfRL = motorApp.crearNodo(motorApp.nodoRaiz(), transfRL);
		TNodo* nodoTransfEL = motorApp.crearNodo(nodoTransfRL, transfEL);
		TNodo* nodoTransfTL = motorApp.crearNodo(nodoTransfEL, transfTL);
		TNodo* nodoLuz = motorApp.crearNodo(nodoTransfTL, motorApp.crearLuz(0.0f,10.0f,10.0f, true));
		motorApp.addRegistroLuz(nodoLuz);

		//Luz2
		TTransform *transfRL2 = motorApp.crearTransform();
		TTransform *transfEL2 = motorApp.crearTransform();
		TTransform *transfTL2 = motorApp.crearTransform();
		transfTL2->trasladar(0, 52, 0);
		TNodo* nodoTransfRL2 = motorApp.crearNodo(motorApp.nodoRaiz(), transfRL2);
		TNodo* nodoTransfEL2 = motorApp.crearNodo(nodoTransfRL2, transfEL2);
		TNodo* nodoTransfTL2 = motorApp.crearNodo(nodoTransfEL2, transfTL2);
		TNodo* nodoLuz2 = motorApp.crearNodo(nodoTransfTL2, motorApp.crearLuz(10.0f, 0.0f, 10.0f, true));
		motorApp.addRegistroLuz(nodoLuz2);

		//Malla
		TTransform *transfRM = motorApp.crearTransform();
		TTransform *transfEM = motorApp.crearTransform();
		TTransform *transfTM = motorApp.crearTransform();
		transfEM->escalar(0.5, 0.25, 0.5);
		transfTM->trasladar(5, -15, -3);
		TNodo* nodoTransfRM = motorApp.crearNodo(motorApp.nodoRaiz(), transfRM);
		TNodo* nodoTransfEM = motorApp.crearNodo(nodoTransfRM, transfEM);
		TNodo* nodoTransfTM = motorApp.crearNodo(nodoTransfEM, transfTM);
		TNodo* nodoMalla = motorApp.crearNodo(nodoTransfTM, motorApp.crearMalla("models/Nanosuit/nanosuit.obj"));
		transfRM->rotar(-3.1416, 1, 1, 1);
		motorApp.run();
	}
	return 0;
}