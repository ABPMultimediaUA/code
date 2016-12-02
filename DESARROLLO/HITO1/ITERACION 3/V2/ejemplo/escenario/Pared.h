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
    Pared(vector3df posicion, vector3df rotacion, vector3df escala);
    Pared(const Pared& orig);
    virtual ~Pared();
    
    vector3df getPosicion();
    vector3df getRotacion();
    vector3df getEscala();
    
    void setPosicion(vector3df newPos);
    void setRotacion(vector3df newRot);
    void setEscala(vector3df newEscala);
    
private:
    
   
    vector3df pos;
    vector3df rot;
    vector3df escal;
    
    
};

#endif /* PARED_H */

