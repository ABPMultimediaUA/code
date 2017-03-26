#pragma once

#include <irrlicht.h>
#include <iostream>

using namespace irr;
using namespace core;

class LogicaDifusa
{

public:
	LogicaDifusa(const float &vidaM);
	~LogicaDifusa();
	void fusificador(const float &vidaE, const vector3df &posE, const vector3df &posJ); //es quien aplica la grafica con las condicciones
	void baseDeConocimiento();
	void desfusificador();
	void sistemaDeInferencia(); //llama a la base del conocimiento para aplicar las leyes
	void condiccionesDeLaVidaEnemigo(); //calculos de la grafica
	//void condiccionesDeLaVidaJugador();
	void condiccionesDeLaDistancia();
	void setPesoMaximo(float x);
	void reiniciarArrays();

private:

	float vidaEnemigo;
	float vidaMax;
	float posMax;
	//float vidaJugador;
	vector3df posJugador;
	vector3df posEnemigo;
	float resultadosVidaEnemigo[4];
	//float resultadosVidaJugador[3];
	float resultadosDePos[3];
	int resultConocimiento;



};

;