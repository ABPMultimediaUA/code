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
#include "RayCastCallback.h"

using namespace irr;

using namespace core;
using namespace scene;
using namespace video;
using namespace io;
using namespace gui;

class Entity2D {
public:
    Entity2D(b2World *world, vector3df pos, void* dirPers, ISceneManager* smgr);
    Entity2D(b2World* world, vector3df pos, vector3df rot, vector3df escala, void* dirPared);
    Entity2D(b2World* world, vector3df pos, vector3df rot, vector3df escala, bool sensor, void* dirPuerta);
    Entity2D(b2World* world, vector3df pos, vector3df rot, bool vivo, void* dirBala);
    Entity2D(b2World *world, vector3df pos, bool vivo, void* dirEnemigo, ISceneManager* smgr);

    Entity2D(const Entity2D& orig);
    virtual ~Entity2D();
    float rayCast(b2Vec2 inicio, b2Vec2 fin);
    b2Body* getCuerpo2D();
    float rayCasting(b2Vec2 inicio, b2Vec2 fin);
    float llamarCallBack(RayCastCallback* callback, b2Vec2 inicio, b2Vec2 fin);
    int getIDEN();
    int getIDENSH();
    bool getLive();
    void setLive(bool x);

    void* getObjeto3D();
    void destruirFixture();
    void crearFixture();
    b2Body* getSombraP2D();
    b2Body* getSombraE2D();

private:


    b2Body *body;
    b2BodyDef bodyDef;
    b2PolygonShape bodyShape;
    b2CircleShape bodyCircle;
    b2MassData md;
    b2Filter filtro;
    b2Body *sombraP;
    b2Body *sombraE;
    b2BodyDef sombraDef;
    b2PolygonShape sombraShape;
    IMeshSceneNode* fisica;
    IMeshSceneNode* fisica2;
    int iden;
    int idenSh;
    bool live;
    void* objeto3D;

};

#endif /* ENTITY2D_H */

