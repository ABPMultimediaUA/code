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

class Menu {
private:
    std::vector<IGUIButton*> botonesMenu;
    vector2df tamanyo;
    IGUIEnvironment* interfaz;


public:
    Menu(IGUIEnvironment* guienv);
    Menu(const Menu& orig);
    virtual ~Menu();
    void borrarMenu();
    void dibujarMenu();
    s32 run();
};

#endif /* MENU_H */

