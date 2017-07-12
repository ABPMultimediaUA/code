#pragma once
#include "estadosJuego.h"
#include <SFML/Graphics.hpp>

#define MAX_OPCIONES 3

class ajustes :
	public estadosJuego
{
public:
	ajustes(unsigned int, unsigned int);
	~ajustes();
	void handler(void*, void *, void *)override;
	void update(double, void *) override;
	void render(void * window) override;
	void MoveUp();
	void MoveDown();
	int GetPressedItem() { return opcionSelecionada; }
private:
	int opcionSelecionada;
	sf::Font font;
	sf::Text titulo;
	sf::Text opciones[MAX_OPCIONES];
	sf::Sprite fondo;
	sf::Texture imagen;
};

