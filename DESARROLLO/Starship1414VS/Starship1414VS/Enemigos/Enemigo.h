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
#include <irrlicht.h>
#include <Box2D\Box2D.h>
#include <list>

using namespace irr;

using namespace core;
using namespace scene;
using namespace video;
using namespace io;
using namespace gui;

#ifndef ENEMIGO_H
#define ENEMIGO_H

class Nodo;
class AStar;
class Waypoints;
class Entity2D;
class Bala;

#define CRIA 10
#define BERSERKER 11
#define SOLDADO 12
#define JEFE 13

#define BUSCARPUNTO 0
#define PATRULLAR 1
#define ALERTA 2
#define ATACAR 3
#define ROTACION 4
#define DESCANSAR 5


#ifdef _IRR_WINDOWS_
#pragma comment(lib, "Irrlicht.lib")
#pragma comment(linker, "/subsystem:windows /ENTRY:mainCRTStartup")
#endif

class Enemigo {
public:
	Enemigo(ISceneManager* smgr, IVideoDriver* driver, b2World *world, vector3df posicion, Waypoints* puntos);
	// Enemigo(const Enemigo& orig);
	virtual ~Enemigo();

	virtual void Update(f32 dt);
	void Mover(int modo);
	void setVelocidad();
	virtual void Patrullar();
	virtual void Atacar(f32 dt);
	virtual void BuscarWaypoint();
	void setPos(vector3df pos);
	bool estaVivo();
	vector3df getPos();
	float getVel();
	virtual void quitarVida(float damage) = 0;
	float getVida();
	Entity2D*  getEntity();
	float getDamageChoque();
	void setEstado(int num);
	int getEstado();

	void setDisparo(bool x);
	void aumentarTiempoDisparo(float t);
	void resetTiempoDisparo();
	float getTiempoDisparo();
	bool getDisparado();
	void disparar(float dt);
	void actualizarLista();
	void setPosJugador(float x, float y);
	Nodo* getNodoInicio();
	Nodo* getNodoFin();




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
	IVideoDriver* VD;
	b2World* mundo;
	float blindaje;
	Waypoints *waypoints;
	AStar *path;
	Nodo *puntoIni, *puntoFin, *nodoAnterior;
	int dir, posNodo;
	float damageChoque;
	

	std::list<Bala*> listaBalas;
	//std::list<Nodo*> recorrido;
	bool disparado;
	float tiempoDisparo;
	vector2df posJugador;
	float damageBala;


};

#endif /* ENEMIGO_H */

