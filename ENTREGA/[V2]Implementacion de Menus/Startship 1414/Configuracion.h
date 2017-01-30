/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   Configuracion.h
 * Author: Sammy Guergachi <sguergachi at gmail.com>
 *
 * Created on 18 de enero de 2017, 18:52
 */

#ifndef CONFIGURACION_H
#define CONFIGURACION_H

#include <irrlicht.h>
#include <iostream>
#include <irrXML.h>

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

class Configuracion {
private:
    SIrrlichtCreationParameters paramIrr;
    bool controlesFlechas;

public:
    Configuracion();
    Configuracion(const Configuracion& orig);
    virtual ~Configuracion();
    void leer(const char *file);
    void escribir(const char *file);
    void editar(s32 width, s32 height, bool fullscreen, const char *file);
    bool getfullscreen();
    SIrrlichtCreationParameters getParametros();
    void setControles(bool x);
    bool getControles();
};


#endif /* CONFIGURACION_H */

