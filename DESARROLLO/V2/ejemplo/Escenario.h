/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Escenario.h
 * Author: Hector
 *
 * Created on 17 de noviembre de 2016, 20:08
 */
#include <irrlicht.h>

#ifndef ESCENARIO_H
#define ESCENARIO_H


using namespace irr;

using namespace core;
using namespace scene;
using namespace video;
using namespace io;
using namespace gui;

class Escenario {
public:
    Escenario(ISceneManager* smgr, IVideoDriver* driver);
    Escenario(const Escenario& orig);
    virtual ~Escenario();
    void crearPared(vector3df pos, vector3df rot);
private:
    ISceneManager* SM;
    IVideoDriver* VD;
    //vector con cada elemento que se cree (puertas, objetos, paredes, etc...)
    
};

#endif /* ESCENARIO_H */

