/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Estado.cpp
 * Author: Iván
 * 
 * Created on 29 de noviembre de 2016, 18:26
 */

#include "Estado.h"
#include <iostream>

using namespace std;


Estado::Estado() {
    id=0;
     
}

Estado::Estado(const Estado& orig) {
}

Estado::~Estado() {
}

void Estado::Ejecutar(Personaje *pers, Enemigo *ene){
 //std::cout<<"Hola"<<std::endl;   
}

void Estado::Ejecutar(Juego j){
 
    IrrlichtDevice *device =
            createDevice(video::EDT_OPENGL, dimension2d<u32>(640, 480), 16,
            false, false, false, &teclado);
      
    while(device->run()){
        
        
        //std::cout<<"Hola"<<std::endl; 
        int i=j.actual->id;
        //std::cout<<i <<std::endl;
    if(teclado.isKeyDown(irr::KEY_KEY_O)){
          //std::cout<<j->actual->id <<std::endl;
        j.actual=j.jugando;
      
    }
    }
}

int Estado::getid(){
    return id;
}
        

