/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   rotarSystem.h
 * Author: elcuc_000
 *
 * Created on 19 de diciembre de 2016, 2:24
 */

#ifndef ROTARSYSTEM_H
#define ROTARSYSTEM_H

#include "system.h"
class facadeMotorGrafico;

class rotarSystem : public system {
public:
    rotarSystem();
    rotarSystem(const rotarSystem& orig);
    rotarSystem(entityManager*);
    virtual ~rotarSystem();
    void update(facadeMotorGrafico*);
private:

};

#endif /* ROTARSYSTEM_H */

