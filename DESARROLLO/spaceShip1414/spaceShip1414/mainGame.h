#pragma once
#include <SFML\Graphics.hpp>
#include <SFML\OpenGL.hpp>
class MaquinaEstadosJuego;
class menu;
class ajustes;
class jugando;
class mainGame
{
public:
	mainGame();
	~mainGame();
	bool init(const std::string, int, int, bool);
	void run();
private:
	sf::RenderWindow * window;
	sf::ContextSettings * contextSettings;
	MaquinaEstadosJuego * manager;
	menu * gameMenu;
	ajustes * gameConfig;
	jugando * gamePlaying;
};

