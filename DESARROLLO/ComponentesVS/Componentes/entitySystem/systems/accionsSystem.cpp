/*
* To change this license header, choose License Headers in Project Properties.
* To change this template file, choose Tools | Templates
* and open the template in the editor.
*/

/*
* File:   accionsSystem.cpp
* Author: elcuc_000
*
* Created on 23 de diciembre de 2016, 18:17
*/

#include "accionsSystem.h"
#include "../../facade/facadeMotorGrafico.h"

accionsSystem::accionsSystem() : system() {}

accionsSystem::accionsSystem(const accionsSystem& orig) : system(orig) {}

accionsSystem::accionsSystem(entityManager* eM) : system(eM) {}

accionsSystem::~accionsSystem() {
}

void accionsSystem::update(facadeMotorGrafico* fMG) {
	fMG->accionPulsada(getEntityManager());
}


