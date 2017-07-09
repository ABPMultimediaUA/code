#include "mainGame.h"
#include "gameStates\MaquinaEstadosJuego.h"
#include "gameStates\menu.h"
#include "gameStates\ajustes.h"
#include "gameStates\jugando.h"
#include <SFML\OpenGL.hpp>
#include <iostream>

mainGame::mainGame()
{
}

mainGame::~mainGame()
{
	delete gameConfig;
	delete gameMenu;
	delete manager;
	delete window;
	std::cout << "Gracias por jugar a SpaceShip 1414" << std::endl;
}

bool mainGame::init(const std::string titulo, int width, int height, bool full_screen)
{
	window = new sf::RenderWindow(sf::VideoMode(width, height), titulo);
	manager = new MaquinaEstadosJuego();
	gameMenu = new menu(width,height);
	manager->addEstado(gameMenu, true);
	gameConfig = new ajustes(width, height);
	manager->addEstado(gameConfig, false);
	gamePlaying = new jugando(width, height);
	manager->addEstado(gamePlaying, false);
	return true;
}

void mainGame::run()
{
	while (window->isOpen())
	{
		sf::Event event;
		while (window->pollEvent(event))
		{
			manager->getEstadoActivo()->handler(&event, window, manager);
			if (event.type == sf::Event::Closed)
				window->close();
		}

		manager->getEstadoActivo()->update();

		window->clear();
		manager->getEstadoActivo()->render(window);
		window->display();
	}
}
