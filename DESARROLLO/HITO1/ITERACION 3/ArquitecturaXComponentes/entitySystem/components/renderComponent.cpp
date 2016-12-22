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
#include <typeinfo>

using namespace irr;
using namespace core;
using namespace scene;
using namespace video;
using namespace io;
using namespace gui;

renderComponent::renderComponent() : componente(typeid(renderComponent).name()) {}

renderComponent::renderComponent(const renderComponent& orig) : componente(typeid(renderComponent).name()) {
    posMaya = orig.posMaya;
}

renderComponent::~renderComponent() {
    std::cout<<"Borrado Componente render"<<std::endl;
}

renderComponent::renderComponent(unsigned short t, facadeMotorGrafico *fMG, const char *textura, vector3 vp) : componente(typeid(renderComponent).name()) {
    posMaya = fMG->addMaya(t,textura,vp);
}

void renderComponent::crearMaya(unsigned short t, facadeMotorGrafico *fMG, const char *textura, vector3 vp){
    posMaya = fMG->addMaya(t,textura,vp);
}

int renderComponent::getPosMaya(){
    return posMaya;
}