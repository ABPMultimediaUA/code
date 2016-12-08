/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Actu.h
 * Author: Iván
 *
 * Created on 7 de diciembre de 2016, 11:44
 */

#ifndef ACTU_H
#define ACTU_H

#include "CAppReceiver.h"
#include "Personaje.h"
#include "Enemigo.h"
#include "Escenario.h"
#include "Camara.h"
#include "Estado.h"
#include "Perseguir.h"
#include "Alejarse.h"
#include "Irapunto.h" 


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

class Actu : public Estado {
public:
    Actu();
    Actu(const Actu& orig);
    virtual ~Actu();
    void Ejecutar(Juego j);
private:

};

#endif /* ACTU_H */

