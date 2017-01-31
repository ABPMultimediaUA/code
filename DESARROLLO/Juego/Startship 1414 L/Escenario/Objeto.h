/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Objeto.h
 * Author: Iván
 *
 * Created on 17 de enero de 2017, 12:44
 */



#include <irrlicht.h>
#include <iostream>
#include "../Fisicas/Entity2D.h"

#ifndef OBJETO_H
#define OBJETO_H

class Objeto {
public:
    Objeto();//...
    Objeto(const Objeto& orig);
    virtual ~Objeto();
    void Actualizar();
    virtual Entity2D* getEntity();
    IMeshSceneNode *maya;
    vector3df pos;
    Entity2D *entity;
    int id;
private:

    
};

#endif /* OBJETO_H */

