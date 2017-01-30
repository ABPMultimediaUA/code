/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   Menu.h
 * Author: Sammy Guergachi <sguergachi at gmail.com>
 *
 * Created on 29 de diciembre de 2016, 20:12
 */




#ifndef MENU_H
#define MENU_H

#include <irrlicht.h>
#include <iostream>
#include <vector>
#include <string>
#include "../EstadoGeneral.h"
#include "../intro.h"
#include "../Configuracion.h"

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

class Menu : public EstadoGeneral {
private:
    std::vector<IGUIButton*> botonesMenu;
    std::vector<IGUIButton*> botonesMenuOpciones;
    std::vector<IGUIButton*> botonesMenuControles;
    IGUIStaticText *texto;
    IGUIImage* img;
    IGUIImage* img2;

    IGUICheckBox* fullscreen;
    IGUIEnvironment* interfaz;
    IGUIComboBox * dimensiones;
    int estado;
    Configuracion *c;
    SIrrlichtCreationParameters parametros;

public:
    Menu(std::string name, Configuracion* config);
    Menu(const Menu& orig);
    virtual ~Menu();
    void borrarMenu();
    void dibujarMenu();
    s32 run();
    void StarUP(IrrlichtDevice* iDevice);
    void Dentro(void);
    void Fuera(void);
    bool OnEvent(const SEvent &event);
    void render(IrrlichtDevice* iDevice);

    void dibujarMenuOpciones();
    void dibujarMenuOpciones2();
    void borrarMenuOpciones();

    void dibujarControles();
    void dibujarImagenesControles();
    void borrarMenuControles();

};

#endif /* MENU_H */

