#pragma once
/*
* To change this license header, choose License Headers in Project Properties.
* To change this template file, choose Tools | Templates
* and open the template in the editor.
*/

/*
* File:   Puerta.h
* Author: David
*
* Created on 15 de diciembre de 2016, 20:03
*/
#include <Box2D\Box2D.h>
#include "../Fisicas/Entity2D.h"

#ifndef PUERTA_H
#define PUERTA_H

#define ABIERTA 1
#define ESTATICO 2
#define CERRADA 0

class Entity2D;
class MaquinaEstados;
class Estados;

class Puerta {
public:

	Puerta(vector3df posicion, vector3df rotacion, vector3df escala, IMeshSceneNode *objeto);
	Puerta(const Puerta& orig);
	virtual ~Puerta();

	vector3df getPosicion();
	vector3df getRotacion();
	vector3df getEscala();
	bool getAbierta();
	bool getTotalAbierta();
	void setPosicion(vector3df newPos);
	void setRotacion(vector3df newRot);
	void setEscala(vector3df newEscala);
	void setDetectado(bool x);
	void setFisica(b2World *world , ISceneManager* smgr);
	void setAbierta();
	void setCerrada();
	void abrirPuerta();
	void cerrarPuerta();
	void Update();
	void UpdateEstado();

private:

	vector3df pos;
	vector3df posIni;
	vector3df rot;
	vector3df escal;
	Entity2D *entity;
	IMeshSceneNode *maya;
	bool abierta=false;
	int estadoActual;
	float limiteApX;
	float limiteApZ;
	bool abrir;
	bool detectado;
};

#endif /* PUERTA_H */

