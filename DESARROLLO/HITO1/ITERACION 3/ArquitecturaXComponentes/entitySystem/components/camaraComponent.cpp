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
#include <typeinfo>

camaraComponent::camaraComponent() : componente(typeid(camaraComponent).name()) {
    foco = new vector3();
}

camaraComponent::camaraComponent(const camaraComponent& orig) : componente(typeid(camaraComponent).name()) {
    camara = orig.camara;
    foco = orig.foco;
    posCamara = orig.posCamara;
}

camaraComponent::camaraComponent(facadeMotorGrafico *fMG, int id, vector3 *vp, vector3 *vf) : componente(typeid(camaraComponent).name()) {
    foco = vf;
    camara = fMG;
    posCamara = camara->addCamera(id,vp,vf);
 }

camaraComponent::~camaraComponent() {
    delete foco;
    camara->borrarPorIDCamara(posCamara);
    std::cout<<"Borrado el componente Camara"<<std::endl;
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

void camaraComponent::crearCamara(int id, vector3 *v1, vector3 *v2){
    posCamara = camara->addCamera(id,v1,v2);
}