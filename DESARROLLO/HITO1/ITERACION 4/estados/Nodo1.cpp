/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Nodo1.cpp
 * Author: Iván
 * 
 * Created on 17 de diciembre de 2016, 13:52
 */

#include "Nodo1.h"
#include "Enemigo.h"

Nodo1::Nodo1() {
    
}

Nodo1::Nodo1(const Nodo1& orig) {
}

Nodo1::~Nodo1() {
}

Nodo::Estado Nodo1::Ejecutar(Enemigo* ene){
     std::cout<<"Este es el nodo 1. Estoy ejecutando Irapunto"<<std::endl;
    vector3df ve=ene->getPos();
     ene->Irapunto();
     vector3df vo=ene->getPos();
     if(ve!=vo){
     e=EXE;
     return EXE;
     }
     else{
         std::cout<<"Este es el nodo 1. He acabado la ejecucion"<<std::endl;
         e=OK;
         return OK;
     }
}