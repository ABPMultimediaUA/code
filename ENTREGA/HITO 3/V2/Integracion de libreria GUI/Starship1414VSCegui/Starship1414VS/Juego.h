#pragma once
/*
* To change this license header, choose License Headers in Project Properties.
* To change this template file, choose Tools | Templates
* and open the template in the editor.
*/

/*
* File:   Juego.h
* Author: Hector
*
* Created on 19 de diciembre de 2016, 22:22
*/

#ifndef JUEGO_H
#define JUEGO_H

#include "EstadoGeneral.h"
#include <string>
#include <Box2D\Box2D.h>
#include <irrlicht.h>
#include <IrrlichtDevice.h>
#include <iostream>
#include "CAppReceiver.h"
#include "Jugador/Personaje.h"
#include "Escenario/Escenario.h"
#include "Escenario/Camara.h"
#include "Escenario/readJson.h"
#include "Fisicas/MiContactListener.h"
#include "Fisicas/MyContactFilter.h"
#include "Menu/Menu.h"
#include "Menu/GUI.h"



class Juego : public EstadoGeneral {
public:

	//CEGUI
	GUI *menu;
	//CEGUI
	CAppReceiver teclado;
	IVideoDriver* driver;
	ISceneManager* smgr;
	IGUIEnvironment* guienv;
	b2Vec2 gravity;
	b2World *world;
	MiContactListener* contactListenerInstance;
	MyContactFilter* filtroContact;
	u32 then;
	Personaje *pers;
	Escenario *esce;
	Enemigo *ene;
	readJson *json;
	Camara *cam;
	int lastFPS;
	Menu *menuPausa;
	int estado;

	void loopJuego();

	Juego();
	Juego(std::string name);
	virtual ~Juego();
	void Dentro(void);
	void Fuera(void);
	bool OnEvent(const SEvent &event);
	void render(IrrlichtDevice* iDevice);
	void StarUP(IrrlichtDevice* iDevice);
	void update(int state);
	void mover(f32 dt);
	void recargar();
	void pausa(IrrlichtDevice* iDevice);
	void cambioarma();
	void raton(f32 dt);


};

#endif /* JUEGO_H */

