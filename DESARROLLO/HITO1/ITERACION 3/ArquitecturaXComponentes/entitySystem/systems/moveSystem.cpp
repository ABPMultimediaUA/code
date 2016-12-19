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

moveSystem::moveSystem() : system() {
}

moveSystem::moveSystem(const moveSystem& orig) : system(orig) {
}

moveSystem::moveSystem(entityManager* eM) : system(eM) {
}

moveSystem::~moveSystem() {
}

void moveSystem::update(double dt){
    std::vector< std::pair<gameEntity*,componente*> > v = this->getEntityManager()->getAllComponentType(typeid(transformComponent).name());
    for (unsigned short i = 0; i < v.size(); ++i){
        if(*v.at(i).first->getID() == 1){
            handleMoverComponent* hanMov = dynamic_cast<handleMoverComponent*>(this->getEntityManager()->getComponentOffEntity(v.at(i).first, typeid(handleMoverComponent).name()));
            if(hanMov->getLastDirr() != 9){
                velocityComponent* velCom = dynamic_cast<velocityComponent*>(this->getEntityManager()->getComponentOffEntity(v.at(i).first, typeid(velocityComponent).name()));
                transformComponent* traCom = dynamic_cast<transformComponent*>(v.at(i).second);
                std::cout<<"============== JUGADOR =============="<<std::endl;
                std::cout<<"Posicion Jugador: X = "<<traCom->getPosicion().getX()<<" Y = "<<traCom->getPosicion().getY()<<" Z = "<<traCom->getPosicion().getZ()<<" dt: "<<dt<<std::endl;
                switch(hanMov->getLastDirr()){
                    case 0:
                        std::cout<<"Entra 0"<<std::endl;
                        traCom->setPosicion(traCom->getPosicion().getX()+(dt*velCom->getVelocidad().getX()), traCom->getPosicion().getY(), traCom->getPosicion().getZ());
                        break;
                    case 1:
                        std::cout<<"Entra 1"<<std::endl;
                        traCom->setPosicion(traCom->getPosicion().getX()-(dt*velCom->getVelocidad().getX()), traCom->getPosicion().getY(), traCom->getPosicion().getZ());
                        break;
                    case 2:
                        std::cout<<"Entra 2"<<std::endl;
                        traCom->setPosicion(traCom->getPosicion().getX(), traCom->getPosicion().getY(), traCom->getPosicion().getZ()+(dt*velCom->getVelocidad().getY()));
                        break;
                    case 3:
                        std::cout<<"Entra 3"<<std::endl;
                        traCom->setPosicion(traCom->getPosicion().getX(), traCom->getPosicion().getY(), traCom->getPosicion().getZ()-(dt*velCom->getVelocidad().getY()));
                        break;
                    case 4:
                        std::cout<<"Entra 4"<<std::endl;
                        traCom->setPosicion(traCom->getPosicion().getX()+(dt*velCom->getVelocidad().getX()), traCom->getPosicion().getY(), traCom->getPosicion().getZ()+(dt*velCom->getVelocidad().getY()));
                        break;
                    case 5:
                        std::cout<<"Entra 5"<<std::endl;
                        traCom->setPosicion(traCom->getPosicion().getX()+(dt*velCom->getVelocidad().getX()), traCom->getPosicion().getY(), traCom->getPosicion().getZ()-(dt*velCom->getVelocidad().getY()));
                        break;
                    case 6:
                        std::cout<<"Entra 6"<<std::endl;
                        traCom->setPosicion(traCom->getPosicion().getX()-(dt*velCom->getVelocidad().getX()), traCom->getPosicion().getY(), traCom->getPosicion().getZ()-(dt*velCom->getVelocidad().getY()));
                        break;
                    case 7:
                        std::cout<<"Entra 7"<<std::endl;
                        traCom->setPosicion(traCom->getPosicion().getX()-(dt*velCom->getVelocidad().getX()), traCom->getPosicion().getY(), traCom->getPosicion().getZ()+(dt*velCom->getVelocidad().getY()));
                        break;
                }
                renderComponent* renCom = dynamic_cast<renderComponent*>(this->getEntityManager()->getComponentOffEntity(v.at(i).first, typeid(renderComponent).name()));
                std::cout<<"Nueva Posicion Jugador: X = "<<traCom->getPosicion().getX()<<" Y = "<<traCom->getPosicion().getY()<<" Z = "<<traCom->getPosicion().getZ()<<" dt: "<<dt<<std::endl;
                renCom->getMaya()->setPosicionMaya(*v.at(i).first->getID(), traCom->getPosicion());
            }
        }
    }
}