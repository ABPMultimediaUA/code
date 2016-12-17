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
    maya = orig.maya;
    posMaya = orig.posMaya;
}

renderComponent::~renderComponent() {
    maya->borrarPorIDMaya(*posMaya);
    std::cout<<"Borrado Componente render"<<std::endl;
}

renderComponent::renderComponent(facadeMotorGrafico *fMG, int *id, const char *textura, vector3 *vp) : componente(typeid(renderComponent).name()) {
    maya = fMG;
    posMaya = maya->addMaya(id,textura,vp);
}

facadeMotorGrafico* renderComponent::getMaya(){
    return maya;
}

void renderComponent::setMaya(facadeMotorGrafico *fMG){
    maya = fMG;
}

void renderComponent::crearMaya(int *id, const char *textura, vector3 *vp){
    posMaya = maya->addMaya(id,textura,vp);
}