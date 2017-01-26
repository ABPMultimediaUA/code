/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   LLave.h
 * Author: Iván
 *
 * Created on 7 de enero de 2017, 10:10
 */

#include <irrlicht.h>
#include <iostream>
#include "Entity2D.h"
#include "Objeto.h"

#ifndef LLAVE_H
#define LLAVE_H

class LLave : public Objeto {
public:
    LLave(ISceneManager* smgr, IVideoDriver* driver, b2World *world, vector3df posicion);
    LLave(const LLave& orig);
    virtual ~LLave();
    void Actualizar();
    
private:

    
};

#endif /* LLAVE_H */

