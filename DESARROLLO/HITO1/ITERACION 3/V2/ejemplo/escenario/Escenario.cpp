/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Escenario.cpp
 * Author: Hector
 * 
 * Created on 17 de noviembre de 2016, 20:08
 */

#include "Escenario.h"
#include "Pared.h"
#include "../readJson.h"

Escenario::Escenario(ISceneManager* smgr, IVideoDriver* driver, b2World *world) {
    
    SM = smgr;
    VD = driver;
    
     IAnimatedMesh *terrain_model = smgr->addHillPlaneMesh("groundPlane", // Name of the scenenode
                           core::dimension2d<f32>(4.0f, 4.0f), // Tile size
                           core::dimension2d<u32>(20, 20), // Tile count
                           0, // Material
                           0.0f, // Hill height
                           core::dimension2d<f32>(0.0f, 0.0f), // countHills
                           core::dimension2d<f32>(5.0f, 5.0f)); // textureRepeatCount
 
     
   IAnimatedMeshSceneNode *terrain_node = smgr->addAnimatedMeshSceneNode(terrain_model);
    terrain_node->setMaterialTexture(0, driver->getTexture("texture/suelo.png"));   
   terrain_node->setMaterialFlag(EMF_LIGHTING, false);
   // Insert it into the scene
   terrain_node->setPosition(vector3df(0,-10,0));
   

   readJson *json = new readJson();
   dibujarPared(json->getParedes(), world);
}

Escenario::Escenario(const Escenario& orig) {
}

Escenario::~Escenario() {
}

void Escenario::dibujarPared(std::list<Pared*> paredes, b2World *world){
     
  
    IAnimatedMesh *pared1 = SM->addHillPlaneMesh("pared", // Name of the scenenode
                           core::dimension2d<f32>(4.0f, 4.0f), // Tile size
                           core::dimension2d<u32>(20, 10), // Tile count
                           0, // Material
                           0.0f, // Hill height
                           core::dimension2d<f32>(0.0f, 0.0f), // countHills
                           core::dimension2d<f32>(3.0f, 3.0f)); // textureRepeatCount
  
    for (std::list<Pared*>::iterator I = paredes.begin(); I != paredes.end(); I++) {
       
    
    IAnimatedMeshSceneNode *wall = SM->addAnimatedMeshSceneNode(pared1);
       wall->setMaterialTexture(0, VD->getTexture("texture/pared.bmp"));   
        wall->setMaterialFlag(EMF_LIGHTING, false);
      wall->setPosition((*I)->getPosicion());
      wall->setRotation((*I)->getRotacion());
      (*I)->setFisica(world);
     
 
    } 
}
