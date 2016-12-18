/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Nodo2.cpp
 * Author: Iván
 * 
 * Created on 17 de diciembre de 2016, 13:55
 */

#include "Nodo2.h"

Nodo2::Nodo2() {
    id=2;
}

Nodo2::Nodo2(const Nodo2& orig) {
}

Nodo2::~Nodo2() {
}

bool Nodo2::Ejecutar(){
     //std::cout<<"El nodo funciona."<<std::endl;
    bool result=false;
    if(hijos.empty()){
        std::cout<<"No hay hijos en Nodo2"<<std::endl;
        return result;
    }
    else{
    for(std::list<Nodo*>::iterator it=this->hijos.begin();it!=this->hijos.end();it++) {
        result=(*it)->Ejecutar();
    }
    }
    return result;
}