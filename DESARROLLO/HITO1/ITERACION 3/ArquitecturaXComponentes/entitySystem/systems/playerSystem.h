/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   playerSystem.h
 * Author: elcuc_000
 *
 * Created on 7 de diciembre de 2016, 2:10
 */

#ifndef PLAYERSYSTEM_H
#define PLAYERSYSTEM_H

#include "system.h"
#include "../facade/facadeMotorGrafico.h"

class playerSystem : public system {
public:
    playerSystem();
    playerSystem(const playerSystem& orig);
    playerSystem(entityManager*);
    virtual ~playerSystem();
    void update(float);
private:

};

#endif /* PLAYERSYSTEM_H */

