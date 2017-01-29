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
#include <irrlicht.h>


using namespace irr;

using namespace core;
using namespace scene;
using namespace video;
using namespace io;
using namespace gui;

class Entity2D {
public:
    Entity2D(b2World *world, vector3df pos, void* dirPers);
  

    Entity2D(const Entity2D& orig);
    virtual ~Entity2D();
   
    b2Body* getCuerpo2D();

    int getIDEN();
    bool getLive();
    void setLive(bool x);
    void* getObjeto3D();
    void destruirFixture();
    void crearFixture();
    
private:
    
  
    b2Body *body;
    b2BodyDef bodyDef;
    b2PolygonShape bodyShape;
    b2CircleShape bodyCircle;
    b2MassData md;
    b2Filter filtro;
    int iden;
    bool live;
    void* objeto3D;
  
};

#endif /* ENTITY2D_H */

