/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Objeto.cpp
 * Author: Iván
 * 
 * Created on 17 de enero de 2017, 12:44
 */

#include "Objeto.h"

Objeto::Objeto() {
    id=1;
}

Objeto::Objeto(const Objeto& orig) {
}

Objeto::~Objeto() {
}

Entity2D* Objeto::getEntity(){
    return entity;
}

void Objeto::Actualizar(){
    entity->setLive(false);//...
}