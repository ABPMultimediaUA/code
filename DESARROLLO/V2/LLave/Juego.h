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
#include "CAppReceiver.h"
#include "MyContactFilter.h"
#include "escenario/Escenario.h"
#include "Enemigo.h"
#include "readJson.h"
#include "Camara.h"
#include "LLave.h"
#include <irrlicht.h>

class Juego {
public:
    CAppReceiver teclado;
    IrrlichtDevice *device;
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
    LLave *lla;
    readJson *json;
    Camara *cam;
    
    void loopJuego();
    
    Juego();
    Juego(const Juego& orig);
    virtual ~Juego();
    CAppReceiver GetTeclado();

};

#endif /* JUEGO_H */

