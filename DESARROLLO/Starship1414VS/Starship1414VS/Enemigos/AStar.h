#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <irrlicht.h>


using namespace irr;

using namespace core;


class AStar
{

public:
	AStar(float** matrix, int tam);
	~AStar();
	int buscarWaypointCercano(vector3df posEne);
	int buscarWaypointMasCorto(int posNodoIni);
	int getDireccion(vector3df posEne, vector3df posNodo);
	

private:

	float** matriz;
	int tamMatrix;
	


};

