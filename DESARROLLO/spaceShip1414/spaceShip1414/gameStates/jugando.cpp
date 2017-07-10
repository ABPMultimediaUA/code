#include "jugando.h"
#include "MaquinaEstadosJuego.h"
#include "..\Game\TGameEngine.h"
#include "..\graphicEngine\TGraphicEngine.h"
#include <iostream>
#include <string>
#include <SFML\OpenGL.hpp>

jugando::jugando(float w, float h) : estadosJuego("playingState"), arma{ 0 }, balas{ 10 }, opciones{ false }, rec{ false }, pausa{ false }, vida{ 145.f }, vidaMax{ 250.f },
texto{ nullptr }, font{ nullptr }, tMenuPausa{ nullptr }, bMenuPausa{ nullptr }, bPulsetMenu{ nullptr }, tPulsetMenu{ nullptr }, bPausaPlay{ nullptr }, tPausa{ nullptr },
tPlay{ nullptr }, iArma{ nullptr }, iVida{ nullptr }, tVida{ nullptr }, rectangle{ nullptr }, reloj{ nullptr }, fFondo{ nullptr }, tFondo{ nullptr }, width{ w }, height{ h }
{
	tArma[0] = nullptr;
	tArma[1] = nullptr;
}

jugando::~jugando()
{
	limpiarEstado();
	std::cout << "Menu eliminado" << std::endl;
}

void jugando::inicializarEstado()
{
	graphicApp = new TGraphicEngine(width,height);
	if (!graphicApp->iniciarGraphicEngine())
	{
		std::cout << "Error al inicializar el motor Grafrico" << std::endl;
	}
	gameApp = new TGameEngine();
	if (!gameApp->iniciarGameEngine(graphicApp))
	{
		std::cout << "Error al inicializar el motor del Juego" << std::endl;
	}
	rec = false;
	pausa = false;
	opciones = false;
	font = new sf::Font();
	texto = new sf::Text();
	bMenuPausa = new sf::Sprite();
	tMenuPausa = new sf::Texture();
	bPulsetMenu = new sf::Sprite();
	tPulsetMenu = new sf::Texture();
	bPausaPlay = new sf::Sprite();
	tPausa = new sf::Texture();
	tPlay = new sf::Texture();
	iArma = new sf::Sprite();
	tArma[0] = new sf::Texture();
	tArma[1] = new sf::Texture();
	iVida = new sf::Sprite();
	tVida = new sf::Texture();
	rectangle = new sf::RectangleShape();
	reloj = new sf::Clock();
	fFondo = new sf::Sprite();
	tFondo = new sf::Texture();

	if (!tFondo->loadFromFile("resourse/image/espacio.jpg", sf::IntRect(1, 1, width, height)))
	{
		std::cerr << "Fondo no cargado" << std::endl;
	}
	fFondo->setTexture(*tFondo);
	fFondo->setPosition(0, 0);

	if (!tPausa->loadFromFile("resourse/texture/bPause.png", sf::IntRect(0, 0, 111, 111)))
	{
		std::cerr << "Boton Pause no cargado" << std::endl;
	}
	tPausa->setSmooth(true);
	if (!tPlay->loadFromFile("resourse/texture/bPlay.png", sf::IntRect(0, 0, 111, 111)))
	{
		std::cerr << "Boton Play no cargado" << std::endl;
	}
	tPlay->setSmooth(true);
	bPausaPlay->setTexture(*tPausa);
	if (height > 768) { bPausaPlay->setPosition(80, 960); }
	else { bPausaPlay->setPosition(80, 668); }
	bPausaPlay->setScale(0.35f, 0.35f);

	if (!tArma[0]->loadFromFile("resourse/image/pistola.png", sf::IntRect(0, 0, 960, 540)))
	{
		std::cerr << "Icono Arma no cargado" << std::endl;
	}
	tArma[0]->setSmooth(true);
	if (!tArma[1]->loadFromFile("resourse/image/escopeta.png", sf::IntRect(0, 0, 960, 540)))
	{
		std::cerr << "Icono Arma no cargado" << std::endl;
	}
	tArma[1]->setSmooth(true);
	iArma->setTexture(*tArma[0]);
	if (height > 768) { iArma->setPosition(1750, 960); }
	else { iArma->setPosition(1210, 668); }
	iArma->setScale(0.075f, 0.075f);

	if (!tVida->loadFromFile("resourse/image/battery.png", sf::IntRect(0, 0, 360, 360)))
	{
		std::cerr << "Icono Vida no cargado" << std::endl;
	}
	tVida->setSmooth(true);
	iVida->setTexture(*tVida);
	if (height > 768) { iVida->setPosition(1770, 50); }
	else { iVida->setPosition(1215, 50); }
	iVida->setScale(0.25f, 0.25f);

	if (!tMenuPausa->loadFromFile("resourse/image/bMenu.png", sf::IntRect(0, 0, 181, 182)))
	{
		std::cerr << "Icono Menu no cargado" << std::endl;
	}
	tMenuPausa->setSmooth(true);
	bMenuPausa->setTexture(*tMenuPausa);
	if (height > 768) { bMenuPausa->setPosition(870, 449); }
	else { bMenuPausa->setPosition(593, 293); }

	if (!tPulsetMenu->loadFromFile("resourse/image/bPulsetMenu.png", sf::IntRect(0, 0, 131, 130)))
	{
		std::cerr << "Icono Menu no cargado" << std::endl;
	}
	tPulsetMenu->setSmooth(true);
	bPulsetMenu->setTexture(*tPulsetMenu);

	if (!font->loadFromFile("resourse/font/Radiof.ttf"))
	{
		std::cerr << "Fuente no cargada" << std::endl;
	}
	texto->setFont(*font);
}

void jugando::limpiarEstado()
{
	delete texto;
	delete font;
	delete tMenuPausa;
	delete bMenuPausa;
	delete bPulsetMenu;
	delete tPulsetMenu;
	delete bPausaPlay;
	delete tPausa;
	delete tPlay;
	delete iArma;
	delete tArma[0];
	delete tArma[1];
	delete iVida;
	delete tVida;
	delete rectangle;
	delete reloj;
	delete fFondo;
	delete tFondo;
	texto = nullptr;
	font = nullptr;
	tMenuPausa = nullptr;
	bMenuPausa = nullptr;
	bPulsetMenu = nullptr;
	tPulsetMenu = nullptr;
	bPausaPlay = nullptr;
	tPausa = nullptr;
	tPlay = nullptr;
	iArma = nullptr;
	tArma[0] = nullptr;
	tArma[1] = nullptr;
	iVida = nullptr;
	tVida = nullptr;
	rectangle = nullptr;
	reloj = nullptr;
	fFondo = nullptr;
	tFondo = nullptr;
}

void jugando::update()
{
	if (pausa)
	{
	}
	else
	{
		gameApp->update(0.1);
	}
}

void jugando::render(void * window)
{
	std::cout << "Inicia Render" << std::endl;
	if (opciones)
	{
		static_cast<sf::RenderWindow *>(window)->pushGLStates();
		drawConfiguracion(window);
		static_cast<sf::RenderWindow *>(window)->popGLStates();
	}
	else
	{
		static_cast<sf::RenderWindow *>(window)->pushGLStates();
		static_cast<sf::RenderWindow *>(window)->popGLStates();
		std::cout << "Inicia Draw" << std::endl;
		graphicApp->draw(0.1);
		std::cout << "Finaliza Draw" << std::endl;
		static_cast<sf::RenderWindow *>(window)->pushGLStates();
		drawNoClickHub(window);
		static_cast<sf::RenderWindow *>(window)->draw(*bPausaPlay);
		if (pausa)
		{
			drawPause(window);
		}
		static_cast<sf::RenderWindow *>(window)->popGLStates();
	}
	std::cout << "Finaliza Render" << std::endl;
}

void jugando::handler(void * event, void * window, void * manager)
{
	switch (static_cast<sf::Event *>(event)->type)
	{
	case sf::Event::MouseButtonPressed:
		switch (static_cast<sf::Event *>(event)->key.code)
		{
		case sf::Mouse::Left:
			if (pausa) {
				if (opciones) { clickAjustes(window); }
				else { clickPauseMenu(window, manager); }
			}
			else { clickPlayPause(window); }
			break;
		}
		break;
	case sf::Event::KeyReleased:
		switch (static_cast<sf::Event *>(event)->key.code)
		{
		case sf::Keyboard::Num1:
			changeWeapon(0);
			break;
		case sf::Keyboard::Num2:
			changeWeapon(1);
			break;
		case sf::Keyboard::Escape:
			if (pausa) { play(); }
			else       { pause(); }
			break;
		}
		break;
	}
}

void jugando::drawConfiguracion(void * window)
{
	static_cast<sf::RenderWindow *>(window)->draw(*fFondo);
	texto->setFillColor(sf::Color(255, 255, 255, 180));
	texto->setString("Ajustes del Juego");
	texto->setCharacterSize(20);
	texto->setOutlineThickness(2);
	if (height > 768) { texto->setPosition(1226, 980); }
	else { texto->setPosition(621, 308); }
	static_cast<sf::RenderWindow *>(window)->draw(*texto);
	texto->setFillColor(sf::Color(255, 255, 255, 180));
	texto->setString("Volver al juego");
	texto->setCharacterSize(20);
	texto->setOutlineThickness(2);
	if (height > 768) { texto->setPosition(1226, 980); }
	else { texto->setPosition(621, 608); }
	static_cast<sf::RenderWindow *>(window)->draw(*texto);
}

void jugando::drawPause(void * window)
{
	rectangle->setSize(sf::Vector2f(width, height));
	rectangle->setFillColor(sf::Color(0, 0, 0, 200));
	rectangle->setPosition(0, 0);
	static_cast<sf::RenderWindow *>(window)->draw(*rectangle);
	static_cast<sf::RenderWindow *>(window)->draw(*bMenuPausa);
	checkMousePos(window);
	texto->setFillColor(sf::Color(255, 255, 255, 180));
	texto->setString("Continuar");
	texto->setCharacterSize(20);
	texto->setOutlineThickness(2);
	if (height > 768) { texto->setPosition(1226, 980); }
	else { texto->setPosition(621, 308); }
	static_cast<sf::RenderWindow *>(window)->draw(*texto);
	texto->setFillColor(sf::Color(255, 255, 255, 180));
	texto->setString("Opciones");
	texto->setCharacterSize(20);
	texto->setOutlineThickness(2);
	if (height > 768) { texto->setPosition(1226, 980); }
	else { texto->setPosition(627, 344); }
	static_cast<sf::RenderWindow *>(window)->draw(*texto);
	texto->setFillColor(sf::Color(255, 255, 255, 180));
	texto->setString("Volver al Menu");
	texto->setCharacterSize(16);
	texto->setOutlineThickness(2);
	if (height > 768) { texto->setPosition(1226, 980); }
	else { texto->setPosition(623, 386); }
	static_cast<sf::RenderWindow *>(window)->draw(*texto);
	texto->setFillColor(sf::Color(255, 255, 255, 180));
	texto->setString("Salir a Windows");
	texto->setCharacterSize(16);
	texto->setOutlineThickness(2);
	if (height > 768) { texto->setPosition(1226, 980); }
	else { texto->setPosition(622, 423); }
	static_cast<sf::RenderWindow *>(window)->draw(*texto);
}

void jugando::drawNoClickHub(void * window)
{
	rectangle->setSize(sf::Vector2f(100, 10));
	rectangle->setFillColor(sf::Color(255, 255, 255, 150));
	rectangle->setPosition(50, 50);
	static_cast<sf::RenderWindow *>(window)->draw(*rectangle);
	rectangle->setSize(sf::Vector2f(10, 90));
	rectangle->setFillColor(sf::Color(255, 255, 255, 150));
	rectangle->setPosition(50, 60);
	static_cast<sf::RenderWindow *>(window)->draw(*rectangle);

	if (rec) {
		sf::CircleShape circulo(10);
		circulo.setFillColor(sf::Color(255, 0, 0, 150));
		circulo.setPosition(70, 70);
		static_cast<sf::RenderWindow *>(window)->draw(circulo);
		rec = false;
	}
	else {
		sf::CircleShape circulo(9);
		circulo.setFillColor(sf::Color(255, 0, 0, 150));
		circulo.setPosition(71, 71);
		static_cast<sf::RenderWindow *>(window)->draw(circulo);
		rec = true;
	}

	texto->setFillColor(sf::Color(255, 255, 255, 150));
	texto->setString("REC");
	texto->setCharacterSize(20);
	texto->setOutlineThickness(2);
	texto->setPosition(92, 65);
	static_cast<sf::RenderWindow *>(window)->draw(*texto);

	rectangle->setSize(sf::Vector2f(100, 10));
	rectangle->setFillColor(sf::Color(255, 255, 255, 150));
	if (height > 768) {	rectangle->setPosition(50, 1030); }
	else { rectangle->setPosition(50, 718); }
	static_cast<sf::RenderWindow *>(window)->draw(*rectangle);
	rectangle->setSize(sf::Vector2f(10, 90));
	if (height > 768) { rectangle->setPosition(50, 930); }
	else { rectangle->setPosition(50, 628); }
	static_cast<sf::RenderWindow *>(window)->draw(*rectangle);

	rectangle->setSize(sf::Vector2f(100, 10));
	if (height > 768) {	rectangle->setPosition(1770, 50); }
	else { rectangle->setPosition(1216, 50); }
	static_cast<sf::RenderWindow *>(window)->draw(*rectangle);
	rectangle->setSize(sf::Vector2f(10, 90));
	if (height > 768) { rectangle->setPosition(1860, 60); }
	else { rectangle->setPosition(1306, 60); }
	static_cast<sf::RenderWindow *>(window)->draw(*rectangle);

	static_cast<sf::RenderWindow *>(window)->draw(*iVida);
	rectangle->setSize(sf::Vector2f(70*(vida / vidaMax), 28));
	rectangle->setFillColor(sf::Color(0, 255, 0, 170));
	if (height > 768) { rectangle->setPosition(1770, 81); }
	else { rectangle->setPosition(1221, 81); }
	static_cast<sf::RenderWindow *>(window)->draw(*rectangle);
		
	rectangle->setSize(sf::Vector2f(100, 10));
	rectangle->setFillColor(sf::Color(255, 255, 255, 150));
	if (height > 768) {	rectangle->setPosition(1770, 1030); }
	else { rectangle->setPosition(1216, 718); }
	static_cast<sf::RenderWindow *>(window)->draw(*rectangle);
	rectangle->setSize(sf::Vector2f(10, 90));
	if (height > 768) {	rectangle->setPosition(1860, 930);	}
	else { rectangle->setPosition(1306, 628); }
	static_cast<sf::RenderWindow *>(window)->draw(*rectangle);

	static_cast<sf::RenderWindow *>(window)->draw(*iArma);
	texto->setFillColor(sf::Color(255, 255, 255, 180));
	texto->setString(std::to_string(balas));
	texto->setCharacterSize(20);
	texto->setOutlineThickness(2);
	if (height > 768) { texto->setPosition(1226, 980); }
	else { texto->setPosition(1262, 688); }
	static_cast<sf::RenderWindow *>(window)->draw(*texto);
	sf::Time tiempo;
	if (!pausa)
	{
		tiempo = reloj->getElapsedTime();
	}
	texto->setFillColor(sf::Color(255, 255, 255, 180));
	texto->setString(std::to_string(tiempo.asSeconds()));
	texto->setCharacterSize(30);
	texto->setOutlineThickness(4);
	if (height > 768) { texto->setPosition(900, 1015); }
	else { texto->setPosition(623, 680); }
	static_cast<sf::RenderWindow *>(window)->draw(*texto);
}

void jugando::changeWeapon(unsigned int a)
{
	iArma->setTexture(*tArma[a]);
}

void jugando::pause()
{
	pausa = true;
	bPausaPlay->setTexture(*tPlay);
}

void jugando::play()
{
	pausa = false;
	bPausaPlay->setTexture(*tPausa);
}

void jugando::clickPauseMenu(void * window, void * manager)
{
	sf::Vector2i posMouse = sf::Mouse::getPosition(*(static_cast<sf::RenderWindow *>(window)));
	if (posMouse.x > 23 + 593 && posMouse.x < 593 + 157)
	{
		if (posMouse.y > 13 + 293 && posMouse.y < 293 + 46) {
			pausa = false;
		}
		if (posMouse.y > 50 + 293 && posMouse.y < 293 + 83) {
			opciones = true;
		}
		if (posMouse.y > 88 + 293 && posMouse.y < 293 + 121) {
			static_cast<MaquinaEstadosJuego *>(manager)->cambiaEstado("menuState");
		}
		if (posMouse.y > 125 + 293 && posMouse.y < 293 + 159) {
			static_cast<sf::RenderWindow *>(window)->close();
		}
	}
}

void jugando::clickPlayPause(void * window)
{
	sf::Vector2i posMouse = sf::Mouse::getPosition(*(static_cast<sf::RenderWindow *>(window)));
	if (posMouse.x > bPausaPlay->getGlobalBounds().left 
		&& posMouse.x < (bPausaPlay->getGlobalBounds().width + bPausaPlay->getGlobalBounds().left)
		&& posMouse.y > bPausaPlay->getGlobalBounds().top 
		&& posMouse.y < (bPausaPlay->getGlobalBounds().height + bPausaPlay->getGlobalBounds().top))
	{
		pause();
	}
}

void jugando::checkMousePos(void * window)
{
	sf::Vector2i posMouse = sf::Mouse::getPosition(*(static_cast<sf::RenderWindow *>(window)));
	if (posMouse.x > 23 + 593 && posMouse.x < 593 + 157)
	{
		if (posMouse.y > 13 + 293 && posMouse.y < 293 + 46) {
			bPulsetMenu->setPosition(25 + 593, 293+14);
			static_cast<sf::RenderWindow *>(window)->draw(*bPulsetMenu);
		}
		if (posMouse.y > 50 + 293 && posMouse.y < 293 + 83) {
			bPulsetMenu->setPosition(25 + 593, 293 + 51);
			static_cast<sf::RenderWindow *>(window)->draw(*bPulsetMenu);
		}
		if (posMouse.y > 88 + 293 && posMouse.y < 293 + 121) {
			bPulsetMenu->setPosition(25 + 593, 293 + 89);
			static_cast<sf::RenderWindow *>(window)->draw(*bPulsetMenu);
		}
		if (posMouse.y > 125 + 293 && posMouse.y < 293 + 159) {
			bPulsetMenu->setPosition(25 + 593, 293 + 127);
			static_cast<sf::RenderWindow *>(window)->draw(*bPulsetMenu);
		}
	}
}

void jugando::clickAjustes(void * window)
{
	sf::Vector2i posMouse = sf::Mouse::getPosition(*(static_cast<sf::RenderWindow *>(window)));
	if (posMouse.x > 621 && posMouse.x < 750)
	{
		if (posMouse.y > 608 && posMouse.y < 628) {
			opciones = false;
		}
	}
}
