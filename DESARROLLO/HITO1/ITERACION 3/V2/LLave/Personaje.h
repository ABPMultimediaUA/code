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
#include <list>
#include "Bala.h"
#include "Entity2D.h"
#include "escenario/Puerta.h"

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
    std::list<Bala*> listaBalas;
    int direccion;
    

public:
    Personaje(ISceneManager* smgr, IVideoDriver* driver, b2World *world);
    Personaje(const Personaje& orig);
    virtual ~Personaje();
    
    vector3df getPos();
    vector3df getRot();
    vector3df getAngulo();
    int getCargador();
    float getVel();
    f32 getTiempoDisparo();
    float lanzarRayo(int modo);
    bool getDisparo();
    int getDireccion();
    
    void moverPersonaje(int modo, f32 dt);
    void setVelocidad();
    void rotar(vector3df raton);
    void setPos(vector3df pos);
    void setCargador(int newCargador);  
    void setDisparo(bool x);
    void setTiempoDisparo(f32 t);  
    void actualizarLista(f32 dt);
    void disparar(ISceneManager* smgr, IVideoDriver* driver, b2World *world, f32 dt, vector2df posRaton);
    void actualizarPosicion();
    void ModPuerta();
    Puerta* p=NULL;
    Puerta* ultp=NULL;
    int llaves;
    
};


#endif /* PERSONAJE_H */
