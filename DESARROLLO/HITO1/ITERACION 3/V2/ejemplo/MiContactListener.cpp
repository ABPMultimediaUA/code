/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   MiContactListener.cpp
 * Author: David
 * 
 * Created on 7 de diciembre de 2016, 11:27
 */
#include <Box2D.h>
#include <iostream>
#include "Entity2D.h"
#include "MiContactListener.h"

MiContactListener::MiContactListener() {
}

MiContactListener::MiContactListener(const MiContactListener& orig) {
}

MiContactListener::~MiContactListener() {
}

void MiContactListener::BeginContact(b2Contact* contact){
    std::cout<<"COLISION"<<std::endl;
    b2Fixture *f1 = contact->GetFixtureA();
    b2Fixture *f2 = contact->GetFixtureB();
    
    b2Body *b1 = f1->GetBody();
    b2Body *b2 = f2->GetBody();
    
    void* bodyUserData1 = f1->GetBody()->GetUserData();
        void* bodyUserData2 = f2->GetBody()->GetUserData();

    Entity2D *entity1 = static_cast<Entity2D*>(bodyUserData1);
    Entity2D *entity2 = static_cast<Entity2D*>(bodyUserData2);

    std::cout<<"ENTIDAD 1: "<<entity1->getIDEN()<<std::endl;
        std::cout<<"ENTIDAD 2: "<<entity2->getIDEN()<<std::endl;

   /* int a = *((int*)b1->GetUserData());
    int b = *((int*)b2->GetUserData());
    if(a == 1){
            std::cout<<"Personaje"<<std::endl;

    }*/
 
    
    
}

void MiContactListener::EndContact(b2Contact* contact){
        std::cout<<"SALGO"<<std::endl;

}

void MiContactListener::PostSolve(b2Contact* contact, const b2ContactImpulse* impulse){
    
    
}

void MiContactListener::PreSolve(b2Contact* contact, const b2Manifold* oldManifold){
    
}