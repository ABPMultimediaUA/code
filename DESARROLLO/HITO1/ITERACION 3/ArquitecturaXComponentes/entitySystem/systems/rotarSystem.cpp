/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   rotarSystem.cpp
 * Author: elcuc_000
 * 
 * Created on 19 de diciembre de 2016, 2:24
 */

#include <typeinfo>
#include <math.h>

#include "rotarSystem.h"
#include "../components/transformComponent.h"
#include "../components/renderComponent.h"

rotarSystem::rotarSystem() : system() {
}

rotarSystem::rotarSystem(const rotarSystem& orig) : system(orig) {
}

rotarSystem::rotarSystem(entityManager* eM) : system(eM) {
}

rotarSystem::~rotarSystem() {
}

void rotarSystem::update(facadeMotorGrafico* fMG){
    transformComponent* tr = dynamic_cast<transformComponent*>(getEntityManager()->getComponentOffEntity(getEntityManager()->getEntity(1),typeid(transformComponent).name()));
    renderComponent* re = dynamic_cast<renderComponent*>(getEntityManager()->getComponentOffEntity(getEntityManager()->getEntity(1),typeid(renderComponent).name()));
    vector3 mP = fMG->getMousePosition();
    float angulo((atan2f((mP.getX() - tr->getPosicion().getX()), (mP.getY() - tr->getPosicion().getZ()))*180)/3.14);
    tr->setRotacion(0, (angulo + 90), 0);
    fMG->setRotationMaya(re->getPosMaya(),tr->getRotacion());
}
