
#include "AStar.h"
#include "Nodo.h"
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

int AStar::buscarWaypointCercano(const vector3df &posEne, const std::vector<Nodo*> &vecNodos)
{
	float min = 10000000;
	int pos;
	for(int i = 0; i < vecNodos.size(); i++) {
		float xi, zi, xf, zf, peso;
		float pesoX, pesoZ;
		xi = posEne.X;
		zi = posEne.Z;
		xf = vecNodos.at(i)->getPosicion().X;
		zf = vecNodos.at(i)->getPosicion().Z;

		pesoX = powf((xf - xi), 2);
		pesoZ = powf((zf - zi), 2);
		peso = pesoX + pesoZ;
		peso = sqrtf(peso);

		if(peso < min) {
			min = peso;
			pos = i;
		}


	}
	std::cout << "POS WAYPOINT INI: " <<pos<< std::endl;
	return pos;
}

int AStar::buscarWaypointMasCorto(int posNodoIni)
{
	float min = 10000000;
	int pos;
	for(int i = 0; i < tamMatrix; i++) {
		if(matriz[posNodoIni][i] != 0 && matriz[posNodoIni][i] < min) {
			min = matriz[posNodoIni][i];
			pos = i;
		}

	}
	std::cout << "POS WAYPOINT MAS CERCANO: " << pos << std::endl;

	return pos;
}

//devuelve la direccion a donde se tiene que dirigir el enemigo
int AStar::getDireccion(vector3df posEne, vector3df posNodo)
{
	return 0;
}









