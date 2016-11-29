/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Perseguir.cpp
 * Author: Iván
 * 
 * Created on 29 de noviembre de 2016, 18:34
 */

#include "Perseguir.h"
#include "Personaje.h"
#include "Enemigo.h"
#include "Estado.h"
#include <Math.h>
#include <irrlicht.h>
#include <iostream>
#include <Box2D.h>

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

Perseguir::Perseguir() {
    id=1;
}

Perseguir::Perseguir(const Perseguir& orig) {
}

Perseguir::~Perseguir() {
}

void Perseguir::Ejecutar(Personaje *pers, Enemigo *ene){
    vector3df vj=pers->getPos();
    vector3df ve=ene->getPos();
    if(vj.X>ve.X){
        ene->mover(0,1);//que hacer con dt???
    }
    else {
        ene->mover(1,1);
    }
    
    if(vj.Z>ve.Z){
        ene->mover(2,1);
    }
    else{
        ene->mover(3,1);
    }
    
}

