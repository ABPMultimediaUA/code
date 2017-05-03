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
		TNodo* camara2 = motorApp.addCamara();
		motorApp.trasladar(camara2, 0, 10, 50);

		TNodo* luz = motorApp.addLuz();
		motorApp.trasladar(luz, 0, 100, 10);
		
		player jugador(&motorApp);

		TNodo* camara = motorApp.addCamara(2,true, true, motorApp.getPadreX(jugador.getNodo()));
		motorApp.rotar(camara, -0.3f, 1, 0, 0);
		motorApp.trasladar(camara, 0, 10, 40);

		//Malla3
		TNodo* terreno = motorApp.addMalla("models/StreetEnvironment/Street environment_V01.obj");
		motorApp.escalar(terreno, 0.8f, 0.8f, 0.8f);

		motorApp.run();
	}
	return 0;
}