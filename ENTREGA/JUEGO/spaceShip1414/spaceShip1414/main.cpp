#include <iostream>
#include "mainGame.h"

int main() {
	mainGame spaceShip1414;
	if (spaceShip1414.init("SpaceShip 1414", 1366, 768, false))
	{
		spaceShip1414.run();
	}
	else 
	{
		std::cout << "Error al iniciar el juego, disculpe las molestias." << std::endl;
	}

	return 0;
}