/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   transformComponent.cpp
 * Author: elcuc_000
 * 
 * Created on 1 de diciembre de 2016, 1:37
 */

#include "transformComponent.h"
#include "Common/b2Settings.h"
#include <iostream>

transformComponent::transformComponent() : componente() {
    posicion = new vector3();
    rotacion = new vector3();
}

transformComponent::transformComponent(const transformComponent& orig) : componente() {
    posicion = new vector3();
    rotacion = new vector3();
    posicion = orig.posicion;
    rotacion = orig.rotacion;
}

transformComponent::~transformComponent() {
    delete posicion;
    delete rotacion;
    std::cout<<"Borrado Componente de transformar"<<std::endl;
}

vector3 transformComponent::getPosicion(){
    return *posicion;
}

vector3 transformComponent::getRotacion(){
    return *rotacion;
}

void transformComponent::setPosicion(float x,float y,float z){
    posicion->setXYZ(x, y, z);
}

void transformComponent::setPosicion(vector3 v){
    *posicion = v;
}

void transformComponent::setRotacion(float x,float y, float z){
    rotacion->setXYZ(x, y, z);
}

void transformComponent::setRotacion(vector3 v){
    *rotacion = v;
}