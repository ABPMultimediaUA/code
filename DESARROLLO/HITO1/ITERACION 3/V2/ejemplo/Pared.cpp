/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Pared.cpp
 * Author: David
 * 
 * Created on 1 de diciembre de 2016, 19:35
 */

#include "Pared.h"


Pared::Pared(ISceneManager* smgr, IVideoDriver* driver, vector3df posicion, vector3df rotacion) {
    
    IAnimatedMesh *pared1 = smgr->addHillPlaneMesh("pared", // Name of the scenenode
                           core::dimension2d<f32>(4.0f, 4.0f), // Tile size
                           core::dimension2d<u32>(20, 10), // Tile count
                           0, // Material
                           0.0f, // Hill height
                           core::dimension2d<f32>(0.0f, 0.0f), // countHills
                           core::dimension2d<f32>(3.0f, 3.0f)); // textureRepeatCount
    
    IAnimatedMeshSceneNode *wall = smgr->addAnimatedMeshSceneNode(pared1);
       wall->setMaterialTexture(0, driver->getTexture("texture/pared.bmp"));   
        wall->setMaterialFlag(EMF_LIGHTING, false);
      wall->setPosition(posicion);
      wall->setRotation(rotacion);
      
      pared = pared1;
      paredColocada = wall;
      pos = posicion;
      rot = rotacion;
}

Pared::Pared(const Pared& orig) {
}

Pared::~Pared() {
}

vector3df Pared::getPosicion(){
    return pos;
}

vector3df Pared::getRotacion(){
    return rot;
}

void Pared::setPosicion(vector3df newPos){
    pos = newPos;
}

void Pared::setRotacion(vector3df newRot){
    rot = newRot;
}
