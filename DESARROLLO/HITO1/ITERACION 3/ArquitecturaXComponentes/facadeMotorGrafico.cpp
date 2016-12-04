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

void facadeMotorGrafico::addMaya(int,char*){}

void facadeMotorGrafico::addCamera(int,int,vector3,vector3){}