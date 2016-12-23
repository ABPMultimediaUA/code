/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   cargadorComponent.cpp
 * Author: JaumeLloret
 * 
 * Created on 20 de diciembre de 2016, 16:13
 */

#include <typeinfo>
#include "cargadorComponent.h"

cargadorComponent::cargadorComponent() : componente(typeid(cargadorComponent).name()) {
    cargador = 30;
    disparo = 0;
}

cargadorComponent::cargadorComponent(const cargadorComponent& orig) : componente(typeid(cargadorComponent).name()) {
    cargador = orig.cargador;
    disparo = orig.disparo;
}

cargadorComponent::cargadorComponent(unsigned short c) : componente(typeid(cargadorComponent).name()) {
    cargador = c;
    disparo = 0;
}

cargadorComponent::~cargadorComponent() {
}

void cargadorComponent::setCargador(unsigned short c){
    cargador = c;
}

unsigned short cargadorComponent::getCargador(){
    return cargador;
}

void cargadorComponent::disparoPP() {
    disparo++;
}

unsigned short cargadorComponent::getDisparo() {
    return disparo;
}

void cargadorComponent::cargar() {
    disparo = 0;
}

