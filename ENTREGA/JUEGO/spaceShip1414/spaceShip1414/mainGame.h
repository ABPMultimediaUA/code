#pragma once
#include <SFML\Graphics.hpp>
#ifndef GLEW_STATIC
#define GLEW_STATIC
#include <GL/glew.h>
#endif


class MaquinaEstadosJuego;
class menu;
class ajustes;
class jugando;
class salida;
class perdido;
class mainGame
{
public:
	mainGame();
	~mainGame();
	bool init(const std::string);
	void run();
	void resizeWindow(float, float);
	void fullScreenWindow();
private:
	sf::RenderWindow * window;
	sf::ContextSettings * contextSettings;
	MaquinaEstadosJuego * manager;
	menu * gameMenu;
	ajustes * gameConfig;
	jugando * gamePlaying;
	salida * gameExit;
	perdido * gameOver;
	float width, height;
	bool fullScreen;
};

