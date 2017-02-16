/*
* To change this license header, choose License Headers in Project Properties.
* To change this template file, choose Tools | Templates
* and open the template in the editor.
*/

/*
* File:   handleMoverComponent.cpp
* Author: elcuc_000
*
* Created on 14 de diciembre de 2016, 23:41
*/

#include <typeinfo>
#include "handleMoverComponent.h"

handleMoverComponent::handleMoverComponent() : componente(typeid(handleMoverComponent).name()) {
	lastDirreccion = new short();
	*lastDirreccion = -1;
}

handleMoverComponent::handleMoverComponent(const handleMoverComponent& orig) : componente(typeid(handleMoverComponent).name()) {
	lastDirreccion = orig.lastDirreccion;
}

handleMoverComponent::~handleMoverComponent() {
	delete lastDirreccion;
}

short handleMoverComponent::getLastDirr() {
	return *lastDirreccion;
}

void handleMoverComponent::setLastDirr(short d) {
	*lastDirreccion = d;
}
