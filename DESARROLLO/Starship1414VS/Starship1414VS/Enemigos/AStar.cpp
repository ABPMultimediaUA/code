
#include "AStar.h"
#include <math.h>


AStar::AStar(float** matrix, int tam)
{
	matriz = matrix;
	tamMatrix = tam;
}


AStar::~AStar()
{
	for (int i = 0; i < tamMatrix; i++) {
		delete[] matriz[i];
	}

	delete[] matriz;
}

int AStar::buscarWaypointCercano(vector3df posEne)
{
	return 0;
}

int AStar::buscarWaypointMasCorto(int posNodoIni)
{
	return 0;
}

int AStar::getDireccion(vector3df posEne, vector3df posNodo)
{
	return 0;
}









