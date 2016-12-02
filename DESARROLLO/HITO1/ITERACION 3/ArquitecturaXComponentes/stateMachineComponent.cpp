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

stateMachineComponent::stateMachineComponent() : componente() {
}

stateMachineComponent::stateMachineComponent(const stateMachineComponent& orig) : componente(orig) {
}

stateMachineComponent::~stateMachineComponent() {
    std::cout<<"Borrado Componente Maquina de estados"<<std::endl;
}

