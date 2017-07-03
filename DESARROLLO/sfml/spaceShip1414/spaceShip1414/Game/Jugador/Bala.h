#pragma once
/*
* To change this license header, choose License Headers in Project Properties.
* To change this template file, choose Tools | Templates
* and open the template in the editor.
*/

/*
* File:   Bala.h
* Author: Sammy Guergachi <sguergachi at gmail.com>
*
* Created on 2 de diciembre de 2016, 16:58
*/

#include <iostream>
#include <glm\glm.hpp>

#ifndef BALA_H
#define BALA_H


#ifdef _IRR_WINDOWS_
#pragma comment(lib, "Irrlicht.lib")
#pragma comment(linker, "/subsystem:windows /ENTRY:mainCRTStartup")
#endif
class Mundo;
class Entity2D;

class Bala {
private:
	//ISceneNode *maya;


	glm::vec3 pos;
	glm::vec2 posRaton;
	Entity2D *entity;
	float damage;
	float vel;

public:

	Bala(/*ISceneManager * smgr, IVideoDriver * driver,*/ Mundo * world, glm::vec3 posPers, glm::vec2 mousePosition, float dumug, int tipo, float velocidad);
	Bala(const Bala& orig);
	virtual ~Bala();
	void setPosition(glm::vec3);
	void mover();
	void moverEnemigoDisparo();
	glm::vec3 getPos();
	void setPosRaton();
	bool estaViva();
	glm::vec3 posInicial;
//	bool update();
	float getDamage();
	Entity2D* Bala::getEntity();
};


#endif /* BALA_H */
