#pragma once
#include <SFML\Graphics.hpp>
class MaquinaEstadosJuego;
class menu;
class ajustes;
class ajustesJuego;
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
	MaquinaEstadosJuego * manager;
	menu * gameMenu;
	ajustes * gameConfig;
	ajustesJuego * gameConfigGame;
	jugando * gamePlaying;
};

