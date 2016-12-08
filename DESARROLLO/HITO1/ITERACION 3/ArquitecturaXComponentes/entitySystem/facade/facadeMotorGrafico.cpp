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

#include <iostream>
#include <vector>
#include "facadeMotorGrafico.h"
#include "CAppReceiver.h"

facadeMotorGrafico::facadeMotorGrafico(int w, int h) {
    teclado = new CAppReceiver();
    device = createDevice(video::EDT_OPENGL, dimension2d<u32>(w, h), 16, false, false, false, teclado);
    device->setWindowCaption(L"SPACESHIP 1414 [alpha 1]");
    driver = device->getVideoDriver();
    smgr = device->getSceneManager();
    guienv = device->getGUIEnvironment();
    node = smgr->addMeshSceneNode(smgr->addArrowMesh("Arrow", video::SColor(255, 255, 0, 0), video::SColor(255, 0, 255, 0), 16, 16, 2.f, 1.3f, 0.1f, 0.6f));
    node->setMaterialFlag(video::EMF_LIGHTING, false);
    then = new unsigned int();
    *then = 1 * device->getTimer()->getTime();
}

facadeMotorGrafico::facadeMotorGrafico(const facadeMotorGrafico& orig) {
    device = orig.device;
    device->setWindowCaption(L"SPACESHIP 1414 [alpha 1]");
    driver = orig.driver;
    smgr = orig.smgr;
    guienv = orig.guienv;
    node = orig.node;
    then = reinterpret_cast<unsigned int*>(device->getTimer()->getTime());
    teclado = orig.teclado;
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
    delete teclado;
}

void facadeMotorGrafico::addStaticTextProva(){
    guienv->addStaticText(L"Prova", rect<s32>(10, 10, 260, 22), true); 
}

void facadeMotorGrafico::changeActiveCamera(int c){
    smgr->setActiveCamera(camaras->find(c)->second);
}

unsigned int facadeMotorGrafico::getTime(){
    return 1 * device->getTimer()->getTime();
}

unsigned int facadeMotorGrafico::getLastTime(){
    return 1 * device->getTimer()->getTime();
}

void facadeMotorGrafico::setLastTime(unsigned int t){
    *then = t;
}

bool facadeMotorGrafico::run(){
    if(device->run()){
        return true;
    }
    return false;
}

void facadeMotorGrafico::isWindowActive(){
    device->isWindowActive();
}

void facadeMotorGrafico::setFondoScene(int c1,int c2,int c3,int c4){
    driver->beginScene(true, true, SColor(c1, c2, c3, c4));
}

void facadeMotorGrafico::drawObjectsGraf(){
    smgr->drawAll();
}

void facadeMotorGrafico::drawGUI(){
    guienv->drawAll();
}

void facadeMotorGrafico::endScene(){
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

int* facadeMotorGrafico::addMaya(int *id, const char *textura, vector3 *p){
    mayas->insert(make_pair(*id,smgr->addCubeSceneNode(10)));
    std::map<int,IMeshSceneNode*>::iterator it = mayas->find(*id);
    it->second->setMaterialFlag(EMF_LIGHTING, false);
    it->second->setPosition(vector3df(p->getX(),p->getY(),p->getZ()));
    it->second->setMaterialTexture(0,driver->getTexture(textura));
    return id;
}

int* facadeMotorGrafico::addCamera(int *id, vector3 *v1, vector3 *v2){
    camaras->insert(std::pair<int,ICameraSceneNode*>(*id, smgr->addCameraSceneNode(0,vector3df(v1->getX(),v1->getY(),v1->getZ()),vector3df(v2->getX(),v2->getY(),v2->getZ()))));
    return id;
}
vector3 facadeMotorGrafico::getCameraFoco(int* id){
    vector3 foco;
    std::map<int,ICameraSceneNode*>::iterator it = camaras->find(*id);
    foco.setXYZ(it->second->getTarget().X,it->second->getTarget().Y,it->second->getTarget().Z);
    return foco;
}

void facadeMotorGrafico::borrarPorIDCamara(int id){
    camaras->erase(id);
}

void facadeMotorGrafico::borrarPorIDMaya(int id){
    mayas->erase(id);
}

bool facadeMotorGrafico::deviceOK(){
    if(!device){
        return true;
    }
    return false;
}

void facadeMotorGrafico::inicarCamaras(){
    camaras = new std::map<int,ICameraSceneNode*>();
}

void facadeMotorGrafico::inicarMayas(){
    mayas = new std::map<int,IMeshSceneNode*>();
}