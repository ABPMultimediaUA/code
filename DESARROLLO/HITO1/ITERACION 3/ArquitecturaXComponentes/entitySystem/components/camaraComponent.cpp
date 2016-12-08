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

camaraComponent::camaraComponent() : componente() {
    foco = new vector3();
    posCamara = new int();
}

camaraComponent::camaraComponent(const camaraComponent& orig) : componente() {
    camara = orig.camara;
    foco = orig.foco;
    posCamara = orig.posCamara;
}

camaraComponent::~camaraComponent() {
    delete foco;
    camara->borrarPorIDCamara(*posCamara);
    delete posCamara;
    std::cout<<"Borrado el componente Camara"<<std::endl;
}

camaraComponent::camaraComponent(facadeMotorGrafico *fMG, vector3* v, int *id, vector3 *v1, vector3 *v2) : componente() {
    foco = v;
    camara = fMG;
    posCamara = camara->addCamera(id,v1,v2);
 }

void camaraComponent::setFoco(vector3 *v){
    foco = v;
}

void camaraComponent::setFoco(float x, float y, float z){
    foco->setXYZ(x,y,z);
}

void camaraComponent::setCamara(facadeMotorGrafico* fMG){
    camara = fMG;
}

vector3 camaraComponent::getFoco(){
    return *foco;
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

void camaraComponent::setFoco(int *c){
    camara->getCameraFoco(c);
}

void camaraComponent::crearCamara(int *id, vector3 *v1, vector3 *v2){
    posCamara = camara->addCamera(id,v1,v2);
}