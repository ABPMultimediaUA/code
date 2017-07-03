#pragma once
#include <SFML\Graphics.hpp>
class MaquinaEstados;
class menu;
class mainGame
{
public:
	mainGame();
	~mainGame();
	bool init(const std::string, int, int, bool);
	void run();
private:
	sf::RenderWindow * window;
	MaquinaEstados * manager;
	menu * gameMenu;
};

