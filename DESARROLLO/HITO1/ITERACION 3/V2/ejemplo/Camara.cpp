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
#include <irrlicht.h>
#include "Personaje.h"
#include "Camara.h"

using namespace irr;

using namespace core;
using namespace scene;
using namespace video;
using namespace io;
using namespace gui;


Camara::Camara(ISceneManager* smgr, IVideoDriver* driver) {
    
    smgr->addCameraSceneNode(0, vector3df(0,30,-40), vector3df(0,5,0));
    pos = smgr->getActiveCamera()->getPosition();
    foco = smgr->getActiveCamera()->getTarget();
      
}

Camara::Camara(const Camara& orig) {
}

Camara::~Camara() {
}

Camara::actualizarCamara(vector3df posPersonaje){
}

Camara::getFoco(){
    return foco;
}

Camara::getPos(){
    return pos;
}

Camara::setFoco(vector3df foco){
    foco = foco;
}

Camara::setPos(vector3df pos){
    pos = foco;
}



