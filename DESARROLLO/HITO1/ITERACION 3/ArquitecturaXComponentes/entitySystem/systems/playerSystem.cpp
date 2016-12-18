/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   playerSystem.cpp
 * Author: elcuc_000
 * 
 * Created on 7 de diciembre de 2016, 2:10
 */

#include "playerSystem.h"

playerSystem::playerSystem() : system() {
}

playerSystem::playerSystem(const playerSystem& orig) : system(orig) {
}

playerSystem::playerSystem(entityManager *eM) : system(eM) {
}

playerSystem::~playerSystem() {
}

void playerSystem::update(unsigned int dt){

}