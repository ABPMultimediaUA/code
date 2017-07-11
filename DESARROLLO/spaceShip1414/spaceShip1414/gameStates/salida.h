#pragma once
#include "estadosJuego.h"
#include <SFML/Graphics.hpp>
class salida :
	public estadosJuego
{
public:
	salida(float, float);
	~salida();
	void render(void * window) override;
	void handler(void*, void *, void *)override;
private:
	sf::Font font;
	sf::Text titulo;
	sf::Sprite fondo;
	sf::Texture imagen;
};