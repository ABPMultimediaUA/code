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
#include "vector2.h"
#include <iostream>

transformComponent::transformComponent() : componente() {
    posicion = new vector3();
    rotacion = new vector3();
    escala = new vector3();
}

transformComponent::transformComponent(const transformComponent& orig) : componente() {
    posicion = new vector3();
    rotacion = new vector3();
    escala = new vector3();
    posicion = orig.posicion;
    rotacion = orig.rotacion;
    escala = orig.escala;
}

transformComponent::~transformComponent() {
    delete posicion;
    delete rotacion;
    delete escala;
    std::cout<<"Borrado Componente de transformar"<<std::endl;
}

vector3 transformComponent::getPosicion(){
    return *posicion;
}

vector3 transformComponent::getRotacion(){
    return *rotacion;
}

vector3 transformComponent::getEscala(){
    return *escala;
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

void transformComponent::setEscala(float x,float y, float z){
    escala->setXYZ(x, y, z);
}

void transformComponent::setEscala(vector3 v){
    *escala = v;
}