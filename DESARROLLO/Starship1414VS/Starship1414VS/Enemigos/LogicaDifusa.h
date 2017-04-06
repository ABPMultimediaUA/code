#pragma once

#include <irrlicht.h>
#include <iostream>

using namespace irr;
using namespace core;

class LogicaDifusa
{

public:
	LogicaDifusa(const float &vidaM, const int moralM, const int resistM);
	~LogicaDifusa();
	void fusificador(const float &vidaE, const vector3df &posE, const vector2df &posJ, const int n_moral, const int n_resist); //es quien aplica la grafica con las condicciones
	void baseDeConocimiento();
	void desfusificador();
	void sistemaDeInferencia(); //llama a la base del conocimiento para aplicar las leyes
	void condiccionesDeLaVidaEnemigo(); //calculos de la grafica
	//void condiccionesDeLaVidaJugador();
	void condiccionesDeLaDistancia();
	void condiccionesDeLaMoral();
	void condiccionesDeLaResistencia();
	void setPesoMaximo(float x);
	void reiniciarArrays();
	int getEstadoDecidido();


private:

	
	float vidaMax;
	float disMax;
	int moralMax;
	int resistMax;
	float escapar;
	float disparar;
	float cqc;
	float f_moral;
	float f_resist;
	int estadoDecidido;
	//float vidaJugador;
	float vidaEnemigo;
	vector2df posJugador;
	vector3df posEnemigo;
	int resist;
	int moral;
	float resultadosVidaEnemigo[4];
	//float resultadosVidaJugador[3];
	float resultadosDePos[3];
	float resultadosDeMoral[3];
	float resultadosDeMoral[3];
	float resultadosDeResistencia[3];



};

;