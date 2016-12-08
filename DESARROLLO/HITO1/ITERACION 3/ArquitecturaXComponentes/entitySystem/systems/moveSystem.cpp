/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   moveSystem.cpp
 * Author: elcuc_000
 * 
 * Created on 7 de diciembre de 2016, 1:45
 */

#include "moveSystem.h"

moveSystem::moveSystem() : system() {
}

moveSystem::moveSystem(const moveSystem& orig) : system(orig) {
}

moveSystem::moveSystem(entityManager* eM) : system(eM) {
}

moveSystem::~moveSystem() {
}

void moveSystem::update(float dt){}