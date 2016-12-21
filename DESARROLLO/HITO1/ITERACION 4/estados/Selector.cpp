/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Selector.cpp
 * Author: Iván
 * 
 * Created on 18 de diciembre de 2016, 19:28
 */

#include "Selector.h"

Selector::Selector() {
}

Selector::Selector(const Selector& orig) {
}

Selector::~Selector() {
}

bool Selector::Ejecutar(){
    bool result;
    
     std::cout<<"Entro en bucle Selector"<<std::endl;
    for(std::vector<Nodo*>::iterator it=this->hijos.begin();it!=this->hijos.end();it++) {
        result=(*it)->Ejecutar();
        
        if(result){
            return result;//verdadero
        }
    }
    
    return result;//falso
}

void Selector::Anyadir(Nodo* n){
    hijos.push_back(n);
}