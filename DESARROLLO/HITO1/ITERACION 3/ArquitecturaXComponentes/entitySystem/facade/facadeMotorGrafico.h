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
#include "../framework/vector3.h"
#include "CAppReceiver.h"

using namespace irr;
using namespace core;
using namespace scene;
using namespace video;
using namespace io;
using namespace gui;
using namespace std;

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
    int* addMaya(int*, const char*, vector3*);
    int* addCamera(int*, vector3*, vector3*);
    vector3 getCameraFoco(int*);
    void borrarPorIDCamara(int);
    void borrarPorIDMaya(int);
    bool deviceOK();
    void inicarCamaras();
    void inicarMayas();
    void render(int,int,int,int);
    unsigned short teclaPulsada();
    void setFocoandPoscionCamara(int,vector3,vector3);
    unsigned short getCamaraActiva();
private:
    IrrlichtDevice *device; //ventana del Juego
    IVideoDriver *driver;
    ISceneManager *smgr; //grafo de la escena(controlador)
    IGUIEnvironment *guienv; //hacer intrerfaces de usuario
    std::map<int,IMeshSceneNode*> *mayas; //Mayas de los Objetos de la scena
    std::map<int,ICameraSceneNode*> *camaras; //Camaras de la scena
    ISceneNode *node; //Para el movimiento y captura del raton
    unsigned int *then; //variable para el control temporal
    CAppReceiver *teclado;
};

#endif /* FACADEMOTORGRAFICO_H */

