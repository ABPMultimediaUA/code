/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   Bala.h
 * Author: Sammy Guergachi <sguergachi at gmail.com>
 *
 * Created on 2 de diciembre de 2016, 16:58
 */

#include <irrlicht.h>
#include <iostream>
#include <Box2D.h>


#ifndef BALA_H
#define BALA_H



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

class Bala {
private:
    ISceneNode *maya;
    b2Body *body;
    b2BodyDef bodyDef;
    b2PolygonShape bodyShape;
    
    vector3df pos;
    vector2df posRaton;
   
    f32 MOVEMENT_SPEED;
    bool live;

public:
    Bala(ISceneManager* smgr, IVideoDriver* driver, b2World *world, vector3df posPers, vector2df mousePosition);
    Bala(const Bala& orig);
    virtual ~Bala();
    void setPosition(vector3df);
    void mover(f32);
    vector3df getPos();
    void setPosRaton();
    bool estaViva();
    vector3df posInicial;
    bool update();
};


#endif /* BALA_H */
