/*
* To change this license header, choose License Headers in Project Properties.
* To change this template file, choose Tools | Templates
* and open the template in the editor.
*/

/*
* File:   camaraComponent.cpp
* Author: elcuc_000
*
* Created on 3 de diciembre de 2016, 1:32
*/

#include "camaraComponent.h"
#include "../../facade/facadeMotorGrafico.h"
#include <iostream>
#include <typeinfo>

camaraComponent::camaraComponent() : componente(typeid(camaraComponent).name()) {}

camaraComponent::camaraComponent(const camaraComponent& orig) : componente(typeid(camaraComponent).name()) {
	foco = orig.foco;
	posCamara = orig.posCamara;
}

camaraComponent::camaraComponent(facadeMotorGrafico *fMG, vector3G vp, vector3G vf) : componente(typeid(camaraComponent).name()) {
	foco.setXYZ(vf.getX(), vf.getY(), vf.getZ());
	posCamara = fMG->addCamera(vp, vf);
}

camaraComponent::~camaraComponent() {
	std::cout << "Borrado el componente Camara" << std::endl;
}

void camaraComponent::setFoco(vector3G v) {
	foco.setXYZ(v.getX(), v.getY(), v.getZ());
}

void camaraComponent::setFoco(float x, float y, float z) {
	foco.setXYZ(x, y, z);
}

vector3G camaraComponent::getFoco() {
	return foco;
}

float camaraComponent::getFocoX() {
	return foco.getX();
}

float camaraComponent::getFocoY() {
	return foco.getY();
}

float camaraComponent::getFocoZ() {
	return foco.getZ();
}

void camaraComponent::crearCamara(facadeMotorGrafico *fMG, vector3G v1, vector3G v2) {
	posCamara = fMG->addCamera(v1, v2);
}

unsigned short camaraComponent::getPosCamara() {
	return posCamara;
}