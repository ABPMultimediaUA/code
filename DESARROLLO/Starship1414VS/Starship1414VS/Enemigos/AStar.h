#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <irrlicht.h>
#include "Waypoints.h"
using namespace irr;

using namespace core;


class AStar
{
	typedef struct
	{
		std::string nombre;
		vector3df pos;
		int lugar;
	} Nodo;


public:
	AStar(Waypoints *waypoint);
	~AStar();



private:

	float** matriz;
	std::vector<Nodo> puntos;


};

