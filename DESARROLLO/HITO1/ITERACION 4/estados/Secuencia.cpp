/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Secuencia.cpp
 * Author: Iván
 * 
 * Created on 18 de diciembre de 2016, 19:19
 */

#include "Secuencia.h"

Secuencia::Secuencia() {
}

Secuencia::Secuencia(const Secuencia& orig) {
}

Secuencia::~Secuencia() {
}


bool Secuencia::Ejecutar(){
    bool result;
    
     std::cout<<"Entro en bucle Secuencia"<<std::endl;
    for(std::list<Nodo*>::iterator it=this->hijos.begin();it!=this->hijos.end();it++) {
        result=(*it)->Ejecutar();
        
        if(!result){
            return result;//falso
        }
    }
    
    return result;//verdadero
}

void Secuencia::Anyadir(Nodo* n){
    hijos.push_front(n);
}