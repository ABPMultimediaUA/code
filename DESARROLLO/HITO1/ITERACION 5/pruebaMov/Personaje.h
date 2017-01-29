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

#include "Entity2D.h"

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
    Entity2D *entity;
    vector3df angulo;
    int cargador;
    f32 tiempoDisparo;
    bool disparo;
    int direccion;

public:
    Personaje(ISceneManager* smgr, IVideoDriver* driver, b2World *world, vector3df posIni);
    Personaje(const Personaje& orig);
    virtual ~Personaje();
    
    vector3df getPos();
    vector3df getRot();
    vector3df getAngulo();
    int getCargador();
    float getVel();
    f32 getTiempoDisparo();
    bool getDisparo();
    int getDireccion();
    
    void moverPersonaje(int modo);
    void setVelocidad();
    void rotar(vector3df raton);
    void setPos(vector3df pos);
    
  
    
};


#endif /* PERSONAJE_H */
