#include "framework\TGraphicEngine.h"
#include "entityTree\TTransform.h"
#include "entityTree\TCamara.h"
#include "entityTree\TNodo.h"
#include "entityTree\TMalla.h"
//variables constante para las dimenciones de la ventana
const GLuint WIDTH = 1920, HEIGHT = 1024;

int main() {
	TGraphicEngine motorApp;
	if (motorApp.init("Motor Grafico SpaceShip 1414", WIDTH, HEIGHT))
	{
		TTransform *transf1 = motorApp.crearTransform();
		TTransform *transf2 = motorApp.crearTransform();
		transf1->escalar(0.5, 0.25, 0.5);
		transf1->trasladar(0, 0, -300);
		motorApp.setCamaraRegistro(new TCamara());
		TNodo* nodoTransf1 = motorApp.crearNodo(motorApp.nodoRaiz(), transf1);
		TNodo* nodoTransf2 = motorApp.crearNodo(nodoTransf1, transf2);
		TNodo* nodoMalla = motorApp.crearNodo(nodoTransf2, motorApp.crearMalla("models/Nanosuit/nanosuit.obj"));
		motorApp.info();
		motorApp.run();
	}
	return 0;
}