/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CriaAlien.cpp
 * Author: Hector
 * 
 * Created on 16 de enero de 2017, 18:00
 */

#include "CriaAlien.h"

CriaAlien::CriaAlien(ISceneManager* smgr, IVideoDriver* driver, b2World *world, vector3df posicion) : Enemigo(smgr, driver, world, posicion){
    maya = smgr -> addCubeSceneNode(5); //preguntar a Miguel Angel
     if (maya) 
     {
        maya -> setPosition(posicion);//vector3df(0, 10, 40)
        maya->getMaterial(0).EmissiveColor.set(0,128,0,20);
     }
    vel = 20.0f;
    pos = maya->getPosition();
    entity = new Entity2D(world, pos, true, this,smgr);
    estadoActual=DESCANSAR;
    raza=CRIA;
}

//CriaAlien::CriaAlien(const CriaAlien& orig) {
//}

CriaAlien::~CriaAlien() {
     
}

void CriaAlien::Update(int estado)
{
    
}

void CriaAlien::Mover(int modo, f32 dt)
{
    
}

void CriaAlien::Patrullar()
{
    
}
