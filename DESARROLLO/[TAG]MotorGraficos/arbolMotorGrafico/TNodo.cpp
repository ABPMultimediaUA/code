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
#include <iostream>
#include "TNodo.h"
#include "../entidadesMotorGrafico/TEntidad.h"

TNodo::TNodo() {
    padre = 0;
    entidad = 0;
}

TNodo::TNodo(const TNodo& orig) {
    padre = orig.padre;
    entidad = orig.entidad;
    hijos = orig.hijos;
}

TNodo::TNodo(TNodo* p){
    padre = p;
    entidad = 0;
}

TNodo::~TNodo() {
    std::cout<<"Deleted TNodo"<<std::endl;
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

int TNodo::addHijo(TNodo* h) {
    hijos.push_back(h);
}

int TNodo::removeHijo(TNodo* e) {
    for (std::vector<TNodo*>::iterator it = hijos.begin() ; it != hijos.end(); ++it){
        if(*(*it) == *e){ hijos.erase(it);}
    }
}

bool TNodo::setEntidad(TEntidad* e) {
    entidad = e;
}

TNodo* TNodo::getPadre() {
    return padre;
}
