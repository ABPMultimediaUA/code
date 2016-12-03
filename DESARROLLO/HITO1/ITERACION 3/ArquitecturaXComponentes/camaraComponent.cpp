/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   camaraComponent.cpp
 * Author: elcuc_000
 * 
 * Created on 3 de diciembre de 2016, 1:32
 */

#include "camaraComponent.h"
#include <iostream>

camaraComponent::camaraComponent() {
    foco = new vector3();
    camara = new facadeMotorGrafico();
}

camaraComponent::camaraComponent(const camaraComponent& orig) {
    camara = orig.camara;
    foco = orig.foco;
}

camaraComponent::~camaraComponent() {
    delete foco;
    delete camara;
    std::cout<<"Borrado el componente Camara"<<std::endl;
}

camaraComponent::camaraComponent(facadeMotorGrafico* fMG, vector3* v){
    foco = new vector3();
    camara = fMG;
    foco = v;
 }

void camaraComponent::setFoco(vector3 v){
    *foco = v;
}

void camaraComponent::setFoco(float x, float y, float z){
    foco->setXYZ(x,y,z);
}

void camaraComponent::setCamara(facadeMotorGrafico* fMG){
    camara = fMG;
}

vector3 camaraComponent::getFoco(){
    return foco;
}

float camaraComponent::getFocoX(){
    return foco->getX();
}

float camaraComponent::getFocoY(){
    return foco->getY();
}

float camaraComponent::getFocoZ(){
    return foco->getZ();
}

facadeMotorGrafico* camaraComponent::getCamara(){
    return camara;
}