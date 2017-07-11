#include "menu.h"
#include "MaquinaEstadosJuego.h"
#include <iostream>


menu::menu(unsigned int width, unsigned int height) : estadosJuego("menuState")
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

	opciones[0].setFont(font);
	opciones[0].setColor(sf::Color::Red);
	opciones[0].setString("Jugar");
	opciones[0].setPosition(sf::Vector2f(width / 2, height / (MAX_OPCIONES + 1) * 1));

	opciones[1].setFont(font);
	opciones[1].setColor(sf::Color::White);
	opciones[1].setString("Ajustes");
	opciones[1].setPosition(sf::Vector2f(width / 2, height / (MAX_OPCIONES + 1) * 2));

	opciones[2].setFont(font);
	opciones[2].setColor(sf::Color::White);
	opciones[2].setString("Salir");
	opciones[2].setPosition(sf::Vector2f(width / 2, height / (MAX_OPCIONES + 1) * 3));

	opcionSelecionada = 0;
}

menu::~menu()
{
	std::cout << "Menu eliminado" << std::endl;
}

void menu::render(void * window)
{
	static_cast<sf::RenderWindow *>(window)->pushGLStates();
	static_cast<sf::RenderWindow *>(window)->draw(fondo);
	for (int i = 0; i < MAX_OPCIONES; i++)
	{
		static_cast<sf::RenderWindow *>(window)->draw(opciones[i]);
	}
	static_cast<sf::RenderWindow *>(window)->popGLStates();
}

void menu::MoveUp()
{
	if (opcionSelecionada - 1 >= 0)
	{
		opciones[opcionSelecionada].setColor(sf::Color::White);
		opcionSelecionada--;
		opciones[opcionSelecionada].setColor(sf::Color::Red);
	}
}

void menu::MoveDown()
{
	if (opcionSelecionada + 1 < MAX_OPCIONES)
	{
		opciones[opcionSelecionada].setColor(sf::Color::White);
		opcionSelecionada++;
		opciones[opcionSelecionada].setColor(sf::Color::Red);
	}
}

void menu::handler(void * event, void * window, void * manager)
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
				static_cast<MaquinaEstadosJuego *>(manager)->cambiaEstado("playingState");
				break;
			case 1:
				static_cast<MaquinaEstadosJuego *>(manager)->cambiaEstado("configState");
				break;
			case 2:
				static_cast<sf::RenderWindow *>(window)->close();
				break;
			}
			break;
		}
		break;
	}
}
