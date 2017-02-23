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
	int buscarWaypointMasCorto(int posNodoIni);
	int getDireccion(vector3df posEne, vector3df posNodo); //ver hacia donde tiene que ir
	

private:

	float** matriz;
	int tamMatrix;
	


};

