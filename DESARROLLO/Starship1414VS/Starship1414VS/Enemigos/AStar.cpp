#include "AStar.h"
#include <math.h>


AStar::AStar(Waypoints *waypoint)
{
	matriz = waypoint->getMatriz();
	
	for(int i = 0; waypoint->getNodos().size; i++) {
		puntos.push_back(waypoint->getNodos().at(i));
	}

}


AStar::~AStar()
{
}
