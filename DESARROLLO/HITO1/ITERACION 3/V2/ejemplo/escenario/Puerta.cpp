/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Puerta.cpp
 * Author: David
 * 
 * Created on 15 de diciembre de 2016, 20:03
 */

#include "Puerta.h"

Puerta::Puerta(vector3df posicion, vector3df rotacion, vector3df escala) {
    
    pos = posicion;
    rot = rotacion;
    escal = escala;
    
}

Puerta::Puerta(const Puerta& orig) {
}

Puerta::~Puerta() {
}

vector3df Puerta::getPosicion(){
    return pos;
}

vector3df Puerta::getRotacion(){
    return rot;
}

vector3df Puerta::getEscala(){
    return escal;
}

void Puerta::setPosicion(vector3df newPos){
    pos = newPos;
}

void Puerta::setRotacion(vector3df newRot){
    rot = newRot;
}

void Puerta::setEscala(vector3df newEscala){
    escal = newEscala;
}

void Puerta::setFisica(b2World* world){
     //std::cout<<"CREO PARED! "<<std::endl;

    entity = new Entity2D(world, pos, rot, escal, true);
    
}

