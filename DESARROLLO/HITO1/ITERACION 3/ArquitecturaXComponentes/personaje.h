/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   personaje.h
 * Author: elcuc_000
 *
 * Created on 2 de diciembre de 2016, 1:07
 */

#ifndef PERSONAJE_H
#define PERSONAJE_H

#include "gameEntity.h"

class personaje : public gameEntity {
public:
    personaje();
    personaje(const personaje& orig);
    personaje(int);
    virtual ~personaje();
private:

};

#endif /* PERSONAJE_H */

