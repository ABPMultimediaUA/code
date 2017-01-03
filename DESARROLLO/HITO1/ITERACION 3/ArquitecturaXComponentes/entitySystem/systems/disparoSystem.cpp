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
#include "../../entitySystem/framework/gameEntity.h"
#include "../../facade/facadeMotorGrafico.h"
#include "../../facade/facadeColision.h"
#include "../../framework/gameClock.h"
#include "../components/cargadorComponent.h"
#include "../components/balaComponent.h"
#include "../components/transformComponent.h"
#include "../components/velocityComponent.h"
#include "../components/colisionComponent.h"
#include "../components/renderComponent.h"
#include <typeinfo>
#include <vector>

disparoSystem::disparoSystem() : system() {
    disparado = false;
}

disparoSystem::disparoSystem(entityManager* eM) : system(eM) {
    disparado = false;
}

disparoSystem::disparoSystem(const disparoSystem& orig) : system(orig) {
    disparado = orig.disparado;
}

disparoSystem::~disparoSystem() {
}

void disparoSystem::update(facadeColision* fC, facadeMotorGrafico* fMG, gameClock* c){
    if(fMG->getClickIZQ() && !disparado){
        time = c->getTime();
        cargadorComponent* carCo = dynamic_cast<cargadorComponent*>(this->getEntityManager()->getComponentOffEntity(getEntityManager()->getEntity(1),typeid(cargadorComponent).name()));
        if(carCo->getCargador() > carCo->getDisparo()){
            carCo->disparoPP();
            disparado = true;
            createBullet(fC,fMG,c);
        }
    }
    else if((c->getTime()-time)/1000.f > 0.2){
        disparado = false;
    }
    std::vector< std::pair<gameEntity*,componente*> > v = this->getEntityManager()->getAllComponentType(typeid(balaComponent).name());
    if(v.size()>0){
        for(unsigned short i = 0; i < v.size(); i++){
            if(!dynamic_cast<balaComponent*>(v.at(i).second)->getVivo()){
                getEntityManager()->borrarEntity(v.at(i).first,fC,fMG);
            }
        }
    }
}

void disparoSystem::createBullet(facadeColision* fC, facadeMotorGrafico* fMG, gameClock* c){
    unsigned short id = getEntityManager()->addEntityR("Bullet");
    transformComponent* traCo = dynamic_cast<transformComponent*>(this->getEntityManager()->getComponentOffEntity(getEntityManager()->getEntity(1),typeid(transformComponent).name()));
    getEntityManager()->addComponentToEntity(getEntityManager()->getEntity(id), new balaComponent(c->getTime(),fMG->getMousePosition()));
    getEntityManager()->addComponentToEntity(getEntityManager()->getEntity(id), new transformComponent(traCo->getPosicion(), traCo->getRotacion(), vector3G(0, 0, 0)));
    getEntityManager()->addComponentToEntity(getEntityManager()->getEntity(id), new velocityComponent(vector2G(200.0f,200.0f)));
    getEntityManager()->addComponentToEntity(getEntityManager()->getEntity(id), new colisionComponent(fC,traCo->getPosicion(),traCo->getRotacion(),true));
    getEntityManager()->addComponentToEntity(getEntityManager()->getEntity(id), new renderComponent(2, fMG, "resources/texture/materials/bullet.png", traCo->getPosicion()));
}