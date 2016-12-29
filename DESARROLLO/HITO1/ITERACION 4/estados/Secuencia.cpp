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


Nodo::Estado Secuencia::Ejecutar(Enemigo* ene){
    Estado result;
    
    if(e==EXE){
        std::cout<<"Un nodo hijo estaba ejecutando algo. Voy a ver si ha terminado..."<<std::endl;
        for(std::vector<Nodo*>::iterator it=this->hijos.begin();it!=this->hijos.end();it++) {
        result=(*it)->GetEstado();
        if(result==EXE){
            result=(*it)->Ejecutar(ene);
            if(result==EXE){
                std::cout<<"Sigue ejecutando. Espero"<<std::endl;
                return result;
            }
            else{
                std::cout<<"Ya ha terminado"<<std::endl;
                e=result;
                return result;
            }
        }
        
    }
    }
    
     std::cout<<"Entro en bucle Secuencia"<<std::endl;
    for(std::vector<Nodo*>::iterator it=this->hijos.begin();it!=this->hijos.end();it++) {
        result=(*it)->Ejecutar(ene);
        
        if(result==NO){
            return result;//falso
        }
        
        if(result==EXE){
            e=EXE;
            std::cout<<"Un nodo hijo está ejecutando algo"<<std::endl;
            return result;//Ejecutando
        }
    }
    
    return result;//verdadero

}

void Secuencia::Anyadir (Nodo* n){
    hijos.push_back(n);
}