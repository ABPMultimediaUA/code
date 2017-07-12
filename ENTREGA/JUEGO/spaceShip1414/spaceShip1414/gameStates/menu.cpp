#include "menu.h"
#include "MaquinaEstadosJuego.h"
#include <iostream>


menu::menu(unsigned int width, unsigned int height) : estadosJuego("menuState")
{
	if (!tFondo.loadFromFile("resourse/image/espacio" + std::to_string(static_cast<int>(width)) + "x" + std::to_string(static_cast<int>(height)) + ".jpg", sf::IntRect(1, 1, width, height)))
	{
		std::cerr << "Fondo no cargado" << std::endl;
	}

	sFondo.setTexture(tFondo);
	sFondo.setPosition(0,0);

	if (!tHub.loadFromFile("resourse/image/menuPrincipal" + std::to_string(static_cast<int>(width)) + "x" + std::to_string(static_cast<int>(height)) + ".png", sf::IntRect(1, 1, width, height)))
	{
		std::cerr << "Hub no cargado" << std::endl;
	}
	tHub.setSmooth(true);
	sHub.setTexture(tHub);
	sHub.setPosition(0, 0);

	if (!tButtonSelec.loadFromFile("resourse/image/menuPrinPulsado" + std::to_string(static_cast<int>(width)) + "x" + std::to_string(static_cast<int>(height)) + ".png"))
	{
		std::cerr << "Botton Seleccin no cargado" << std::endl;
	}
	tButtonSelec.setSmooth(true);
	sButtonSelec.setTexture(tButtonSelec);
	sButtonSelec.setPosition(889, 190);

	if (!tTitulo.loadFromFile("resourse/image/titulo.png"))
	{
		std::cerr << "Titulo no cargado" << std::endl;
	}
	tTitulo.setSmooth(true);
	sTitulo.setTexture(tTitulo);
	sTitulo.scale(0.7f, 0.7f);
	sTitulo.setPosition(156,30);

	if (!tlogo.loadFromFile("resourse/image/logoAsync.png"))
	{
		std::cerr << "Logo no cargado" << std::endl;
	}
	tlogo.setSmooth(true);
	slogo.setTexture(tlogo);
	slogo.setPosition(80, 530);

	if (!font.loadFromFile("resourse/font/Radiof.ttf"))
	{
		std::cerr << "Fuente no cargada" << std::endl;
	}

	opciones[0].setFont(font);
	opciones[0].setColor(sf::Color::Red);
	opciones[0].setString("Jugar");
	opciones[0].setPosition(sf::Vector2f(934, 196));

	opciones[1].setFont(font);
	opciones[1].setColor(sf::Color::White);
	opciones[1].setString("Ajustes");
	opciones[1].setPosition(sf::Vector2f(928, 290));

	opciones[2].setFont(font);
	opciones[2].setColor(sf::Color::White);
	opciones[2].setString("Creditos");
	opciones[2].setPosition(sf::Vector2f(924, 386));

	opciones[3].setFont(font);
	opciones[3].setColor(sf::Color::White);
	opciones[3].setString("Salir");
	opciones[3].setPosition(sf::Vector2f(936, 480));

	opcionSelecionada = 0;
}

menu::~menu()
{
	std::cout << "Menu Destroyed" << std::endl;
}

void menu::render(void * window)
{
	static_cast<sf::RenderWindow *>(window)->pushGLStates();
	static_cast<sf::RenderWindow *>(window)->draw(sFondo);
	static_cast<sf::RenderWindow *>(window)->draw(sHub);
	static_cast<sf::RenderWindow *>(window)->draw(sTitulo);
	static_cast<sf::RenderWindow *>(window)->draw(slogo);
	static_cast<sf::RenderWindow *>(window)->draw(sButtonSelec);
	for (int i = 0; i < MAX_OPCIONES; i++)
	{
		static_cast<sf::RenderWindow *>(window)->draw(opciones[i]);
	}
	static_cast<sf::RenderWindow *>(window)->popGLStates();
}

void menu::update(double deltatime, void * window)
{
	checkMousePos(window);
	checkOpcionSelecionada();
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

void menu::checkMousePos(void * window)
{
	sf::Vector2i posMouse = sf::Mouse::getPosition(*(static_cast<sf::RenderWindow *>(window)));
	if (posMouse.x > 889 && posMouse.x < 889 + 190)
	{
		if (posMouse.y > 190 && posMouse.y < 190 + 57) {
			opciones[opcionSelecionada].setColor(sf::Color::White);
			opcionSelecionada = 0;
			opciones[opcionSelecionada].setColor(sf::Color::Red);
		}
		if (posMouse.y > 284 && posMouse.y < 284 + 57) {
			opciones[opcionSelecionada].setColor(sf::Color::White);
			opcionSelecionada = 1;
			opciones[opcionSelecionada].setColor(sf::Color::Red);
		}
		if (posMouse.y > 380 && posMouse.y < 380 + 57) {
			opciones[opcionSelecionada].setColor(sf::Color::White);
			opcionSelecionada = 2;
			opciones[opcionSelecionada].setColor(sf::Color::Red);
		}
		if (posMouse.y > 474 && posMouse.y < 474 + 57) {
			opciones[opcionSelecionada].setColor(sf::Color::White);
			opcionSelecionada = 3;
			opciones[opcionSelecionada].setColor(sf::Color::Red);
		}
	}
}

void menu::checkOpcionSelecionada()
{
	switch (opcionSelecionada)
	{
		case 0:
			sButtonSelec.setPosition(889, 190);
			break;
		case 1:
			sButtonSelec.setPosition(889, 284);
			break;
		case 2:
			sButtonSelec.setPosition(889, 380);
			break;
		case 3:
			sButtonSelec.setPosition(889, 474);
			break;
	}
}

void menu::clickOpcion(void * window, void * manager)
{
	sf::Vector2i posMouse = sf::Mouse::getPosition(*(static_cast<sf::RenderWindow *>(window)));
	if (posMouse.x > 889 && posMouse.x < 889 + 190)
	{
		if (posMouse.y > 190 && posMouse.y < 190 + 57) {
			static_cast<MaquinaEstadosJuego *>(manager)->cambiaEstado("playingState");
		}
		if (posMouse.y > 284 && posMouse.y < 284 + 57) {
			static_cast<MaquinaEstadosJuego *>(manager)->cambiaEstado("configState");
		}
		if (posMouse.y > 380 && posMouse.y < 380 + 57) {
			std::cout << "Creditos Pulsado" << std::endl;
			//static_cast<MaquinaEstadosJuego *>(manager)->cambiaEstado("creditsState");
		}
		if (posMouse.y > 474 && posMouse.y < 474 + 57) {
			static_cast<MaquinaEstadosJuego *>(manager)->cambiaEstado("exitState");
		}
	}
}

void menu::handler(void * event, void * window, void * manager)
{
	if (static_cast<sf::Event *>(event)->type == sf::Event::MouseButtonPressed)
	{
		if (static_cast<sf::Event *>(event)->key.code == sf::Mouse::Left)
		{
			clickOpcion(window, manager);
		}
	}
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
				static_cast<MaquinaEstadosJuego *>(manager)->cambiaEstado("playingState");
				break;
			case 1:
				static_cast<MaquinaEstadosJuego *>(manager)->cambiaEstado("configState");
				break;
			case 2:
				std::cout << "Creditos Pulsado" << std::endl;
				//static_cast<MaquinaEstadosJuego *>(manager)->cambiaEstado("creditsState");
				break;
			case 3:
				static_cast<MaquinaEstadosJuego *>(manager)->cambiaEstado("exitState");
				break;
			}
			break;
		}
		break;
	}
}
