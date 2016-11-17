/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Personaje.cpp
 * Author: User
 * 
 * Created on 16 de noviembre de 2016, 15:41
 */
#include <irrlicht.h>
#include "Personaje.h"

using namespace irr;

using namespace core;
using namespace scene;
using namespace video;
using namespace io;
using namespace gui;

#ifdef _IRR_WINDOWS_
#pragma comment(lib, "Irrlicht.lib")
#pragma comment(linker, "/subsystem:windows /ENTRY:mainCRTStartup")
#endif


Personaje::Personaje(ISceneManager* smgr, IVideoDriver* driver){
    
    IMeshSceneNode *cube = smgr -> addCubeSceneNode(10); //preguntar a Miguel Angel
        if(cube){
            cube -> setMaterialFlag(EMF_LIGHTING, false);
            cube -> setPosition(vector3df(0,0,0));
             cube->setMaterialTexture(0, driver->getTexture("texture/bruce.jpg"));
            //primer parametro del setVertexColors es de la maya que quieres cambiar el color y con su getMesh se consigue
           // smgr -> getMeshManipulator()->setVertexColors(cube->getMesh(), SColor(0, 0, 255, 128));//lus, R, G, B
            
	}
    
    maya = cube;
    
}

Personaje::Personaje(const Personaje& orig){}
Personaje::~Personaje(){}


vector3df Personaje::getPos(){
    return maya->getPosition();
}

void Personaje::setPos(vector3df pos){
    maya->setPosition(pos);
}

