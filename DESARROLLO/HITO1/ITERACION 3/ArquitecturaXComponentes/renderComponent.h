/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   renderComponent.h
 * Author: elcuc_000
 *
 * Created on 2 de diciembre de 2016, 2:13
 */

#ifndef RENDERCOMPONENT_H
#define RENDERCOMPONENT_H

#include "componente.h"
#include <irrlicht.h>


#ifdef _IRR_WINDOWS_
#pragma comment(lib, "Irrlicht.lib")
#pragma comment(linker, "/subsystem:windows /ENTRY:mainCRTStartup")
#endif

class renderComponent : public componente {
public:
    renderComponent();
    renderComponent(const renderComponent& orig);
    renderComponent(irr::scene::ISceneManager*, irr::video::IVideoDriver*);
    virtual ~renderComponent();
private:
    irr::scene::IMeshSceneNode *maya; //esto debe canviar a nuestra propia clase;
};

#endif /* RENDERCOMPONENT_H */

