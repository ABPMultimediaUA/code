/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   facadeColision.h
 * Author: elcuc_000
 *
 * Created on 20 de diciembre de 2016, 1:39
 */

#ifndef FACADECOLISION_H
#define FACADECOLISION_H

#include <Box2D.h>
#include "../framework/MiContactListener.h"
#include "../framework/MyContactFilter.h"
#include "Entity2D.h"

class facadeColision {
public:
    facadeColision();
    facadeColision(const facadeColision& orig);
    virtual ~facadeColision();
    void setWorldStep(float);
    b2World* getWorld();
    void newEntity2D();
private:
    b2World* world;
    MiContactListener* contactListenerInstance;
    MyContactFilter* filtroContact;
    std::map<gameEntity*, Entity2D*> entityMap;
};

#endif /* FACADECOLISION_H */

