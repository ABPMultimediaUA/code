/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Irapunto.cpp
 * Author: Iván
 * 
 * Created on 29 de noviembre de 2016, 20:03
 */

#include "Irapunto.h"

Irapunto::Irapunto() {
    id=3;
}

Irapunto::Irapunto(const Irapunto& orig) {
}

Irapunto::~Irapunto() {
}

void Irapunto::Ejecutar(Personaje *pers, Enemigo *ene){
    vector3df vo=vector3df(60.0f,0.0f,50.0f);
    vector3df ve=ene->getPos();
    if(vo.X>ve.X){
        ene->mover(0,1);//que hacer con dt???
    }
    else {
        ene->mover(1,1);
    }
    
    if(vo.Z>ve.Z){
        ene->mover(2,1);
    }
    else{
        ene->mover(3,1);
    }
    
}

