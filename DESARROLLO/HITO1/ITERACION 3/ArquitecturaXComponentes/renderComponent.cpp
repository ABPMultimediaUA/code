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

using namespace irr;
using namespace core;
using namespace scene;
using namespace video;
using namespace io;
using namespace gui;

renderComponent::renderComponent() : componente() {}

renderComponent::renderComponent(const renderComponent& orig) : componente(orig) {
    maya = orig.maya;
}

renderComponent::~renderComponent() {
    std::cout<<"Borrado Componente render"<<std::endl;
}

renderComponent::renderComponent(ISceneManager* smgr, IVideoDriver* driver) : componente() {
    maya = smgr->addCubeSceneNode(10);
    if(maya){
        maya -> setMaterialFlag(EMF_LIGHTING, false);
        maya -> setPosition(vector3df(0, 0, 0));
        maya->setMaterialTexture(0, driver->getTexture("resources/texture/life/bruce.jpg"));
    }
}