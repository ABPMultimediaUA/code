/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   playerComponent.cpp
 * Author: JaumeLloret
 * 
 * Created on 9 de diciembre de 2016, 16:31
 */

#include "playerComponent.h"

playerComponent::playerComponent() : componente() {
    lastDirreccion = new char();
}

playerComponent::playerComponent(const playerComponent& orig) : componente() {
    lastDirreccion = orig.lastDirreccion;
}

playerComponent::~playerComponent() {
    delete lastDirreccion;
}

char playerComponent::getLastDirr(){
    return *lastDirreccion;
}

void playerComponent::setLastDirr(char d){
    *lastDirreccion = d;
}