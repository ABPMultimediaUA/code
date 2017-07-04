#include "ajustes.h"
#include "../Game/MaquinaEstados/FSM/MaquinaEstados.h"
#include <iostream>
#include <locale>

ajustes::ajustes(unsigned int width, unsigned int height) : Estados("configState")
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
	titulo.setFillColor(sf::Color::Yellow);
	titulo.setString("Ajustes");
	titulo.setCharacterSize(64);
	titulo.setPosition(sf::Vector2f(width / 2, height*0.1));

	opciones[0].setFont(font);
	opciones[0].setFillColor(sf::Color::Red);
	opciones[0].setString("Resolución ventana:");
	opciones[0].setPosition(sf::Vector2f(width / 3, height / (MAX_OPCIONES + 1) * 1));

	opciones[1].setFont(font);
	opciones[1].setFillColor(sf::Color::White);
	opciones[1].setString("Pantalla Completa:");
	opciones[1].setPosition(sf::Vector2f(width / 3, height / (MAX_OPCIONES + 1) * 2));

	opciones[2].setFont(font);
	opciones[2].setFillColor(sf::Color::White);
	opciones[2].setString("Volver");
	opciones[2].setPosition(sf::Vector2f(width / 3, height / (MAX_OPCIONES + 1) * 3));

	opcionSelecionada = 0;
}


ajustes::~ajustes()
{
	std::cout << "Menu eliminado" << std::endl;
}

void ajustes::draw(void * window)
{
	static_cast<sf::RenderWindow *>(window)->draw(fondo);
	static_cast<sf::RenderWindow *>(window)->draw(titulo);
	for (int i = 0; i < MAX_OPCIONES; i++)
	{
		static_cast<sf::RenderWindow *>(window)->draw(opciones[i]);
	}
}

void ajustes::MoveUp()
{
	if (opcionSelecionada - 1 >= 0)
	{
		opciones[opcionSelecionada].setFillColor(sf::Color::White);
		opcionSelecionada--;
		opciones[opcionSelecionada].setFillColor(sf::Color::Red);
	}
}

void ajustes::MoveDown()
{
	if (opcionSelecionada + 1 < MAX_OPCIONES)
	{
		opciones[opcionSelecionada].setFillColor(sf::Color::White);
		opcionSelecionada++;
		opciones[opcionSelecionada].setFillColor(sf::Color::Red);
	}
}

void ajustes::handler(void * event, void * window, void * manager)
{
	switch (static_cast<sf::Event *>(event)->type)
	{
	case sf::Event::KeyReleased:
		switch (static_cast<sf::Event *>(event)->key.code)
		{
		case sf::Keyboard::Up:
			MoveUp();
			break;
		case sf::Keyboard::Down:
			MoveDown();
			break;
		case sf::Keyboard::Return:
			switch (GetPressedItem())
			{
			case 0:
				std::cout << "Jugar Pulsado" << std::endl;
				break;
			case 1:
				std::cout << "Ajustes Pulsado" << std::endl;
				break;
			case 2:
				static_cast<MaquinaEstados *>(manager)->cambiaEstado("menuState");
				break;
			}
			break;
		}
		break;
	}
}