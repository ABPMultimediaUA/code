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



#include <Math.h>
#include "Enemigo.h"
#include "Nodo.h"
#include "../Fisicas/Entity2D.h"
#include "Waypoints.h"
#include "AStar.h"
#include "../Jugador/Bala.h"




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
	mundo = world;
	VD = driver;
    smgr->getGUIEnvironment()->clear();
	//puntoIni.nombre, puntoFin.nombre = "indefinido"; //hecho para que solo se calcule una vez los nodos
	puntoIni = nullptr;
	puntoFin = nullptr;
	dir = -1;


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
	delete(waypoints);
	delete(path);
	/*delete(puntoIni);
	delete(puntoFin);*/
    delete(entity);
}

void Enemigo::Update() {
}

void Enemigo::Mover(int modo) {

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

void Enemigo::quitarVida(float damage) {


}

Entity2D* Enemigo::getEntity()
{
	return entity;
}

float Enemigo::getDamageChoque()
{
	return damageChoque;
}

void Enemigo::setEstado(int num)
{
	estadoActual = num;
}

void Enemigo::setDisparo(bool x)
{
	disparado = x;
}

void Enemigo::aumentarTiempoDisparo(float t)
{
	tiempoDisparo += t;
}

void Enemigo::resetTiempoDisparo()
{
	tiempoDisparo = 0.0f;
}

float Enemigo::getTiempoDisparo()
{
	return tiempoDisparo;
}

bool Enemigo::getDisparado()
{
	return disparado;
}

void Enemigo::disparar(float dt)
{
	tiempoDisparo += dt;
	disparado = true;
	Bala *bullet = new Bala(smgr1, VD, mundo, pos, posJugador, damageBala, 2);
	listaBalas.push_back(bullet);

}

void Enemigo::actualizarLista()
{
	if (!listaBalas.empty()) {
		for (std::list<Bala*>::iterator it = listaBalas.begin(); it != listaBalas.end();) {
			if ((*it) != NULL) {
				if (!(*it)->estaViva()) {

					delete(*it);
					it = listaBalas.erase(it);
				}
				else
					it++;
			}
			else
				it++;
		}

		for (std::list<Bala*>::iterator it = listaBalas.begin(); it != listaBalas.end(); it++) {
			if ((*it) != NULL && (*it)->estaViva() == true) {
				(*it)->moverEnemigoDisparo();
				//(*it)->update();
			}
		}
	}
}

void Enemigo::setPosJugador(float x, float y)
{
	posJugador.X = x;
	posJugador.Y = y;
}
