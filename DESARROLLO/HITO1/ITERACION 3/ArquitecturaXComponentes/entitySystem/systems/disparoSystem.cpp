/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   disparoSystem.cpp
 * Author: elcuc_000
 * 
 * Created on 22 de diciembre de 2016, 0:54
 */

#include "disparoSystem.h"
#include "../components/cargadorComponent.h"
#include "../components/balaComponent.h"
#include "../components/transformComponent.h"
#include "../components/velocityComponent.h"
#include "../components/colisionComponent.h"
#include "../components/renderComponent.h"
#include <iostream>
#include <typeinfo>

disparoSystem::disparoSystem() : system() {
    numBalas = 0;
    disparado = false;
}

disparoSystem::disparoSystem(entityManager* eM) : system(eM) {
    numBalas = 0;
    disparado = false;
}

disparoSystem::disparoSystem(const disparoSystem& orig) {
    numBalas = orig.numBalas;
    disparado = orig.disparado;
}

disparoSystem::~disparoSystem() {
}

void disparoSystem::update(facadeColision* fC, facadeMotorGrafico* fMG, gameClock* c){
    if(fMG->getClickIZQ() && !disparado){
        time = c->getTime();
        cargadorComponent* carCo = dynamic_cast<cargadorComponent*>(this->getEntityManager()->getComponentOffEntity(getEntityManager()->getEntity(1),typeid(cargadorComponent).name()));
        if(carCo->getCargador() > numBalas++){
            disparado = true;
            createBullet(fC,fMG);
            std::cout<<"disparar: "<<numBalas<<std::endl;
        }
    }
    else if((c->getTime()-time)/1000.f > 0.2){
        disparado = false;
    }
}

void disparoSystem::createBullet(facadeColision* fC, facadeMotorGrafico* fMG){
    unsigned short id = getEntityManager()->addEntityR("bullet");
    transformComponent* traCo = dynamic_cast<transformComponent*>(this->getEntityManager()->getComponentOffEntity(getEntityManager()->getEntity(1),typeid(transformComponent).name()));
    getEntityManager()->addComponentToEntity(getEntityManager()->getEntity(id), new balaComponent(1.5,fMG->getMousePosition()));
    getEntityManager()->addComponentToEntity(getEntityManager()->getEntity(id), new transformComponent(traCo->getPosicion(), traCo->getRotacion(), vector3(0, 0, 0)));
    getEntityManager()->addComponentToEntity(getEntityManager()->getEntity(id), new velocityComponent(vector2(200.0f,200.0f)));
    getEntityManager()->addComponentToEntity(getEntityManager()->getEntity(id), new colisionComponent(fC,traCo->getPosicion(),traCo->getRotacion(),true));
    getEntityManager()->addComponentToEntity(getEntityManager()->getEntity(id), new renderComponent(2, fMG, "resources/texture/materials/bullet.png", traCo->getPosicion()));
}