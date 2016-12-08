/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   velocityComponent.cpp
 * Author: elcuc_000
 * 
 * Created on 2 de diciembre de 2016, 4:01
 */

#include "velocityComponent.h"
#include <iostream>

velocityComponent::velocityComponent() : componente() {
    velocidad = new vector2();
}

velocityComponent::velocityComponent(const velocityComponent& orig) : componente() {
    velocidad = new vector2();
    velocidad = orig.velocidad;
}

velocityComponent::~velocityComponent() {
    delete velocidad;
    std::cout<<"Borrado Componente velocidad"<<std::endl;
}

void velocityComponent::setVelocidad(float x,float y){
    velocidad->setXY(x, y);
}

void velocityComponent::setVelocidad(vector2 v){
    *velocidad = v;
}

vector2 velocityComponent::getVelocidad(){
    return *velocidad;
}