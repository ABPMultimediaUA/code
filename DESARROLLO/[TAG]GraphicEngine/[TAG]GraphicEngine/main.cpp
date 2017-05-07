#include "framework\TGraphicEngine.h"
#include "entityTree\TTransform.h"
#include "entityTree\TCamara.h"
#include "entityTree\TNodo.h"
#include "entityTree\TMalla.h"
#include "entityTree\TLuz.h"
#include "player.h"

const GLuint WIDTH = 1920, HEIGHT = 1024;

int main() {
	TGraphicEngine motorApp;
	if (motorApp.init("Motor Grafico SpaceShip 1414", WIDTH, HEIGHT))
	{
		motorApp.info();

		//camara
		TNodo* camara2 = motorApp.addCamaraLibre();
		motorApp.trasladar(camara2, 0, 10, -2.0f);

		TNodo* luz = motorApp.addLuz();
		motorApp.trasladar(luz, 0, 100, 100);
		
		player jugador(&motorApp);

		TNodo* camara = motorApp.addCamaraPerspectivaSeguidora(true, motorApp.getPadreX(jugador.getNodo()));
		
		//Malla3
		TNodo* terreno = motorApp.addMalla("models/StreetEnvironment/Street environment_V01.obj");
		motorApp.escalar(terreno, 8.0f, 8.0f, 8.0f);

		motorApp.run();
	}
	return 0;
}