#pragma once
class readJson;
class Escenario;
class Mundo;
class b2GLDraw;
class player;
class Camara;
class TGraphicEngine;
class TGameEngine
{
public:
	TGameEngine();
	~TGameEngine();
	bool iniciarGameEngine(TGraphicEngine *);
	void update(double);
	void cambiarLuzActiva(int);
	player * getPlayer();
	Camara * getCamara();
	void drawDebug();
private:
	unsigned int flags;
	Mundo * world;
	Escenario * scene;
	readJson * json;
	b2GLDraw * fooDrawInstance;
	player * jugador;
};

