/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Puerta.h
 * Author: David
 *
 * Created on 15 de diciembre de 2016, 20:03
 */
#include <Box2D.h>
#include <irrlicht.h>
#include "../Entity2D.h"

#ifndef PUERTA_H
#define PUERTA_H

using namespace irr;

using namespace core;
using namespace scene;
using namespace video;
using namespace io;
using namespace gui;

class Puerta {
public:
    
    Puerta(vector3df posicion, vector3df rotacion, vector3df escala, IMeshSceneNode *objeto);
    Puerta(const Puerta& orig);
    virtual ~Puerta();
    
    vector3df getPosicion();
    vector3df getRotacion();
    vector3df getEscala();
    
    
    void setPosicion(vector3df newPos);
    void setRotacion(vector3df newRot);
    void setEscala(vector3df newEscala);
    void setFisica(b2World *world);
    void setLLave(bool l);
    void abrirPuerta();
    void cerrarPuerta();
    bool abierta;
    bool conllave;
     IMeshSceneNode *maya;
    
private:
    
    vector3df pos;
    vector3df posIni;
    vector3df rot;
    vector3df escal;
    Entity2D *entity;
   

};

#endif /* PUERTA_H */

