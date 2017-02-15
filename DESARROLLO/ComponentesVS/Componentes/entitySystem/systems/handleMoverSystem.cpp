/*
* To change this license header, choose License Headers in Project Properties.
* To change this template file, choose Tools | Templates
* and open the template in the editor.
*/

/*
* File:   handleMoverSystem.cpp
* Author: elcuc_000
*
* Created on 14 de diciembre de 2016, 23:55
*/

#include <typeinfo>
#include "handleMoverSystem.h"
#include "../../facade/facadeMotorGrafico.h"
#include "../components/handleMoverComponent.h"

handleMoverSystem::handleMoverSystem() : system() {
}

handleMoverSystem::handleMoverSystem(const handleMoverSystem& orig) : system(orig) {
}

handleMoverSystem::handleMoverSystem(entityManager* eM) : system(eM) {
}

handleMoverSystem::~handleMoverSystem() {
}

void handleMoverSystem::update(facadeMotorGrafico *fMG) {
	handleMoverComponent *pl = dynamic_cast<handleMoverComponent*>(this->getEntityManager()->getComponentOffEntity(this->getEntityManager()->getEntity(1), typeid(handleMoverComponent).name()));
	pl->setLastDirr(fMG->teclaPulsada());
}