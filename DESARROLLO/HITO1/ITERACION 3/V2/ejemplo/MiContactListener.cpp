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