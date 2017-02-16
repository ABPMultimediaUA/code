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
#include "../../facade/facadeMotorGrafico.h"
#include "../framework/entityManager.h"
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

void camaraSystem::update(unsigned int id, facadeMotorGrafico* fMG) {
	transformComponent *posPer = dynamic_cast<transformComponent*>(this->getEntityManager()->getComponentOffEntity(getEntityManager()->getEntity(1), typeid(transformComponent).name()));
	if (posPer->getModificado()) {
		transformComponent *posCam = dynamic_cast<transformComponent*>(this->getEntityManager()->getComponentOffEntity(getEntityManager()->getEntity(id), typeid(transformComponent).name()));
		camaraComponent *cam = dynamic_cast<camaraComponent*>(this->getEntityManager()->getComponentOffEntity(getEntityManager()->getEntity(id), typeid(camaraComponent).name()));
		posCam->setPosicion(posPer->getPosicion().getX(), 70.0f, (posPer->getPosicion().getZ() - 40));
		cam->setFoco(posPer->getPosicion().getX(), posPer->getPosicion().getY(), posPer->getPosicion().getZ());
		fMG->setFocoandPoscionCamara(cam->getPosCamara(), cam->getFoco(), posCam->getPosicion());
		posPer->setModificado(false);
	}
}