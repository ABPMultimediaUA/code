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


Escenario::Escenario(ISceneManager* smgr, IVideoDriver* driver) {
     IAnimatedMesh *terrain_model = smgr->addHillPlaneMesh("groundPlane", // Name of the scenenode
                           core::dimension2d<f32>(4.0f, 4.0f), // Tile size
                           core::dimension2d<u32>(20, 20), // Tile count
                           0, // Material
                           0.0f, // Hill height
                           core::dimension2d<f32>(0.0f, 0.0f), // countHills
                           core::dimension2d<f32>(5.0f, 5.0f)); // textureRepeatCount
     
     IAnimatedMesh *pared1 = smgr->addHillPlaneMesh("pared", // Name of the scenenode
                           core::dimension2d<f32>(4.0f, 4.0f), // Tile size
                           core::dimension2d<u32>(20, 10), // Tile count
                           0, // Material
                           0.0f, // Hill height
                           core::dimension2d<f32>(0.0f, 0.0f), // countHills
                           core::dimension2d<f32>(3.0f, 3.0f)); // textureRepeatCount
     
   IAnimatedMeshSceneNode *terrain_node = smgr->addAnimatedMeshSceneNode(terrain_model);
    terrain_node->setMaterialTexture(0, driver->getTexture("texture/suelo.png"));   
   terrain_node->setMaterialFlag(EMF_LIGHTING, false);
   // Insert it into the scene
   terrain_node->setPosition(vector3df(0,-10,0));
   
    IAnimatedMeshSceneNode *lateral_der = smgr->addAnimatedMeshSceneNode(pared1);
       lateral_der->setMaterialTexture(0, driver->getTexture("texture/pared.bmp"));   
        lateral_der->setMaterialFlag(EMF_LIGHTING, false);
      lateral_der->setPosition(vector3df(40,0,0));
      lateral_der->setRotation(vector3df(90,-90,0));
      
       IAnimatedMeshSceneNode *lateral_izq = smgr->addAnimatedMeshSceneNode(pared1);
          lateral_izq->setMaterialTexture(0, driver->getTexture("texture/pared.bmp"));   
        lateral_izq->setMaterialFlag(EMF_LIGHTING, false);
      lateral_izq->setPosition(vector3df(-40,0,0));
      lateral_izq->setRotation(vector3df(90,90,0));
}

Escenario::Escenario(const Escenario& orig) {
}

Escenario::~Escenario() {
}

