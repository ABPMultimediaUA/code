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
#include <iostream>
#include "camaraSystem.h"
#include "../framework/gameEntity.h"
#include "../components/camaraComponent.h"
#include "../components/velocityComponent.h"
#include "../components/transformComponent.h"
#include "../components/renderComponent.h"
#include "../components/handleMoverComponent.h"

camaraSystem::camaraSystem() : system() {
}

camaraSystem::camaraSystem(const camaraSystem& orig) : system(orig) {
}

camaraSystem::camaraSystem(entityManager *eM) : system(eM) {
}

camaraSystem::~camaraSystem() {
}

void camaraSystem::update(float dt, unsigned int id){
    handleMoverComponent *pl =  dynamic_cast<handleMoverComponent*>(this->getEntityManager()->getComponentOffEntity(getEntityManager()->getEntity(1),typeid(handleMoverComponent).name()));
    if(pl->getLastDirr() != 9){
        camaraComponent *cam = dynamic_cast<camaraComponent*>(this->getEntityManager()->getComponentOffEntity(getEntityManager()->getEntity(id),typeid(camaraComponent).name()));
        velocityComponent *vel = dynamic_cast<velocityComponent*>(this->getEntityManager()->getComponentOffEntity(getEntityManager()->getEntity(id),typeid(velocityComponent).name()));
        transformComponent *pos = dynamic_cast<transformComponent*>(this->getEntityManager()->getComponentOffEntity(getEntityManager()->getEntity(id),typeid(transformComponent).name()));
        switch(pl->getLastDirr()){
            case 0:
                cam->setFoco((cam->getFocoX()+(vel->getVelocidad().getX()*dt)), cam->getFocoY(), cam->getFocoZ());
                pos->setPosicion((pos->getPosicion().getX()+(vel->getVelocidad().getX()*dt)), pos->getPosicion().getY(), pos->getPosicion().getZ());
                break;
            case 1:
                cam->setFoco((cam->getFocoX()-(vel->getVelocidad().getX()*dt)), cam->getFocoY(), cam->getFocoZ());
                pos->setPosicion((pos->getPosicion().getX()-(vel->getVelocidad().getX()*dt)), pos->getPosicion().getY(), pos->getPosicion().getZ());
                break;
            case 2:
                cam->setFoco(cam->getFocoX(), cam->getFocoY(), (cam->getFocoZ()+(vel->getVelocidad().getX()*dt)));
                pos->setPosicion(pos->getPosicion().getX(),pos->getPosicion().getY(),(pos->getPosicion().getZ()+(vel->getVelocidad().getX()*dt)));
                break;
            case 3:
                cam->setFoco(cam->getFocoX(), cam->getFocoY(), (cam->getFocoZ()-(vel->getVelocidad().getX()*dt)));
                pos->setPosicion(pos->getPosicion().getX(), pos->getPosicion().getY(), (pos->getPosicion().getZ()-(vel->getVelocidad().getX()*dt)));
                break;
            case 4:
                cam->setFoco((cam->getFocoX()+(vel->getVelocidad().getX()*dt)), cam->getFocoY(), (cam->getFocoZ()+(vel->getVelocidad().getX()*dt)));
                pos->setPosicion((pos->getPosicion().getX()+(vel->getVelocidad().getX()*dt)), pos->getPosicion().getY(), (pos->getPosicion().getZ()+(vel->getVelocidad().getX()*dt)));
                break;
            case 5:
                cam->setFoco((cam->getFocoX()+(vel->getVelocidad().getX()*dt)), cam->getFocoY(), (cam->getFocoZ()-(vel->getVelocidad().getX()*dt)));
                pos->setPosicion((pos->getPosicion().getX()+(vel->getVelocidad().getX()*dt)), pos->getPosicion().getY(), (pos->getPosicion().getZ()-(vel->getVelocidad().getX()*dt)));
                break;
            case 6:
                cam->setFoco((cam->getFocoX()-(vel->getVelocidad().getX()*dt)), cam->getFocoY(), (cam->getFocoZ()-(vel->getVelocidad().getX()*dt)));
                pos->setPosicion((pos->getPosicion().getX()-(vel->getVelocidad().getX()*dt)), pos->getPosicion().getY(), (pos->getPosicion().getZ()-(vel->getVelocidad().getX()*dt)));
                break;
            case 7:
                cam->setFoco((cam->getFocoX()-(vel->getVelocidad().getX()*dt)), cam->getFocoY(), (cam->getFocoZ()+(vel->getVelocidad().getX()*dt)));
                pos->setPosicion((pos->getPosicion().getX()-(vel->getVelocidad().getX()*dt)), pos->getPosicion().getY(), (pos->getPosicion().getZ()+(vel->getVelocidad().getX()*dt)));
                break;
        }
        std::cout<<"============== CAMARA =============="<<std::endl;
        std::cout<<"Nueva Posicion Camara: X = "<<pos->getPosicion().getX()<<" Y = "<<pos->getPosicion().getY()<<" Z = "<<pos->getPosicion().getZ()<<" dt: "<<dt<<std::endl;
        std::cout<<"Nueva Foco Camara: X = "<<cam->getFocoX()<<" Y = "<<cam->getFocoY()<<" Z = "<<cam->getFocoZ()<<std::endl;
        cam->getCamara()->setFocoandPoscionCamara(id,cam->getFoco(),pos->getPosicion());
    }
}