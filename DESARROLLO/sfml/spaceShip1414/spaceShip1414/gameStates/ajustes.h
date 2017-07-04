#pragma once
#include "..\Game\MaquinaEstados\FSM\Estados.h"
#include <SFML/Graphics.hpp>

#define MAX_OPCIONES 3

class ajustes :
	public Estados
{
public:
	ajustes(unsigned int, unsigned int);
	~ajustes();
	void draw(void * window) override;
	void MoveUp();
	void MoveDown();
	int GetPressedItem() { return opcionSelecionada; }
	void handler(void*, void *, void *)override;
private:
	int opcionSelecionada;
	sf::Font font;
	sf::Text titulo;
	sf::Text opciones[MAX_OPCIONES];
	sf::Sprite fondo;
	sf::Texture imagen;
};

