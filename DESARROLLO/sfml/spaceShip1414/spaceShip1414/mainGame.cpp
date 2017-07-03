#include "mainGame.h"
#include "Game\MaquinaEstados\FSM\MaquinaEstados.h"
#include "gui\menu.h"
#include <SFML\OpenGL.hpp>

mainGame::mainGame()
{
}

mainGame::~mainGame()
{
}

bool mainGame::init(const std::string titulo, int width, int height, bool full_screen)
{
	window = new sf::RenderWindow(sf::VideoMode(width, height), titulo);
	manager = new MaquinaEstados();
	gameMenu = new menu(width,height);
	manager->addEstado(gameMenu, true);
	return true;
}

void mainGame::run()
{
	while (window->isOpen())
	{
		//Esto va en el handler
		sf::Event event;
		while (window->pollEvent(event))
		{
			manager->getEstadoActivo()->handler(&event, window);
			if (event.type == sf::Event::Closed)
				window->close();
		}
		//

		window->clear();
		manager->getEstadoActivo()->draw(window);
		window->display();
	}
}
