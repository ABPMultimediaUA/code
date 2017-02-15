/*
* To change this license header, choose License Headers in Project Properties.
* To change this template file, choose Tools | Templates
* and open the template in the editor.
*/

/*
* File:   vectorEntity.cpp
* Author: JaumeLloret
*
* Created on 28 de noviembre de 2016, 1:34
*/

#include <iostream>
#include "vectorEntity.h"
#include "gameEntity.h"

vectorEntity::vectorEntity() {
	t = new unsigned short;
	*t = 100;
	u = new unsigned short;
	*u = 0;
	vE = new gameEntity*[*t];
}

vectorEntity::vectorEntity(const vectorEntity& orig) {
	this->t = new unsigned short;
	this->t = orig.t;
	this->u = new unsigned short;
	this->u = orig.u;
	this->vE = new gameEntity*[*t];
	this->vE = orig.vE;
}

vectorEntity::~vectorEntity() {
	for (unsigned short i=0; i<*t; i++) {
		if (vE[i]) {
			delete vE[i];
		}
	}
	delete t;
	delete u;
	delete[] vE;
}

gameEntity* vectorEntity::at(unsigned short p) {
	if (p <= *u) {
		return vE[p];
	}
	else {
		return 0;
	}
}

void vectorEntity::add(gameEntity* gE) {
	if ((*u)<(*t)) {
		vE[(*u)] = gE;
		(*u)++;
	}
	else {
		gameEntity **aux = new gameEntity*[(*t)];
		for (unsigned short i=0; i<*t; i++) {
			aux[i] = vE[i];
			delete vE[i];
		}
		delete[] vE;
		*t += 100;
		vE = new gameEntity*[(*t)];
		for (unsigned short i=0; i<((*t) - 100); i++) {
			vE[i] = aux[i];
			delete aux[i];
		}
		delete[] aux;
		vE[(*u)] = gE;
		(*u)++;
	}
}

bool vectorEntity::remove(unsigned short p) {
	if (p<*u && vE[p]) {
		delete vE[p];
		vE[p] = 0;
		return true;
	}
	else {
		return false;
	}
}

unsigned short vectorEntity::size() {
	return *u;
}

void vectorEntity::printAllEntitysID() {
	std::cout << "===============  Print Entitys ID  ===============" << std::endl;
	for (unsigned short i = 0; i < (*u); i++) {
		if (vE[i]) {
			std::cout << "vE[" << i << "]->getID() = " << vE[i]->getID() << std::endl;
		}
	}
}