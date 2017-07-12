#include "mainGame.h"
#include "gameStates\MaquinaEstadosJuego.h"
#include "gameStates\menu.h"
#include "gameStates\ajustes.h"
#include "gameStates\jugando.h"
#include "gameStates\salida.h"
#include <iostream>


mainGame::mainGame()
{
}

mainGame::~mainGame()
{
	delete gameConfig;
	gameConfig = nullptr;
	delete gameMenu;
	gameMenu = nullptr;
	delete gamePlaying;
	gamePlaying = nullptr;
	delete gameExit;
	gameExit = nullptr;
	delete manager;
	manager = nullptr;
	delete window;
	window = nullptr;
	std::cout << "Gracias por jugar a SpaceShip 1414" << std::endl;
}

bool mainGame::init(const std::string titulo, int width, int height, bool full_screen)
{
	contextSettings = new sf::ContextSettings();
	contextSettings->depthBits = 24;

	if (full_screen) { window = new sf::RenderWindow(sf::VideoMode(width, height), titulo, sf::Style::Fullscreen, *contextSettings); }
	else { window = new sf::RenderWindow(sf::VideoMode(width, height), titulo, sf::Style::Default, *contextSettings); }
	glewInit();
	window->setVerticalSyncEnabled(true);
	manager = new MaquinaEstadosJuego();
	gameMenu = new menu(width,height);
	manager->addEstado(gameMenu, true);
	gameConfig = new ajustes(width, height);
	manager->addEstado(gameConfig, false);
	gamePlaying = new jugando(width, height);
	manager->addEstado(gamePlaying, false);
	gameExit = new salida(width, height);
	manager->addEstado(gameExit, false);
	if (window != nullptr && gameMenu != nullptr && gameConfig != nullptr && gamePlaying != nullptr)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void mainGame::run()
{
	while (window->isOpen())
	{
		sf::Event event;
		while (window->pollEvent(event))
		{
			manager->getEstadoActivo()->handler(&event, window, manager);
			if (event.type == sf::Event::Closed) { manager->cambiaEstado("exitState");	}
		}

		manager->getEstadoActivo()->update(0.1, window);

		window->clear();
		glBindBuffer(GL_ARRAY_BUFFER, 0);
		glDisableVertexArrayAttribEXT(0, 0);

	
		manager->getEstadoActivo()->render(window);
		window->display();
	}
}
