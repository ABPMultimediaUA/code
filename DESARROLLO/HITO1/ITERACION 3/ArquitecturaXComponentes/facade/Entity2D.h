/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Entity2D.h
 * Author: User
 *
 * Created on 9 de diciembre de 2016, 15:52
 */

#ifndef ENTITY2D_H
#define ENTITY2D_H

#include <Box2D.h>
#include "../framework/vector3.h"
//#include "../framework/RayCastCallback.h"

class Entity2D {
public:
    Entity2D(b2World*, vector3);
    Entity2D(b2World*, vector3, vector3, vector3);
    Entity2D(b2World*, vector3, vector3, vector3, bool);
    Entity2D(b2World*, vector3, vector3, bool);
    Entity2D(const Entity2D& orig);
    virtual ~Entity2D();
    //float rayCast(int modo);
    b2Body* getCuerpo2D();
    //float rayCasting(b2Vec2 inicio, b2Vec2 fin);
    //float llamarCallBack(RayCastCallback* callback, b2Vec2 inicio, b2Vec2 fin);
    int getIDEN();
    bool getLive();
    void setLive(bool);
    
private:
    b2Body *body;
    b2BodyDef bodyDef;
    b2PolygonShape bodyShape;
    b2MassData md;
    b2Filter filtro;
    int iden;
    bool live;
};

#endif /* ENTITY2D_H */

