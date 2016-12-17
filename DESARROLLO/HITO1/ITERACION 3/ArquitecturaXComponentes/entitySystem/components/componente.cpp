/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   componente.cpp
 * Author: JaumeLloret
 * 
 * Created on 21 de noviembre de 2016, 19:11
 */

#include "componente.h"

componente::componente() {
    tipo = "Component";
}

componente::componente(const componente& orig) {
    tipo = orig.tipo;
}

componente::componente(const char* t){
    tipo = t;
}

componente::~componente() {
}

void componente::setTipo(const char* t){
    tipo = t;
}

const char* componente::getTipo(){
    return tipo;
}