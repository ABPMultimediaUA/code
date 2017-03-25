#pragma once

#include <irrlicht.h>
#include <iostream>

using namespace irr;
using namespace core;

class LogicaDifusa
{

public:
	LogicaDifusa();
	~LogicaDifusa();
	void fusificador(const float &vidaE, const float &vidaJ, const vector3df &posE, const vector3df &posJ);
	int baseDeConocimiento();
	void desfusificador(const int &resultado);
	void sistemaDeInferencia();

private:

	float vidaJugador;
	float videEnemigo;
	short vidaJTrans;
	short vidaETrans;
	short posJTrans;
	short posETrans;
	vector3df posJugador;
	vector3df posEnemigo;
	short rangoVida[4];
	short rangoDistancia[3];


};

;