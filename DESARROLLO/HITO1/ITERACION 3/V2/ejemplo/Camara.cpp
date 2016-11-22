/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Camara.cpp
 * Author: User
 * 
 * Created on 21 de noviembre de 2016, 17:37
 */


#include "Personaje.h"
#include "Camara.h"

//cuando esten las fisicas hay que hacer una camara con resorte para que sea fluido el movimiento
Camara::Camara(ISceneManager* smgr) {
    
    smgr->addCameraSceneNode(0, vector3df(0,30,-40), vector3df(0,0,0));
    
    camara = smgr->getActiveCamera(); 
    posicion = camara->getPosition();
    foco = camara->getTarget();
    cont = 0;
    vel = 10.f;
    
}

Camara::Camara(const Camara& orig) {
}

Camara::~Camara() {
}

void Camara::actualizarCamara(int modo, f32 dt){

    
       switch(modo){
    
        case 0:
            posicion.X += vel*dt;
            foco.X += vel*dt;
            break;
            
        case 1:
            posicion.X -= vel*dt;
            foco.X -= vel*dt;
            break;
            
        case 2:
            
             posicion.Z += vel*dt;
            foco.Z += vel*dt;

            break;
            
        case 3:
            
             posicion.Z -= vel*dt;
            foco.Z -= vel*dt;

            break;
            
    }
    
    setPos(posicion);
    setFoco(foco);
    
    
}

vector3df Camara::getFoco(){
    return foco;
}

vector3df Camara::getPos(){
    return posicion;
}

void Camara::setFoco(vector3df f){
    foco = f;
    camara->setTarget(f);
}
void Camara::setPos(vector3df pos){
    posicion = pos;
    camara->setPosition(pos);
    
}



