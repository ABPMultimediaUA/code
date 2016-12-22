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
#include <iostream>

#include "moveSystem.h"
#include "../components/transformComponent.h"
#include "../components/handleMoverComponent.h"
#include "../components/velocityComponent.h"
#include "../components/renderComponent.h"
#include "../../facade/facadeColision.h"
#include "../components/colisionComponent.h"

moveSystem::moveSystem() : system() {
}

moveSystem::moveSystem(const moveSystem& orig) : system(orig) {
}

moveSystem::moveSystem(entityManager* eM) : system(eM) {
}

moveSystem::~moveSystem() {
}

void moveSystem::update(facadeColision* fC, facadeMotorGrafico* fMG){
    std::vector< std::pair<gameEntity*,componente*> > v = this->getEntityManager()->getAllComponentType(typeid(transformComponent).name());
    for (unsigned short i = 0; i < v.size(); ++i){
        if(v.at(i).first->getID() == 1){
            handleMoverComponent* hanMov = dynamic_cast<handleMoverComponent*>(this->getEntityManager()->getComponentOffEntity(v.at(i).first, typeid(handleMoverComponent).name()));
            colisionComponent* colCom = dynamic_cast<colisionComponent*>(this->getEntityManager()->getComponentOffEntity(v.at(i).first, typeid(colisionComponent).name()));
            if(hanMov->getLastDirr() != 9){
                velocityComponent* velCom = dynamic_cast<velocityComponent*>(this->getEntityManager()->getComponentOffEntity(v.at(i).first, typeid(velocityComponent).name()));
                transformComponent* traCom = dynamic_cast<transformComponent*>(v.at(i).second);
                vector3 vec;
                switch(hanMov->getLastDirr()){
                    case 0:
                        vec = fC->moveEntity2D0(colCom->getPosCol(),velCom->getVelocidad());
                        traCom->setPosicion(vec.getX(),vec.getY(),vec.getZ());
                        break;
                    case 1:
                        vec = fC->moveEntity2D1(colCom->getPosCol(),velCom->getVelocidad());
                        traCom->setPosicion(vec.getX(),vec.getY(),vec.getZ());
                        break;
                    case 2:
                        vec = fC->moveEntity2D2(colCom->getPosCol(),velCom->getVelocidad());
                        traCom->setPosicion(vec.getX(),vec.getY(),vec.getZ());
                        break;
                    case 3:
                        vec = fC->moveEntity2D3(colCom->getPosCol(),velCom->getVelocidad());
                        traCom->setPosicion(vec.getX(),vec.getY(),vec.getZ());
                        break;
                    case 4:
                        vec = fC->moveEntity2D4(colCom->getPosCol(),velCom->getVelocidad());
                        traCom->setPosicion(vec.getX(),vec.getY(),vec.getZ());
                        break;
                    case 5:
                        vec = fC->moveEntity2D5(colCom->getPosCol(),velCom->getVelocidad());
                        traCom->setPosicion(vec.getX(),vec.getY(),vec.getZ());
                        break;
                    case 6:
                        vec = fC->moveEntity2D6(colCom->getPosCol(),velCom->getVelocidad());
                        traCom->setPosicion(vec.getX(),vec.getY(),vec.getZ());
                        break;
                    case 7:
                        vec = fC->moveEntity2D7(colCom->getPosCol(),velCom->getVelocidad());
                        traCom->setPosicion(vec.getX(),vec.getY(),vec.getZ());
                        break;
                }
                renderComponent* renCom = dynamic_cast<renderComponent*>(this->getEntityManager()->getComponentOffEntity(v.at(i).first, typeid(renderComponent).name()));
                fMG->setPosicionMaya(renCom->getPosMaya(), traCom->getPosicion());
                traCom->setModificado(true);
            }
            else{
                fC->setEntity2DVelocity(colCom->getPosCol(), vector2(0.0f, 0.0f));
            }
        }
    }
}