/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Pared.h
 * Author: David
 *
 * Created on 1 de diciembre de 2016, 19:35
 */
#include <irrlicht.h>

#ifndef PARED_H
#define PARED_H

using namespace irr;

using namespace core;
using namespace scene;
using namespace video;
using namespace io;
using namespace gui;



class Pared {
public:
    Pared(ISceneManager* smgr, IVideoDriver* driver, vector3df posicion, vector3df rotacion);
    Pared(const Pared& orig);
    virtual ~Pared();
    
    vector3df getPosicion();
    vector3df getRotacion();
    
    void setPosicion(vector3df newPos);
    void setRotacion(vector3df newRot);
    
private:
    
    IAnimatedMesh* pared;
    IAnimatedMeshSceneNode* paredColocada;
    vector3df pos;
    vector3df rot;
    
    
};

#endif /* PARED_H */

