#pragma once
#include "estadosJuego.h"
#include <SFML/Graphics.hpp>

class jugando :
	public estadosJuego
{
public:
	jugando(unsigned int, unsigned int);
	~jugando();
	void inicializarEstado() override;
	void limpiarEstado() override;
	void update() override;
	void render(void * window) override;
	void handler(void*, void *, void *)override;
private:
	void drawConfiguracion(void *);
	void drawPause(void *);
	void drawNoClickHub(void *);
	void changeWeapon(unsigned int);
	void pause();
	void play();
	void clickPauseMenu(void *, void *);
	void clickPlayPause(void *);
	void checkMousePos(void *);
	void clickAjustes(void *);
	
	sf::Font * font;
	sf::Text * texto;
	sf::Sprite * bMenuPausa;
	sf::Texture * tMenuPausa;
	sf::Sprite * bPulsetMenu;
	sf::Texture * tPulsetMenu;
	sf::Sprite * bPausaPlay;
	sf::Texture * tPausa;
	sf::Texture * tPlay;
	sf::Sprite * iArma;
	sf::Texture * tArma[2];
	sf::Sprite * iVida;
	sf::Texture * tVida;
	sf::RectangleShape * rectangle;
	sf::Clock * reloj;
	sf::Sprite * fFondo;
	sf::Texture * tFondo;

	float vida;
	float vidaMax;
	unsigned int arma;
	unsigned int balas;
	bool rec;
	bool pausa, opciones;
	float width, height;
};

