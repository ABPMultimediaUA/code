#pragma once
/*
* To change this license header, choose License Headers in Project Properties.
* To change this template file, choose Tools | Templates
* and open the template in the editor.
*/

/*
* File:   Enemigo.h
* Author: Iván
*
* Created on 29 de noviembre de 2016, 17:52
*/


#include <iostream>
#include "../Fisicas/Entity2D.h"
#include "Waypoints.h"
#include "AStar.h"


#ifndef ENEMIGO_H
#define ENEMIGO_H

class Nodo;

#define CRIA 10
#define BERSERKER 11
#define SOLDADO 12
#define JEFE 13

#define DESCANSAR 0
#define PATRULLAR 1
#define ALERTA 2
#define ATACAR 3
#define ROTACION 4



#ifdef _IRR_WINDOWS_
#pragma comment(lib, "Irrlicht.lib")
#pragma comment(linker, "/subsystem:windows /ENTRY:mainCRTStartup")
#endif

class Enemigo {
public:
	Enemigo(ISceneManager* smgr, IVideoDriver* driver, b2World *world, vector3df posicion, Waypoints* puntos);
	// Enemigo(const Enemigo& orig);
	virtual ~Enemigo();

	virtual void Update();
	virtual void Mover(int modo);
	void setVelocidad();
	virtual void Patrullar();
	void setPos(vector3df pos);
	bool estaVivo();
	vector3df getPos();
	float getVel();
	virtual void quitarVida(float damage) = 0;
	float getVida();
	Entity2D*  getEntity();

protected:
	

	IMeshSceneNode *maya;
	float vel;
	vector3df pos, rot;
	Entity2D *entity;
	int estadoActual;
	float vida;
	float cansancio;
	int raza;
	ITextSceneNode *GVida;
	ITextSceneNode *RVida;
	ISceneManager* smgr1;
	float blindaje;
	Waypoints *waypoints;
	AStar *path;
	Nodo *puntoIni, *puntoFin;
	int dir, posNodo;
	
};

#endif /* ENEMIGO_H */

