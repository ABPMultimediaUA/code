/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Camara.h
 * Author: User
 *
 * Created on 21 de noviembre de 2016, 17:37
 */
#include <irrlicht.h>
#ifndef CAMARA_H
#define CAMARA_H

using namespace irr;

using namespace core;
using namespace scene;
using namespace video;
using namespace io;
using namespace gui;

class Camara {
public:
    Camara(ISceneManager* smgr, IVideoDriver* driver);
    Camara(const Camara& orig);
    virtual ~Camara();
    void actualizarCamara(vector3df posPersonaje);
    vector3df getPos();
    vector3df getFoco();
    void setPos(vector3df pos);
    void setFoco(vector3df foco);
    
private:
    
    vector3df pos;
    vector3df foco;

};

#endif /* CAMARA_H */

