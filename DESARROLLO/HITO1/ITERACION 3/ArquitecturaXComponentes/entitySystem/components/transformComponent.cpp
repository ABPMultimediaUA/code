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
#include <iostream>
#include <typeinfo>

transformComponent::transformComponent() : componente(typeid(transformComponent).name()) {
    posicion.setX(0.0f);
    posicion.setY(0.0f);
    posicion.setZ(0.0f);
    rotacion.setX(0.0f);
    rotacion.setY(0.0f);
    rotacion.setZ(0.0f);
    escala.setX(0.0f);
    escala.setY(0.0f);
    escala.setZ(0.0f);
    modificado = false;
}

transformComponent::transformComponent(const transformComponent& orig) : componente(typeid(transformComponent).name()) {
    posicion = orig.posicion;
    rotacion = orig.rotacion;
    escala = orig.escala;
    modificado = orig.modificado;
}

transformComponent::transformComponent(vector3 vp, vector3 vr, vector3 ve) : componente(typeid(transformComponent).name()) {
    posicion.setX(vp.getX());
    posicion.setY(vp.getY());
    posicion.setZ(vp.getZ());
    rotacion.setX(vr.getX());
    rotacion.setY(vr.getY());
    rotacion.setZ(vr.getZ());
    escala.setX(ve.getX());
    escala.setY(ve.getY());
    escala.setZ(ve.getZ());
    modificado = false;
}

transformComponent::~transformComponent() {
    std::cout<<"Borrado Componente de transformar"<<std::endl;
}

vector3 transformComponent::getPosicion(){
    return posicion;
}

vector3 transformComponent::getRotacion(){
    return rotacion;
}

vector3 transformComponent::getEscala(){
    return escala;
}

bool transformComponent::getModificado(){
    return modificado;
}

void transformComponent::setPosicion(float x, float y,float z){
    posicion.setXYZ(x, y, z);
}

void transformComponent::setPosicion(vector3 v){
    posicion.setX(v.getX());
    posicion.setY(v.getY());
    posicion.setZ(v.getZ());
}

void transformComponent::setRotacion(float x, float y, float z){
    rotacion.setXYZ(x, y, z);
}

void transformComponent::setRotacion(vector3 v){
    rotacion.setX(v.getX());
    rotacion.setY(v.getY());
    rotacion.setZ(v.getZ());
}

void transformComponent::setEscala(float x, float y, float z){
    escala.setXYZ(x, y, z);
}

void transformComponent::setEscala(vector3 v){
    escala.setX(v.getX());
    escala.setY(v.getY());
    escala.setZ(v.getZ());
}

void transformComponent::setModificado(bool m){
    modificado = m;
}