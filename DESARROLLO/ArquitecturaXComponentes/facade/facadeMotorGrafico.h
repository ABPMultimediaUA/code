/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   facadeMotorGrafico.h
 * Author: elcuc_000
 *
 * Created on 3 de diciembre de 2016, 1:47
 */

#ifndef FACADEMOTORGRAFICO_H
#define FACADEMOTORGRAFICO_H

#include <irrlicht.h>
#include <map>
#include "CAppReceiver.h"
class vector3G;
class entityManager;

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

class facadeMotorGrafico {
public:
    facadeMotorGrafico(int , int);
    facadeMotorGrafico(const facadeMotorGrafico& orig);
    virtual ~facadeMotorGrafico();
    void addStaticTextProva();
    void changeActiveCamera(int);
    unsigned int getTime();
    unsigned int getLastTime();
    void setLastTime(unsigned int);
    bool run();
    bool isWindowActive();
    void setFondoScene(int,int,int,int);
    void drawObjectsGraf();
    void drawGUI();
    void endScene();
    void yield();
    void drop();
    void close();
    unsigned long addMaya(unsigned short,const char*, vector3G);
    unsigned short addCamera(vector3G, vector3G);
    void borrarPorIDCamara(int);
    void borrarPorIDMaya(int);
    bool deviceOK();
    void inicarCamaras();
    void inicarMayas();
    void render(int,int,int,int);
    unsigned short teclaPulsada();
    void setFocoandPoscionCamara(int,vector3G,vector3G);
    unsigned short getCamaraActiva();
    void setPosicionMaya(int, vector3G);
    vector3G getMousePosition();
    void setRotationMaya(int,vector3G);
    bool getClickIZQ();
    void accionPulsada(entityManager*);
    vector3G getNormalize2(vector3G);
private:
    IrrlichtDevice *device; //ventana del Juego
    IVideoDriver *driver;
    ISceneManager *smgr; //grafo de la escena(controlador)
    IGUIEnvironment *guienv; //hacer intrerfaces de usuario
    std::map<int,IMeshSceneNode*>* mayas; //Mayas de los Objetos de la scena
    std::map<int,ICameraSceneNode*>* camaras; //Camaras de la scena
    ISceneNode *node; //Para el movimiento y captura del raton
    CAppReceiver teclado;
    unsigned long posMaya;
    unsigned short posCamara;
};

#endif /* FACADEMOTORGRAFICO_H */

