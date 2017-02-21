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
	AStar();
	~AStar();

private:

	float** matriz;
	std::vector<Nodo*> puntos;


};

