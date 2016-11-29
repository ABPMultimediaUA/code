/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Alejarse.cpp
 * Author: Iván
 * 
 * Created on 29 de noviembre de 2016, 19:56
 */

#include "Alejarse.h"

Alejarse::Alejarse() {
    id=2;
}

Alejarse::Alejarse(const Alejarse& orig) {
}

Alejarse::~Alejarse() {
}

void Alejarse::Ejecutar(Personaje *pers, Enemigo *ene){
    vector3df vj=pers->getPos();
    vector3df ve=ene->getPos();
    if(vj.X<ve.X){
        ene->mover(0,1);//que hacer con dt???
    }
    else {
        ene->mover(1,1);
    }
    
    if(vj.Z<ve.Z){
        ene->mover(2,1);
    }
    else{
        ene->mover(3,1);
    }
    
}