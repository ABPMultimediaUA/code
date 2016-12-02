/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   renderComponent.cpp
 * Author: elcuc_000
 * 
 * Created on 2 de diciembre de 2016, 2:13
 */

#include "renderComponent.h"
#include <iostream>

renderComponent::renderComponent() : componente() {
}

renderComponent::renderComponent(const renderComponent& orig) : componente(orig) {
}

renderComponent::~renderComponent() {
    std::cout<<"Borrado Componente render"<<std::endl;
}

