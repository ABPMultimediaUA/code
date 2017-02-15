/*
* To change this license header, choose License Headers in Project Properties.
* To change this template file, choose Tools | Templates
* and open the template in the editor.
*/

/*
* File:   AlienBerserker.cpp
* Author: David
*
* Created on 18 de enero de 2017, 16:50
*/

#include "AlienBerserker.h"

AlienBerserker::AlienBerserker(ISceneManager* smgr, IVideoDriver* driver, b2World *world, vector3df posicion) : Enemigo(smgr, driver, world, posicion)
{

	maya = smgr->addCubeSceneNode(10); //preguntar a Miguel Angel
	if (maya)
	{
		maya->setPosition(posicion);//vector3df(0, 10, 40)
		maya->getMaterial(0).EmissiveColor.set(0, 0, 230, 20);
	}

	vel = 20.0f;
	pos = maya->getPosition();
	entity = new Entity2D(world, pos, true, this, smgr);
	estadoActual = DESCANSAR;
	raza = BERSERKER;
	blindaje = 5.0f;

}

//AlienBerserker::AlienBerserker(const AlienBerserker& orig) {
//}

AlienBerserker::~AlienBerserker() {
}

void AlienBerserker::Update(int estado)
{
	switch (estado) {

	case 0: //descansar
		estadoActual = estado;

		maya->getMaterial(0).EmissiveColor.set(0, 0, 200, 150);
		break;

	case 1: //patrullar
		estadoActual = estado;
		maya->getMaterial(0).EmissiveColor.set(0, 125, 0, 200);
		break;

	case 2: //atacar
		estadoActual = estado;
		maya->getMaterial(0).EmissiveColor.set(0, 255, 175, 0);
		break;

	}
}

void AlienBerserker::Mover(int modo, f32 dt)
{

}

void AlienBerserker::Patrullar()
{

}

void AlienBerserker::quitarVida(float damage) {

	std::cout << "BERSERKER!" << std::endl;

	vida = vida - (damage - blindaje);
	irr::core::stringw wideString(vida);
	GVida->setText(wideString.c_str());

	std::cout << vida << std::endl;
}

