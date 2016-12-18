/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   moveSystem.cpp
 * Author: elcuc_000
 * 
 * Created on 7 de diciembre de 2016, 1:45
 */

#include <typeinfo>

#include "moveSystem.h"
#include "../components/transformComponent.h"
#include "../components/handleMoverComponent.h"
#include "../components/velocityComponent.h"
#include "../components/renderComponent.h"

moveSystem::moveSystem() : system() {
}

moveSystem::moveSystem(const moveSystem& orig) : system(orig) {
}

moveSystem::moveSystem(entityManager* eM) : system(eM) {
}

moveSystem::~moveSystem() {
}

void moveSystem::update(unsigned int dt){
    std::vector< std::pair<gameEntity*,componente*> > v = this->getEntityManager()->getAllComponentType(typeid(transformComponent).name());
    for (unsigned short i = 0; i < v.size(); ++i){
        if(*v.at(i).first->getID() == 1){
            handleMoverComponent* hanMov = dynamic_cast<handleMoverComponent*>(this->getEntityManager()->getComponentOffEntity(v.at(i).first, typeid(handleMoverComponent).name()));
            velocityComponent* velCom = dynamic_cast<velocityComponent*>(this->getEntityManager()->getComponentOffEntity(v.at(i).first, typeid(velocityComponent).name()));
            transformComponent* traCom = dynamic_cast<transformComponent*>(v.at(i).second);
            switch(hanMov->getLastDirr()){
                case 0:
                    traCom->setPosicion(traCom->getPosicion().getX()+(dt*velCom->getVelocidad().getX()), traCom->getPosicion().getY(), traCom->getPosicion().getZ());
                    break;
                case 1:
                    traCom->setPosicion(traCom->getPosicion().getX()-(dt*velCom->getVelocidad().getX()), traCom->getPosicion().getY(), traCom->getPosicion().getZ());
                    break;
                case 2:
                    traCom->setPosicion(traCom->getPosicion().getX(), traCom->getPosicion().getY(), traCom->getPosicion().getZ()+(dt*velCom->getVelocidad().getY()));
                    break;
                case 3:
                    traCom->setPosicion(traCom->getPosicion().getX(), traCom->getPosicion().getY(), traCom->getPosicion().getZ()-(dt*velCom->getVelocidad().getY()));
                    break;
                case 4:
                    traCom->setPosicion(traCom->getPosicion().getX()+(dt*velCom->getVelocidad().getX()), traCom->getPosicion().getY(), traCom->getPosicion().getZ()+(dt*velCom->getVelocidad().getY()));
                    break;
                case 5:
                    traCom->setPosicion(traCom->getPosicion().getX()+(dt*velCom->getVelocidad().getX()), traCom->getPosicion().getY(), traCom->getPosicion().getZ()-(dt*velCom->getVelocidad().getY()));
                    break;
                case 6:
                    traCom->setPosicion(traCom->getPosicion().getX()-(dt*velCom->getVelocidad().getX()), traCom->getPosicion().getY(), traCom->getPosicion().getZ()-(dt*velCom->getVelocidad().getY()));
                    break;
                case 7:
                    traCom->setPosicion(traCom->getPosicion().getX()-(dt*velCom->getVelocidad().getX()), traCom->getPosicion().getY(), traCom->getPosicion().getZ()+(dt*velCom->getVelocidad().getY()));
                    break;
            }
            renderComponent* renCom = dynamic_cast<renderComponent*>(this->getEntityManager()->getComponentOffEntity(v.at(i).first, typeid(renderComponent).name()));
            renCom->getMaya()->setPosicionMaya(*v.at(i).first->getID(), traCom->getPosicion());
        }
    }
}