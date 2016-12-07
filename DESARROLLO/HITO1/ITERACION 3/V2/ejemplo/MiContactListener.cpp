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
#include "MiContactListener.h"

MiContactListener::MiContactListener() {
}

MiContactListener::MiContactListener(const MiContactListener& orig) {
}

MiContactListener::~MiContactListener() {
}

void MiContactListener::BeginContact(b2Contact* contact){
    
}

void MiContactListener::EndContact(b2Contact* contact){
    
}

void MiContactListener::PostSolve(b2Contact* contact, const b2ContactImpulse* impulse){
    
    
}

void MiContactListener::PreSolve(b2Contact* contact, const b2Manifold* oldManifold){
    
}