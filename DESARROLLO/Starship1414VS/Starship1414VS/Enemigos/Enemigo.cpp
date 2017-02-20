/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   Enemigo.cpp
 * Author: Iván
 *
 * Created on 29 de noviembre de 2016, 17:52
 */

#include "Enemigo.h"
#include <irrlicht.h>
#include <Math.h>

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

Enemigo::Enemigo(ISceneManager* smgr, IVideoDriver* driver, b2World *world, vector3df posicion, Waypoints* puntos) {
    vida = 100.0f;
    irr::core::stringw wideString(vida);
    GVida = smgr->addTextSceneNode(smgr->getGUIEnvironment()->getBuiltInFont(), wideString.c_str(), video::SColor(255, 255, 0, 0), 0);
    RVida = smgr->addTextSceneNode(smgr->getGUIEnvironment()->getBuiltInFont(), L"Vida: ", video::SColor(255, 255, 0, 0), 0);
    //napis a lo mejor estaria bien que estuviese en el .h de enemigo
    //tambien se tiene que borrar con el destructor
    GVida->setPosition(posicion);
    RVida->setPosition(vector3df(posicion.X - 8, posicion.Y, posicion.Z));
    smgr1 = smgr;
    smgr->getGUIEnvironment()->clear();
	puntoIni.nombre, puntoFin.nombre = "indefinido"; //hecho para que solo se calcule una vez los nodos


}

//Enemigo::Enemigo(const Enemigo& orig) {
//}

Enemigo::~Enemigo() {
    std::cout << "" << std::endl;

    std::cout << "////////////////////////" << std::endl;
    std::cout << "MUERE: " << maya << std::endl;
    maya->getParent()->removeChild(maya);
    GVida->getParent()->removeChild(GVida);
    RVida->getParent()->removeChild(RVida);
    delete(entity);
}

void Enemigo::Update(int estado) {
}

void Enemigo::Mover(int modo, f32 dt) {

}

vector3df Enemigo::getPos() {
    return pos;
}

void Enemigo::setPos(vector3df pos) {
    maya->setPosition(pos);
}

float Enemigo::getVel() {
    return vel;
}

void Enemigo::setVelocidad() {

    if (entity->getSombraE2D() != NULL) {
        entity->getCuerpo2D()->SetLinearVelocity(b2Vec2(0.0f, 0.0f));
        entity->getSombraE2D()->SetLinearVelocity(b2Vec2(0.0f, 0.0f));
    }
}

void Enemigo::Patrullar() {


}

bool Enemigo::estaVivo() {

    if (entity != NULL)
        return entity->getLive();
    else
        return false;

}

float Enemigo::getVida() {
    return vida;
}


