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

#include <irrlicht.h>
#include <iostream>
#include <Box2D.h>
#include "CAppReceiver.h"

class Estado;


#ifndef ENEMIGO_H
#define ENEMIGO_H

using namespace irr;

using namespace core;
using namespace scene;
using namespace video;
using namespace io;
using namespace gui;

#ifdef _IRR_WINDOWS_
#pragma comment(lib, "Irrlicht.lib")
#pragma comment(linker, "/subsystem:windows /ENTRY:mainCRTStartup")
#endif

class Enemigo {
public:
    Enemigo(ISceneManager* smgr, IVideoDriver* driver, b2World *world, Estado *ei);
    Enemigo(const Enemigo& orig);
    virtual ~Enemigo();
    vector3df getPos();
    Estado *est;
    void setPos(vector3df pos);
    float getVel();
    void mover(int modo, f32 dt);
    void setVelocidad();
    void rotar(vector3df raton);
    void Cambiar(Estado *enuevo);
private:
    IMeshSceneNode *maya;
    float vel;
    vector3df pos;
    b2Body *body;
    b2BodyDef bodyDef;
    b2PolygonShape bodyShape;
    b2MassData md;

};

#endif /* ENEMIGO_H */

