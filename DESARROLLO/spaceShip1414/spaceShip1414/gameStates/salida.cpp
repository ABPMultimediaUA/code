#include "salida.h"
#include "MaquinaEstadosJuego.h"
#include <iostream>
#include <locale>

salida::salida(float width, float height) : estadosJuego("exitState")
{
	if (!imagen.loadFromFile("resourse/image/CARTEL.jpg", sf::IntRect(1, 1, width, height)))
	{
		std::cerr << "Fondo no cargado" << std::endl;
	}

	fondo.setTexture(imagen);

	if (!font.loadFromFile("resourse/font/Radiof.ttf"))
	{
		std::cerr << "Fuente no cargada" << std::endl;
	}

	titulo.setFont(font);
	titulo.setColor(sf::Color::Yellow);
	titulo.setString("Gracias por haber jugado");
	titulo.setCharacterSize(80);
	titulo.setPosition(sf::Vector2f(width / 2, height*0.1));
}


salida::~salida()
{
	std::cout << "Menu eliminado" << std::endl;
}

void salida::render(void * window)
{
	static_cast<sf::RenderWindow *>(window)->pushGLStates();
	static_cast<sf::RenderWindow *>(window)->draw(fondo);
	static_cast<sf::RenderWindow *>(window)->draw(titulo);
	static_cast<sf::RenderWindow *>(window)->popGLStates();
}

void salida::handler(void * event, void * window, void * manager)
{
	switch (static_cast<sf::Event *>(event)->type)
	{
	case sf::Event::KeyReleased:
		switch (static_cast<sf::Event *>(event)->key.code)
		{
		case sf::Keyboard::Return:
			static_cast<sf::RenderWindow *>(window)->close();
			break;
		}
		break;
	}
}