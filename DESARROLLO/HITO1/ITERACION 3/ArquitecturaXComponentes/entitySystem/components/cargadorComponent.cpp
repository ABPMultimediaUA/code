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
}

cargadorComponent::cargadorComponent(const cargadorComponent& orig) : componente(typeid(cargadorComponent).name()) {
}

cargadorComponent::~cargadorComponent() {
}

