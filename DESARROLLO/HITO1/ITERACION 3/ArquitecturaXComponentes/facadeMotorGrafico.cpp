/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   facadeMotorGrafico.cpp
 * Author: elcuc_000
 * 
 * Created on 3 de diciembre de 2016, 1:47
 */

#include <vector>

#include "facadeMotorGrafico.h"
#include "CAppReceiver.h"

facadeMotorGrafico::facadeMotorGrafico(int w, int h, CAppReceiver* teclado) {
    device = createDevice(video::EDT_OPENGL, dimension2d<u32>(w, h), 16, false, false, false, teclado);
    device->setWindowCaption(L"SPACESHIP 1414 [alpha 1]");
    driver = device->getVideoDriver();
    smgr = device->getSceneManager();
    guienv = device->getGUIEnvironment();
    node = smgr->addMeshSceneNode(smgr->addArrowMesh("Arrow", video::SColor(255, 255, 0, 0), video::SColor(255, 0, 255, 0), 16, 16, 2.f, 1.3f, 0.1f, 0.6f));
    node->setMaterialFlag(video::EMF_LIGHTING, false);
    then = device->getTimer()->getTime();
}

facadeMotorGrafico::facadeMotorGrafico(const facadeMotorGrafico& orig) {
    device = orig.device;
    device->setWindowCaption(L"SPACESHIP 1414 [alpha 1]");
    driver = orig.driver;
    smgr = orig.smgr;
    guienv = orig.guienv;
    node = orig.node;
    then = device->getTimer()->getTime();
}

facadeMotorGrafico::~facadeMotorGrafico() {
    delete mayas;
    delete camaras;
    delete node;
    delete then;
    delete guienv;
    delete smgr;
    delete driver;
    delete device;
}

void facadeMotorGrafico::addStaticTextProva(){
    guienv->addStaticText(L"Prova", rect<s32>(10, 10, 260, 22), true); 
}

void facadeMotorGrafico::changeActiveCamera(int c){
    smgr->setActiveCamera(camaras->find(c));
}

unsigned int facadeMotorGrafico::getTime(){
    return device->getTimer()->getTime();
}

unsigned int facadeMotorGrafico::getLastTime(){
    return *then;
}

void facadeMotorGrafico::setLastTime(unsigned int t){
    *then = t;
}

void facadeMotorGrafico::run(){
    device->run();
}

void facadeMotorGrafico::isWindowActive(){
    device->isWindowActive();
}

void facadeMotorGrafico::setFondoScene(int,int,int,int){
    driver->beginScene(true, true, SColor(255, 100, 101, 140));
}

void facadeMotorGrafico::drawObjectsGraf(){
    smgr->drawAll();
}

void facadeMotorGrafico::drawGUI(){
    guienv->drawAll();
}

void facadeMotorGrafico::changeVideoBuffer(){
    driver->endScene();
}

void facadeMotorGrafico::yield(){
    device->yield();
}

void facadeMotorGrafico::drop(){
    device->drop();
}

void facadeMotorGrafico::close(){
    device->closeDevice();
}

void facadeMotorGrafico::addMaya(int *id, char *textura, vector3 p){
    mayas->insert(make_pair(*id,smgr->addCubeSceneNode(10)));
    std::map<int,IMeshSceneNode*>::iterator it = mayas->find(*id);
    it->second->setMaterialFlag(EMF_LIGHTING, false);
    it->second->setPosition(vector3df(p.getX(),p.getY(),p.getZ()));
    it->second->setMaterialTexture(0,driver->getTexture(textura));
}

void facadeMotorGrafico::addCamera(int *id, int f, vector3 v1, vector3 v2){
    camaras->insert(make_pair(*id,smgr->addCameraSceneNode(f,vector3df(v1.getX(),v1.getY(),v1.getZ()),vector3df(v2.getX(),v2.getY(),v2.getZ()))));
}
vector3 facadeMotorGrafico::getCameraFoco(int* id){
    vector3 foco;
    std::map<int,ICameraSceneNode*>::iterator it = mayas->find(*id);
    foco.setXYZ(it->second->getTarget().X,it->second->getTarget().Y,it->second->getTarget().Z);
    return foco;
}