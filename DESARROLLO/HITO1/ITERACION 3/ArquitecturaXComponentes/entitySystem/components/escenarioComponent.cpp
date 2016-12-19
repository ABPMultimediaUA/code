/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   escenarioComponent.cpp
 * Author: elcuc_000
 * 
 * Created on 18 de diciembre de 2016, 23:25
 */

#include <typeinfo>

#include "escenarioComponent.h"

escenarioComponent::escenarioComponent() : componente(typeid(escenarioComponent).name()) {
    escenario = new unsigned short();
}

escenarioComponent::escenarioComponent(const escenarioComponent& orig) : componente(typeid(escenarioComponent).name()) {
    escenario = orig.escenario;
}

escenarioComponent::escenarioComponent(unsigned short e) : componente(typeid(escenarioComponent).name()) {
    escenario = new unsigned short();
    *escenario = e;
}

escenarioComponent::~escenarioComponent() {
}

void escenarioComponent::setEscenario(unsigned short e){
    *escenario = e;
}

unsigned short escenarioComponent::getEscenario(){
    return *escenario;
}