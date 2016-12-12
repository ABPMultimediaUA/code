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

gameEntity::gameEntity() {
    this->id = new int();
}

gameEntity::gameEntity(const gameEntity& orig) {
    this->id = new int();
    this->id = orig.id;
}

gameEntity::gameEntity(int _id){
    id = new int();
    *id = _id;
}

gameEntity::~gameEntity() {
    delete this->id;
}

int* gameEntity::getID(){
    return this->id;
}