/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   moveSystem.h
 * Author: elcuc_000
 *
 * Created on 7 de diciembre de 2016, 1:45
 */

#ifndef MOVESYSTEM_H
#define MOVESYSTEM_H

#include "system.h"

class moveSystem : public system {
public:
    moveSystem();
    moveSystem(const moveSystem& orig);
    moveSystem(entityManager*);
    virtual ~moveSystem();
    void update(float);
private:

};

#endif /* MOVESYSTEM_H */

