/*
* To change this license header, choose License Headers in Project Properties.
* To change this template file, choose Tools | Templates
* and open the template in the editor.
*/

/*
* File:   velocityComponent.cpp
* Author: elcuc_000
*
* Created on 2 de diciembre de 2016, 4:01
*/

#include "velocityComponent.h"
#include <iostream>
#include <typeinfo>

velocityComponent::velocityComponent() : componente(typeid(velocityComponent).name()) {
	velocidad.setXY(0.0f, 0.0f);
}

velocityComponent::velocityComponent(const velocityComponent& orig) : componente(typeid(velocityComponent).name()) {
	velocidad = orig.velocidad;
}

velocityComponent::velocityComponent(vector2G v) : componente(typeid(velocityComponent).name()) {
	velocidad.setXY(v.getX(), v.getY());
}

velocityComponent::~velocityComponent() {
	std::cout << "Borrado Componente velocidad" << std::endl;
}

void velocityComponent::setVelocidad(float x, float y) {
	velocidad.setXY(x, y);
}

void velocityComponent::setVelocidad(vector2G v) {
	velocidad.setXY(v.getX(), v.getY());
}

vector2G velocityComponent::getVelocidad() {
	return velocidad;
}