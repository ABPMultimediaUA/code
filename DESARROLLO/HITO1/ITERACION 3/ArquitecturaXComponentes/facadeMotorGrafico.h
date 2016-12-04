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

#include "vector3.h"

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
    facadeMotorGrafico(int , int , CAppReceiver*);
    facadeMotorGrafico(const facadeMotorGrafico& orig);
    virtual ~facadeMotorGrafico();
    void addStaticTextProva();
    void changeActiveCamera(int);
    unsigned int getTime();
    unsigned int getLastTime();
    void setLastTime(unsigned int);
    void run();
    void isWindowActive();
    void setFondoScene(int,int,int,int);
    void drawObjectsGraf();
    void drawGUI();
    void changeVideoBuffer();
    void yield();
    void drop();
    void close();
    void addMaya(int,char*);
    void addCamera(int,int,vector3,vector3);
private:
    IrrlichtDevice *device; //ventana del Juego
    IVideoDriver *driver;
    ISceneManager* smgr; //grafo de la escena(controlador)
    IGUIEnvironment* guienv; //hacer intrerfaces de usuario
    map<int,IMeshSceneNode> *mayas; //Mayas de los Objetos de la scena
    map<int,ICameraSceneNode> *camaras; //Camaras de la scena
    ISceneNode *node; //Para el movimiento y captura del raton
    unsigned int *then; //variable para el control temporal
};

#endif /* FACADEMOTORGRAFICO_H */

