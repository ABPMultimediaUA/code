/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   LLave.cpp
 * Author: Iván
 * 
 * Created on 7 de enero de 2017, 10:10
 */

#include "LLave.h"

LLave::LLave(ISceneManager* smgr, IVideoDriver* driver, b2World *world, vector3df posicion) {
    
    maya = smgr -> addCubeSceneNode(10); //preguntar a Miguel Angel
    
    if (maya) {
    
        maya -> setPosition(posicion);//vector3df(0, 10, 40)
        maya->getMaterial(0).EmissiveColor.set(0,0,128,20);
        //primer parametro del setVertexColors es de la maya que quieres cambiar el color y con su getMesh se consigue
        // smgr -> getMeshManipulator()->setVertexColors(cube->getMesh(), SColor(0, 0, 255, 128));//lus, R, G, B

    }


    
    pos = maya->getPosition();
    entity = new Entity2D(world, this, pos);
    
}

LLave::LLave(const LLave& orig) {
}

LLave::~LLave() {
    
    std::cout<<"Borro la llave"<<std::endl;
    maya->getParent()->removeChild(maya);
    delete(entity);
    
}

void LLave::Actualizar(){
    entity->setLive(false);
}

Entity2D* LLave::getEntity(){
    return entity;
}