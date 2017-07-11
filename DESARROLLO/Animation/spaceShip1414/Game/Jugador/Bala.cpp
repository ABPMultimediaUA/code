/*
* To change this license header, choose License Headers in Project Properties.
* To change this template file, choose Tools | Templates
* and open the template in the editor.
*/

#include "Bala.h"
#include <Math.h>
#include "../Fisicas/Entity2D.h"
#include "../Fisicas/Mundo.h"

#ifdef _IRR_WINDOWS_
#pragma comment(lib, "Irrlicht.lib")
#pragma comment(linker, "/subsystem:windows /ENTRY:mainCRTStartup")
#endif

Bala::Bala(/*ISceneManager* smgr, IVideoDriver* driver, */ Mundo *world, glm::vec3 posPers, glm::vec2 mousePosition, float dumug, int tipo, float velocidad) {

	//maya = smgr->addSphereSceneNode(2);

	//if (maya) {


	//	maya->setPosition(posPers);
	//	// maya->setMaterialTexture(0, driver->getTexture("texture/bruce.jpg"));
	//	//primer parametro del setVertexColors es de la maya que quieres cambiar el color y con su getMesh se consigue
	//	maya->getMaterial(0).EmissiveColor.set(0, 255, 140, 0);
	//}


	vel = velocidad;
	//pos = maya->getPosition();




	posRaton = mousePosition;

	posInicial = posPers;

	damage = dumug;

	if (tipo == 1) {
		entity = new Entity2D(world->getWorldBox2D(), pos, glm::vec3(0,0,0), true, this, tipo);
	}
	else {
		//maya->getMaterial(0).EmissiveColor.set(0, 0, 140, 255);
		entity = new Entity2D(world->getWorldBox2D(), pos, glm::vec3(0, 0, 0), true, this, tipo);

	}

}

Bala::Bala(const Bala& orig) {
}

Bala::~Bala() {
	std::cout << "MUERO BALA" << std::endl;

	//maya->getParent()->removeChild(maya);
	delete(entity);
}

void Bala::setPosition(glm::vec3 v) {
	//maya->setPosition(v);
}

void Bala::mover() {


	if (entity != NULL) {

		glm::vec2 direction(posRaton.x - 683, posRaton.y - 384); //pasar tamanyo pantalla por parametro
		direction = glm::normalize(direction);

		float v1 = direction.x * vel;
		float v2 = -direction.y * vel;

		//float x = entity->getCuerpo2D()->GetPosition().x + v1;
		//float y = entity->getCuerpo2D()->GetPosition().y + v2;
		entity->getCuerpo2D()->SetLinearVelocity(b2Vec2(v1, v2));

		//maya->setPosition(vector3df(entity->getCuerpo2D()->GetPosition().x, 10, entity->getCuerpo2D()->GetPosition().y));
		// maya->setPosition(vector3df(x, 10, y));

		//pos = maya->getPosition();

	}
}


void Bala::moverEnemigoDisparo() {

	if (entity != NULL) {
		//posraton en este metodo es la posicion del jugador

		glm::vec2 direction(posRaton.x - posInicial.x, posRaton.y - posInicial.z); //pasar tamanyo pantalla por parametro
		direction = glm::normalize(direction);


		float v1 = direction.x * vel;
		float v2 = direction.y * vel;

		entity->getCuerpo2D()->SetLinearVelocity(b2Vec2(v1, v2));

		//maya->setPosition(vector3df(entity->getCuerpo2D()->GetPosition().x, 10, entity->getCuerpo2D()->GetPosition().y));
		// maya->setPosition(vector3df(x, 10, y));

		//pos = maya->getPosition();

	}
}

glm::vec3 Bala::getPos() {

	return pos;
}

void Bala::setPosRaton() {

}

bool Bala::estaViva() {
	if (entity != NULL)
		return entity->getLive();
	else
		return false;
	//    return life;
}

//bool Bala::update() {

	//float hola = pos.getDistanceFrom(posInicial);
	////std::cout << "Distancia: " << hola << std::endl;

	//if (hola > 100) {
	//	if (entity != NULL)
	//		entity->setLive(false);
	//	//        life = false;
	//	return false;
	//}
	//else
	//	return true;


//}

float Bala::getDamage() {
	return damage;
}


Entity2D* Bala::getEntity()
{
	return entity;
}
