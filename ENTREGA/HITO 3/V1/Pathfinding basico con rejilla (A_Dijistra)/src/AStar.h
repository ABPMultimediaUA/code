#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <irrlicht.h>

class Nodo;
using namespace irr;

using namespace core;


class AStar
{

public:
	AStar(float** matrix, int tam);
	~AStar();
	int buscarWaypointCercano(const vector3df &posEne, const std::vector<Nodo*> &vecNodos);
	int buscarWaypointMasCorto(const int &posNodoIni);
	int buscarWaypointNoRepetido(const int &posWaypointRep, const int &posNodoActual);
	int getDireccion(const vector3df &posEne, const vector3df &posNodo); //ver hacia donde tiene que ir
	bool estoyEnElNodo(const vector3df &posEne, const vector3df &posNodo);
	void calcularAnguloDeRotacion();
	float getAnguloDeRotacion();
	

private:

	float** matriz;
	int tamMatrix;
	float actualX, actualZ, anteriorX, anteriorZ, angulo;


};

