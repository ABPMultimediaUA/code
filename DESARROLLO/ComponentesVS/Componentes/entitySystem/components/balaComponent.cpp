/*
* To change this license header, choose License Headers in Project Properties.
* To change this template file, choose Tools | Templates
* and open the template in the editor.
*/

/*
* File:   balaComponent.cpp
* Author: elcuc_000
*
* Created on 22 de diciembre de 2016, 1:01
*/

#include "balaComponent.h"
#include "../../framework/vector3G.h"
#include "../../framework/vector2G.h"
#include <typeinfo>

balaComponent::balaComponent() : componente(typeid(balaComponent).name()) {
	tiempoDisparo = 10.f;
	vivo = true;
}

balaComponent::balaComponent(unsigned long t, vector3G p) : componente(typeid(balaComponent).name()) {
	tiempoDisparo = t;
	posFinal.setXYZ(p.getX(), p.getY(), p.getZ());
	vivo = true;
}

balaComponent::balaComponent(const balaComponent& orig) : componente(typeid(balaComponent).name()) {
	tiempoDisparo = orig.tiempoDisparo;
	posFinal = orig.posFinal;
	vivo = orig.vivo;
}

balaComponent::~balaComponent() {
}

unsigned long balaComponent::getTiempoDisparo() {
	return tiempoDisparo;
}

bool balaComponent::getVivo() {
	return vivo;
}

vector3G balaComponent::getPosFinal() {
	return posFinal;
}

void balaComponent::setTiempoDisparo(unsigned long t) {
	tiempoDisparo = t;
}

void balaComponent::setPosFinal(vector3G p) {
	posFinal.setXYZ(p.getX(), p.getY(), p.getZ());
}

void balaComponent::setVivo(bool l) {
	vivo = l;
}