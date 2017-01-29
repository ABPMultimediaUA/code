/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Personaje.h
 * Author: User
 *
 * Created on 16 de noviembre de 2016, 15:41
 */

#include <irrlicht.h>
#ifndef PERSONAJE_H
#define PERSONAJE_H


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

class Personaje {
    
private:
  
   

public:
    Personaje ();
    Personaje(const Personaje& orig);
    virtual ~Personaje();
    
};


#endif /* PERSONAJE_H */
