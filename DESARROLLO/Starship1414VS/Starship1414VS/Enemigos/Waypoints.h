#pragma once
/*
* To change this license header, choose License Headers in Project Properties.
* To change this template file, choose Tools | Templates
* and open the template in the editor.
*/

/*
* File:   Waypoints.h
* Author: Hector
*
* Created on 24 de enero de 2017, 18:00
*/

#ifndef WAYPOINTS_H
#define WAYPOINTS_H


#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include "../Fisicas/Entity2D.h"

class Waypoints {

	//cambiar a una clase
	typedef struct
	{
		std::string nombre;
		vector3df pos;
		int lugar;
	} Nodo;

private:

	Nodo Way;
	std::vector<Nodo> puntos;
	float **pesos;
	int tamDelMapa;


public:
	Waypoints();
	Waypoints(const Waypoints& orig);
	virtual ~Waypoints();

	void MuestraPuntos();
	void creaPuntos(std::string nombre, vector3df posicion);
	void creaPesos(Entity2D * entity);
	void mostrarPesos();
	void setTamDelMapa(int tam);
	float** getMatriz();
	std::vector<Nodo> getNodos();
	Nodo getNodoX(int x);




};

#endif /* WAYPOINTS_H */

