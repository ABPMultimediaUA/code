/*
* To change this license header, choose License Headers in Project Properties.
* To change this template file, choose Tools | Templates
* and open the template in the editor.
*/

/*
* File:   gameEntity.cpp
* Author: JaumeLloret
*
* Created on 21 de noviembre de 2016, 18:39
*/

#include "gameEntity.h"

gameEntity::gameEntity() {}

gameEntity::gameEntity(const gameEntity& orig) {
	id = orig.id;
	tipo = orig.tipo;
}

gameEntity::gameEntity(int _id, const char* t) {
	id = _id;
	tipo = t;
}

gameEntity::~gameEntity() {}

int gameEntity::getID() {
	return id;
}

const char* gameEntity::getTipo() {
	return tipo;
}