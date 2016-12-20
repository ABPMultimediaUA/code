/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   facadeColision.cpp
 * Author: elcuc_000
 * 
 * Created on 20 de diciembre de 2016, 1:39
 */

#include "facadeColision.h"

facadeColision::facadeColision() {
    world = new b2World(b2Vec2(0.0f, 0.0f));
    contactListenerInstance = new MiContactListener();
    filtroContact = new MyContactFilter();
    world->SetContactListener(contactListenerInstance);
    world->SetContactFilter(filtroContact);
}

facadeColision::facadeColision(const facadeColision& orig) {
}

facadeColision::~facadeColision() {
    delete contactListenerInstance;
    delete filtroContact;
    delete world;
}

void facadeColision::setWorldStep(float dt){
    world->Step(dt, 6, 2);
    world->ClearForces();
}
