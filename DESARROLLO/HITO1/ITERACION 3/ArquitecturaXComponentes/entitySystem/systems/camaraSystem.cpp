/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   camaraSystem.cpp
 * Author: JaumeLloret
 * 
 * Created on 9 de diciembre de 2016, 16:13
 */

#include <typeinfo>

#include "camaraSystem.h"
#include "../components/camaraComponent.h"
#include "../components/velocityComponent.h"
#include "../components/transformComponent.h"
#include "../components/renderComponent.h"
#include "../components/playerComponent.h"
#include "../framework/gameEntity.h"

camaraSystem::camaraSystem() : system() {
}

camaraSystem::camaraSystem(const camaraSystem& orig) : camaraSystem(orig) {
}

camaraSystem::camaraSystem(entityManager *eM) : system(eM) {
}

camaraSystem::~camaraSystem() {
}

void camaraSystem::update(double dt, unsigned int id){
    playerComponent *pl =  this->getEntityManager()->getComponentOffEntity(getEntityManager()->getEntity(1),typeid(playerComponent).name());
    switch(pl->getLastDirr()){
        case 0:
            this->actualizarCamara(id, 0, dt);
            break;
        case 1:
            this->actualizarCamara(id, 1, dt);
            break;
        case 2:
            this->actualizarCamara(id, 2, dt);
            break;
        case 3:
            this->actualizarCamara(id, 3, dt);
            break;
        case 4:
            this->actualizarCamara(id, 0, dt);
            this->actualizarCamara(id, 2, dt);
            break;
        case 5:
            this->actualizarCamara(id, 0, dt);
            this->actualizarCamara(id, 3, dt);
            break;
        case 6:
            this->actualizarCamara(id, 1, dt);
            this->actualizarCamara(id, 3, dt);
            break;
        case 7:
            this->actualizarCamara(id, 1, dt);
            this->actualizarCamara(id, 2, dt);
            break;
    }
}

void camaraSystem::actualizarCamara(unsigned int ID, char d, double dt){
    camaraComponent *cam = this->getEntityManager()->getComponentOffEntity(getEntityManager()->getEntity(ID),typeid(camaraComponent).name());
    velocityComponent *vel = this->getEntityManager()->getComponentOffEntity(getEntityManager()->getEntity(ID),typeid(velocityComponent).name());
    transformComponent *pos = this->getEntityManager()->getComponentOffEntity(getEntityManager()->getEntity(ID),typeid(transformComponent).name());
    switch(d){
        case 0:
            cam->setFoco((cam->getFocoX()+vel->getVelocidad().getX()*dt),cam->getFocoY(),cam->getFocoZ());
            pos->setPosicion((pos->getPosicion().getX()+vel->getVelocidad().getX()*dt),pos->getPosicion().getY(),pos->getPosicion().getZ());
            break;
        case 1:
            cam->setFoco((cam->getFocoX()-vel->getVelocidad().getX()*dt),cam->getFocoY(),cam->getFocoZ());
            pos->setPosicion((pos->getPosicion().getX()-vel->getVelocidad().getX()*dt),pos->getPosicion().getY(),pos->getPosicion().getZ());
            break;
        case 2:
            cam->setFoco(cam->getFocoX(),cam->getFocoY(),(cam->getFocoZ()+vel->getVelocidad().getX()*dt));
            pos->setPosicion(pos->getPosicion().getX(),pos->getPosicion().getY(),(pos->getPosicion().getZ()+vel->getVelocidad().getX()*dt));
            break;
        case 3:
            cam->setFoco(cam->getFocoX(),cam->getFocoY(),(cam->getFocoZ()-vel->getVelocidad().getX()*dt));
            pos->setPosicion(pos->getPosicion().getX(),pos->getPosicion().getY(),(pos->getPosicion().getZ()-vel->getVelocidad().getX()*dt));
            break;
    }
    renderComponent *re = this->getEntityManager()->getComponentOffEntity(getEntityManager()->getEntity(ID),typeid(renderComponent).name());
    re->getMaya()->setFocoandPoscionCamara(ID,cam->getFoco(),pos->getPosicion());
}