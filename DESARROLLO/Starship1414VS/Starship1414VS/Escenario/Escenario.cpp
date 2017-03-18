/*
* To change this license header, choose License Headers in Project Properties.
* To change this template file, choose Tools | Templates
* and open the template in the editor.
*/

/*
* File:   Escenario.cpp
* Author: Hector
*
* Created on 17 de noviembre de 2016, 20:08
*/

#include <stdlib.h>
#include <time.h>
#include "Escenario.h"
#include "Pared.h"
#include "Puerta.h"
#include "readJson.h"
#include "Terminal.h"
#include "../Juego.h"
#include "../Jugador/Personaje.h"
#include "../Enemigos/CriaAlien.h"
#include "../Enemigos/Waypoints.h"
#include "../Enemigos/AlienBerserker.h"
#include "../Enemigos/Enemigo.h"
#include "Pared.h"
#include "ObjConsumables\Objetos.h"
#include "ObjConsumables\TiposDeMunicion\MunicionEscopeta.h"
#include "ObjConsumables\TiposDeMunicion\MunicionPistola.h"
#include "ObjConsumables\TiposDeMunicion\MunicionSubfusil.h"
#include "../Fisicas/Entity2D.h"


Escenario::Escenario(ISceneManager* smgr, IVideoDriver* driver, b2World *world, Juego* game) {

	SM = smgr;
	VD = driver;
	mundo = world;
	srand(time(NULL));
	entity = new Entity2D(world);
	jue = game;
	pers = new Personaje(smgr, driver, world, game);
}

Escenario::Escenario(const Escenario& orig) {
}

Escenario::~Escenario() {
	delete(entity);
}

void Escenario::setPadres(std::string nombre, double t[], double r[], double s[], std::list<Escenario::ElementoHijo> objetos) {
	ElementoPadre p;
	p.nombre = nombre;
	p.position.x = t[0];
	p.position.y = t[1];
	p.position.z = t[2];
	p.rotation.x = r[0];
	p.rotation.y = r[1];
	p.rotation.z = r[2];
	p.escala.x = s[0];
	p.escala.y = s[1];
	p.escala.z = s[2];
	p.ObjetosEscena = objetos;
	Padres.push_back(p);

}

void Escenario::setHijos(std::string nombre, double t[], double r[], double s[], std::list<Escenario::Elemento> objetos) {
	ElementoHijo p;
	p.nombre = nombre;
	p.position.x = t[0];
	p.position.y = t[1];
	p.position.z = t[2];
	p.rotation.x = r[0];
	p.rotation.y = r[1];
	p.rotation.z = r[2];
	p.escala.x = s[0];
	p.escala.y = s[1];
	p.escala.z = s[2];
	p.ObjetosEscena = objetos;
	Hijos.push_back(p);
}

void Escenario::setSubHijos(std::string nombre, double t[], double r[], double s[]) {
	Elemento p;
	p.nombre = nombre;
	p.position.x = t[0];
	p.position.y = t[1];
	p.position.z = t[2];
	p.rotation.x = r[0];
	p.rotation.y = r[1];
	p.rotation.z = r[2];
	p.escala.x = s[0];
	p.escala.y = s[1];
	p.escala.z = s[2];

	SubHijos.push_back(p);
}

std::list<Escenario::ElementoHijo> Escenario::getHijos() {
	return Hijos;
}

std::list<Escenario::Elemento> Escenario::getSubHijos() {
	return SubHijos;
}

std::list<Pared*> Escenario::getParedes() {

	return paredes;
}

int Escenario::getTam() {
	return tam;
}

void Escenario::muestraEstructura() {
	cout << "/////////////////////////////////////////////////////" << endl;
	for (std::list<ElementoPadre>::iterator I = Padres.begin(); I != Padres.end(); I++) {
		std::cout << "Padre: " << (*I).nombre << std::endl;
		std::cout << "  Posicion: x=" << (*I).position.x << " y= " << (*I).position.y << " z= " << (*I).position.z << std::endl;
		std::cout << "  Rotacion: x=" << (*I).rotation.x << " y= " << (*I).rotation.y << " z= " << (*I).rotation.z << std::endl;
		std::cout << "  Escala: x=" << (*I).escala.x << " y= " << (*I).escala.y << " z= " << (*I).escala.z << std::endl;

		for (std::list<ElementoHijo>::iterator M = (*I).ObjetosEscena.begin(); M != (*I).ObjetosEscena.end(); M++) {
			cout << "..............................................." << endl;
			std::cout << "      Hijo: " << (*M).nombre << std::endl;
			std::cout << "          Posicion: x=" << (*M).position.x << " y= " << (*M).position.y << " z= " << (*M).position.z << std::endl;
			std::cout << "          Rotacion: x=" << (*M).rotation.x << " y= " << (*M).rotation.y << " z= " << (*M).rotation.z << std::endl;
			std::cout << "          Escala: x=" << (*M).escala.x << " y= " << (*M).escala.y << " z= " << (*M).escala.z << std::endl;
			for (std::list<Elemento>::iterator N = (*M).ObjetosEscena.begin(); N != (*M).ObjetosEscena.end(); N++) {
				cout << "*****************************************************" << endl;
				std::cout << "      SubHijo: " << (*N).nombre << std::endl;
				std::cout << "          Posicion: x=" << (*N).position.x << " y= " << (*N).position.y << " z= " << (*N).position.z << std::endl;
				std::cout << "          Rotacion: x=" << (*N).rotation.x << " y= " << (*N).rotation.y << " z= " << (*N).rotation.z << std::endl;
				std::cout << "          Escala: x=" << (*N).escala.x << " y= " << (*N).escala.y << " z= " << (*N).escala.z << std::endl;

				cout << "******************************************************" << endl;
			}
			cout << "..............................................." << endl;
		}

	}

	cout << "/////////////////////////////////////////////////////" << endl;
}

void Escenario::removeListHijos() {
	Hijos.clear();
}

void Escenario::removeListSubHijos() {
	SubHijos.clear();
}

void Escenario::dibujarEscenario() {
	int num = 0;
	Waypoints *puntos = new Waypoints();
	for (std::list<ElementoPadre>::iterator I = Padres.begin(); I != Padres.end(); I++) {

		if ((*I).nombre == "Waypoints") {

			for (std::list<ElementoHijo>::iterator T = (*I).ObjetosEscena.begin(); T != (*I).ObjetosEscena.end(); T++) {

				IMeshSceneNode *objeto = SM->addSphereSceneNode(2.0f, 16, 0, -1,
					vector3df(10 * ((*T).position.x + ((*I).position.x)), 10 * ((*T).position.y + ((*I).position.y)), 10 * ((*T).position.z + (*I).position.z)),
					vector3df((*T).rotation.x + (*I).rotation.x, (*T).rotation.y + (*I).rotation.y, (*T).rotation.z + (*I).rotation.z),
					vector3df((*T).escala.x * (*I).escala.x, (*T).escala.y * (*I).escala.y, (*T).escala.z * (*I).escala.z));
				objeto->getMaterial(0).EmissiveColor.set(20, 200, 80, 80);

				puntos->creaPuntos((*T).nombre, vector3df(10 * ((*T).position.x + ((*I).position.x)), 10 * ((*T).position.y + ((*I).position.y)), 10 * ((*T).position.z + (*I).position.z)));
				//puntos->MuestraPuntos();
				//puntos->creaPesos();
				//puntos->mostrarPesos();
			}
		}

		if((*I).nombre == "FinalPosibles") {

			for (std::list<ElementoHijo>::iterator T = (*I).ObjetosEscena.begin(); T != (*I).ObjetosEscena.end(); T++) {

				IMeshSceneNode *objeto = SM->addCubeSceneNode(10.0f, 0, -1,
					vector3df(10 * ((*T).position.x + ((*I).position.x)), 10 * ((*T).position.y + ((*I).position.y)), 10 * ((*T).position.z + (*I).position.z)),
					vector3df((*T).rotation.x + (*I).rotation.x, (*T).rotation.y + (*I).rotation.y, (*T).rotation.z + (*I).rotation.z),
					vector3df((*T).escala.x * (*I).escala.x, (*T).escala.y * (*I).escala.y, (*T).escala.z * (*I).escala.z));
				objeto->getMaterial(0).EmissiveColor.set(20, 255, 0, 80);

				Terminal *terminal = new Terminal(vector3df(10 * ((*T).position.x + ((*I).position.x)), 10 * ((*T).position.y + ((*I).position.y)), 10 * ((*T).position.z + (*I).position.z)), 
					vector3df((*T).rotation.x + (*I).rotation.x, (*T).rotation.y + (*I).rotation.y, (*T).rotation.z + (*I).rotation.z), 
					vector3df((*T).escala.x * (*I).escala.x, (*T).escala.y * (*I).escala.y, (*T).escala.z * (*I).escala.z), mundo, objeto,this);
				
			}

		}


		for (std::list<ElementoHijo>::iterator M = (*I).ObjetosEscena.begin(); M != (*I).ObjetosEscena.end(); M++) {
			if ((*M).nombre == "Suelo") {
				IMeshSceneNode *objeto = SM->addCubeSceneNode(100.0f, 0, -1,
					vector3df((*M).position.x + (*I).position.x, (*M).position.y + (*I).position.y, (*M).position.z + (*I).position.y),
					vector3df((*M).rotation.x + (*I).rotation.x, (*M).rotation.y + (*I).rotation.y, (*M).rotation.z + (*I).rotation.z),
					vector3df((*M).escala.x * (*I).escala.x, 0, (*M).escala.z * (*I).escala.z));
				objeto->getMaterial(0).EmissiveColor.set(0, 20, 20, 20);
				tam = objeto->getScale().X * objeto->getScale().Z * 100;
			}
			else {
			
				for (std::list<Elemento>::iterator N = (*M).ObjetosEscena.begin(); N != (*M).ObjetosEscena.end(); N++) {
					
					if ((*M).nombre == "Puertas") {
						//puertas
						IMeshSceneNode *objeto = SM->addCubeSceneNode(10.0f, 0, -1,
							vector3df(10 * ((*N).position.x + ((*M).position.x + (*I).position.x)), 10 * ((*N).position.y + ((*M).position.y + (*I).position.y)), 10 * ((*N).position.z + (*M).position.z + (*I).position.z)),
							vector3df((*N).rotation.x + (*M).rotation.x + (*I).rotation.x, (*N).rotation.y + (*M).rotation.y + (*I).rotation.y, (*N).rotation.z + (*M).rotation.z + (*I).rotation.z),
							vector3df(((*N).escala.x * (*M).escala.x * (*I).escala.x), (*N).escala.y * (*M).escala.y * (*I).escala.y, (*N).escala.z * (*M).escala.z * (*I).escala.z));
						objeto->getMaterial(0).EmissiveColor.set(0, 20+num*5, 5*num+60, 50-num);

						Puerta *door = new Puerta(num, vector3df(10 * ((*N).position.x + ((*M).position.x + (*I).position.x)), 10 * ((*N).position.y + ((*M).position.y + (*I).position.y)), 10 * ((*N).position.z + (*M).position.z + (*I).position.z)),
							vector3df((*N).rotation.x + (*M).rotation.x + (*I).rotation.x, (*N).rotation.y + (*M).rotation.y + (*I).rotation.y, (*N).rotation.z + (*M).rotation.z + (*I).rotation.z),
							vector3df(((*N).escala.x * (*M).escala.x * (*I).escala.x), (*N).escala.y * (*M).escala.y * (*I).escala.y, (*N).escala.z * (*M).escala.z * (*I).escala.z),
							objeto);

						door->setFisica(mundo,SM,num);
						puertas.push_back(door);
						num++;
					}

					//                                if((*I).nombre=="Escenario"){
					//                                      IMeshSceneNode *objeto = SM->addCubeSceneNode(10.0f, 0, -1,
					//                                          vector3df(10*((*N).position.x+((*M).position.x+(*I).position.x)),10*((*N).position.y+((*M).position.y+(*I).position.y)),10*((*N).position.z+(*M).position.z+(*I).position.z)),
					//                                          vector3df((*N).rotation.x+(*M).rotation.x+(*I).rotation.x,(*N).rotation.y+(*M).rotation.y+(*I).rotation.y,(*N).rotation.z+(*M).rotation.z+(*I).rotation.z),
					//                                          vector3df(((*N).escala.x*(*M).escala.x*(*I).escala.x),(*N).escala.y*(*M).escala.y*(*I).escala.y,(*N).escala.z*(*M).escala.z*(*I).escala.z));
					//                                         objeto->getMaterial(0).EmissiveColor.set(20,80,80,80);
					//                                         Pared *wall = new Pared(vector3df(10*((*N).position.x+((*M).position.x+(*I).position.x)), 10*((*N).position.y+((*M).position.y+(*I).position.y)), 10*((*N).position.z+(*M).position.z+(*I).position.z)),
					//                                                    vector3df((*N).rotation.x+(*M).rotation.x+(*I).rotation.x,(*N).rotation.y+(*M).rotation.y+(*I).rotation.y,(*N).rotation.z+(*M).rotation.z+(*I).rotation.z),
					//                                                    vector3df(((*N).escala.x*(*M).escala.x*(*I).escala.x),(*N).escala.y*(*M).escala.y*(*I).escala.y,(*N).escala.z*(*M).escala.z*(*I).escala.z));
					//
					//                                         wall->setFisica(mundo);
					//                                }
					else {
						//paredes y objetos

						IMeshSceneNode *objeto = SM->addCubeSceneNode(10.0f, 0, -1,
							vector3df(10 * ((*N).position.x + ((*M).position.x + (*I).position.x)), 10 * ((*N).position.y + ((*M).position.y + (*I).position.y)), 10 * ((*N).position.z + (*M).position.z + (*I).position.z)),
							vector3df((*N).rotation.x + (*M).rotation.x + (*I).rotation.x, (*N).rotation.y + (*M).rotation.y + (*I).rotation.y, (*N).rotation.z + (*M).rotation.z + (*I).rotation.z),
							vector3df(((*N).escala.x * (*M).escala.x * (*I).escala.x), (*N).escala.y * (*M).escala.y * (*I).escala.y, (*N).escala.z * (*M).escala.z * (*I).escala.z));
						objeto->getMaterial(0).EmissiveColor.set(20, 80, 80, 80);
						Pared *wall = new Pared(vector3df(10 * ((*N).position.x + ((*M).position.x + (*I).position.x)), 10 * ((*N).position.y + ((*M).position.y + (*I).position.y)), 10 * ((*N).position.z + (*M).position.z + (*I).position.z)),
							vector3df((*N).rotation.x + (*M).rotation.x + (*I).rotation.x, (*N).rotation.y + (*M).rotation.y + (*I).rotation.y, (*N).rotation.z + (*M).rotation.z + (*I).rotation.z),
							vector3df(((*N).escala.x * (*M).escala.x * (*I).escala.x), (*N).escala.y * (*M).escala.y * (*I).escala.y, (*N).escala.z * (*M).escala.z * (*I).escala.z));

						wall->setFisica(mundo);
						paredes.push_back(wall);
					}
				}
			}

		}


	}
	/*vector3df(100, 5, 0);
	vector3df(100, 5, 20);
	vector3df(100, 5, 40);*/

	//creacion de la municion de prueba que habra que transladar

	IMeshSceneNode *municion = SM->addCubeSceneNode(1.5f);
	municion->setPosition(vector3df(100, 5, 0));
	municion->getMaterial(0).EmissiveColor.set(0, 128, 0, 0);
	MunicionPistola *pistola = new MunicionPistola(municion->getPosition(), municion->getRotation(),
		municion->getScale(), 2, municion, 2, 7);
	pistola->setFisica(mundo);
	
	IMeshSceneNode *municion1 = SM->addCubeSceneNode(1.5f);
	municion1->setPosition(vector3df(100, 5, 20));
	municion1->getMaterial(0).EmissiveColor.set(0, 0, 128, 0);
	MunicionSubfusil *subfusil = new MunicionSubfusil(municion1->getPosition(), municion1->getRotation(),
		municion1->getScale(), 3, municion1, 3, 15);
	subfusil->setFisica(mundo);


	IMeshSceneNode *municion2 = SM->addCubeSceneNode(1.5f);
	municion2->setPosition(vector3df(100, 5, 40));
	municion2->getMaterial(0).EmissiveColor.set(0, 0, 0, 128);
	MunicionEscopeta *escopeta = new MunicionEscopeta(municion2->getPosition(), municion2->getRotation(),
		municion2->getScale(), 4, municion2, 4, 2);
	escopeta->setFisica(mundo);

	objConsumables.push_back(pistola);
	objConsumables.push_back(subfusil);
	objConsumables.push_back(escopeta);

	puntos->setTamDelMapa(tam);
	puntos->creaPesos(entity);
	fabricaDeEnemigos(puntos);

}

void Escenario::fabricaDeEnemigos(Waypoints* puntos) {

	for (int i = 0; i < 1; i++) {

		float x = rand() % 100;
		float z = rand() % 200;
		/*
		if( i % 2 == 0){
		AlienBerserker *alien = new AlienBerserker(smgr,driver, world, vector3df(x,10,z));
		enemigos.push_back(alien);
		}  */

		CriaAlien *ene = new CriaAlien(SM, VD, mundo, vector3df(x, 10, z), this, puntos);

		enemigos.push_back(ene);


	}


}

void Escenario::spawnearEnemigo(ISceneManager* smgr, IVideoDriver* driver, b2World* world) {

	std::cout << "SPAWN ENEMIGO" << std::endl;

	float x = rand() % 230;
	float z = rand() % 230;

	if (enemigos.size() % 2 == 0) {

		if (z > x) {
			z = -z;
		}
		else {
			x = -x;
		}

	}
	else {


		if (z > x) {
			x = -x;
		}
		else {
			z = -z;
		}

	}


	//        Enemigo *ene = new Enemigo(smgr, driver, world, vector3df(x,10,z));
	//        enemigos.push_back(ene);
}

void Escenario::actualizarEstadoPersonaje()
{
	//cambiar el NULL por nullptr
	if (pers!=NULL)
	{
		if (pers->getVivo() == false)
		{		
			delete(pers);
			pers = NULL;
		}
	}
	
}


void Escenario::destroyPared() {

	if (!paredes.empty()) {
		for (std::list<Pared*>::iterator it = paredes.begin(); it != paredes.end();) {
			if ((*it) != NULL) {
				
					delete(*it);
					it = paredes.erase(it);
				
			}
			else
				it++;
		}

	}
}

void Escenario::actualizarEstadoPuerta()
{
	if (!puertas.empty())
	{
		for (std::list<Puerta*>::iterator it = puertas.begin(); it != puertas.end(); it++) {
			if ((*it) != NULL ) {
			
					(*it)->Update();
				
			}
		
		}

	}
}

void Escenario::actualizarObjetosConsumables()
{

	if (!objConsumables.empty()) {
		for (std::list<Objetos*>::iterator it = objConsumables.begin(); it != objConsumables.end();) {
			if ((*it) != NULL) {
				if (!(*it)->getVivo() ) {

					delete(*it);
					it = objConsumables.erase(it);
				}
				else
					it++;
			}
			else
				it++;
		}

	}
}

void Escenario::actualizarListaEnemigos(f32 dt) {

	if (!enemigos.empty()) {
		for (std::list<Enemigo*>::iterator it = enemigos.begin(); it != enemigos.end();) {
			if ((*it) != NULL) {
				if (!(*it)->estaVivo()) {

					delete(*it);
					it = enemigos.erase(it);
				}
				else
					it++;
			}
			else
				it++;
		}

		for (std::list<Enemigo*>::iterator it = enemigos.begin(); it != enemigos.end(); it++) {
			if ((*it) != NULL && (*it)->estaVivo() == true) {

				(*it)->Update(dt);
			}
		}
	}
}

void Escenario::cambiaEstado(std::string mensaje)
{
	 jue->cambioEstado(mensaje);
}

Personaje* Escenario::getPersonaje()
{
	return pers;
}

void Escenario::eleminarEnemigos()
{
	
	if (!enemigos.empty()) {
		for (std::list<Enemigo*>::iterator it = enemigos.begin(); it != enemigos.end();) {
			if ((*it) != NULL) {

				if ((*it)->estaVivo()) {
					(*it)->getEntity()->setLive(false);
				}
				else
					it++;
			}
			else
				it++;
		}
		
	}

	
}