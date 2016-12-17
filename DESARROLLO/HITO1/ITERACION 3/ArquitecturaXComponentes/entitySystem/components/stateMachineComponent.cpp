/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   stateMachineComponent.cpp
 * Author: elcuc_000
 * 
 * Created on 1 de diciembre de 2016, 1:37
 */

#include "stateMachineComponent.h"
#include <iostream>
#include <typeinfo>

stateMachineComponent::stateMachineComponent() : componente(typeid(stateMachineComponent).name()) {
}

stateMachineComponent::stateMachineComponent(const stateMachineComponent& orig) : componente(typeid(stateMachineComponent).name()) {
}

stateMachineComponent::~stateMachineComponent() {
    std::cout<<"Borrado Componente Maquina de estados"<<std::endl;
}

