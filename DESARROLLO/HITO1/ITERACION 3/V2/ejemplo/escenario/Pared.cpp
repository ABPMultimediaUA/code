/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Pared.cpp
 * Author: David
 * 
 * Created on 1 de diciembre de 2016, 19:35
 */

#include "Pared.h"


Pared::Pared(vector3df posicion, vector3df rotacion, vector3df escala) {
    
 
      pos = posicion;
      rot = rotacion;
      escal = escala;
}

Pared::Pared(const Pared& orig) {
}

Pared::~Pared() {
}

vector3df Pared::getPosicion(){
    return pos;
}

vector3df Pared::getRotacion(){
    return rot;
}

vector3df Pared::getEscala(){
    return escal;
}

void Pared::setPosicion(vector3df newPos){
    pos = newPos;
}

void Pared::setRotacion(vector3df newRot){
    rot = newRot;
}

void Pared::setEscala(vector3df newEscala){
    escal = newEscala;
}

void Pared::setFisica(b2World* world){
    
    bodyDef.type = b2_dynamicBody;
    bodyDef.position.Set(pos.X, pos.Z);
    //si tiene rotacion en Y van | sino van -
    if(rot.Y == 90){
        
        bodyShape.SetAsBox(1, 20);

    }
    
    else{
         bodyShape.SetAsBox(20, 1);

    }
    
    body = world->CreateBody(&bodyDef);
    body -> CreateFixture(&bodyShape, 1.0f);
    body->SetUserData(this);
    
}
