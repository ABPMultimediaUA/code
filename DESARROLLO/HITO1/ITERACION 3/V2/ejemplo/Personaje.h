/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   Personaje.h
 * Author: User
 *
 * Created on 16 de noviembre de 2016, 15:41
 */

#include <irrlicht.h>
#include <iostream>
#include <Box2D.h>

#ifndef PERSONAJE_H
#define PERSONAJE_H


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

class Personaje {
private:

    IMeshSceneNode *maya;
    float vel;
    vector3df pos;
    b2Body *body;
    b2BodyDef bodyDef;
    b2PolygonShape bodyShape;
    b2MassData md;
   
public:
    Personaje(ISceneManager* smgr, IVideoDriver* driver, b2World *world);
    Personaje(const Personaje& orig);
    virtual ~Personaje();
    vector3df getPos();
    void setPos(vector3df pos);
    float getVel();
    void moverPersonaje(int modo, f32 dt);
    void setVelocidad();
    void rotar(vector3df raton);
    f32 lanzarRayo(int modo);

};


#endif /* PERSONAJE_H */
