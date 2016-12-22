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
#include <map>
#include "../framework/MiContactListener.h"
#include "../framework/MyContactFilter.h"
#include "../entitySystem/framework/gameEntity.h"
#include "../framework/vector2.h"
#include "../framework/vector3.h"
#include "Entity2D.h"

class facadeColision {
public:
    facadeColision();
    facadeColision(const facadeColision& orig);
    virtual ~facadeColision();
    void setWorldStep(float);
    unsigned long newEntity2D(vector3);
    unsigned long newEntity2D(vector3,vector3,bool);
    vector3 moveEntity2D0(int,vector2);
    vector3 moveEntity2D1(int,vector2);
    vector3 moveEntity2D2(int,vector2);
    vector3 moveEntity2D3(int,vector2);
    vector3 moveEntity2D4(int,vector2);
    vector3 moveEntity2D5(int,vector2);
    vector3 moveEntity2D6(int,vector2);
    vector3 moveEntity2D7(int,vector2);
    void setEntity2DVelocity(int,vector2);
private:
    b2World* world;
    MiContactListener* contactListenerInstance;
    MyContactFilter* filtroContact;
    std::map<int, Entity2D*>* entityMap;
    unsigned long numEntity2D;
};

#endif /* FACADECOLISION_H */

