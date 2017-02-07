/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   TNodo.cpp
 * Author: elcuc_000
 * 
 * Created on 6 de febrero de 2017, 23:40
 */

#include <vector>

#include "TNodo.h"
#include "../entidadesMotorGrafico/TEntidad.h"

TNodo::TNodo() {
}

TNodo::TNodo(const TNodo& orig) {
}

TNodo::~TNodo() {
}

void TNodo::draw() {
    if(entidad){
        entidad->beginDraw();
    }
    for(std::vector<TNodo*>::iterator it = hijos.begin(); it != hijos.end(); ++it){
        it->draw();
    }
    if(entidad){
        entidad->endDraw();
    }
}
