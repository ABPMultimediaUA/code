#include "player.h"
#include "graphicEngine\TGraphicEngine.h"
#include "graphicEngine\entityTree\TTransform.h"
#include "graphicEngine\entityTree\TNodo.h"
#include "graphicEngine\entityTree\TMalla.h"
#include "graphicEngine\entityTree\TCamara.h"
#include "../Fisicas/Entity2D.h"
#include "../Fisicas/Mundo.h"

#include <iostream>

player::player(TGraphicEngine * motorApp, Mundo *m) : velocity{ 50.0f }, yaw{ 0 }, pitch{ 0 }
{
	translation = motorApp->crearTransform();
	rotation = motorApp->crearTransform();
	scale = motorApp->crearTransform();
	translation->trasladar(0,0,0);
	rotation->rotar(0.0f, 1.0f, 0.0f, 0.0f);
	rotation->rotar(0.0f, 0.0f, 1.0f, 0.0f);
	rotation->rotar(0.0f, 0.0f, 0.0f, 1.0f);
	scale->escalar(1,1,1);

	pos = glm::vec3(0, 0, 0);
	rot = glm::vec3(0, 0, 0);
	escale = glm::vec3(1, 1, 1);

	entity = new Entity2D(m->getWorldBox2D(), pos, rot, this);

	TNodo* nodoTransfRM = motorApp->crearNodo(motorApp->nodoRaiz(), rotation);
	TNodo* nodoTransfEM = motorApp->crearNodo(nodoTransfRM, scale);
	nodoTransfTM = motorApp->crearNodo(nodoTransfEM, translation);

	TNodo* nodoMalla = motorApp->crearNodo(nodoTransfTM, motorApp->crearMalla("resourse/models/Nanosuit/nanosuit.obj"));
	motorApp->setPlayerMove(this);
}

player::~player()
{

	delete(entity);

}

float player::getVelocity()
{
	return velocity;
}

float player::getYaw()
{
	return yaw;
}

float player::getPitch()
{
	return pitch;
}

TTransform * player::Rotation()
{
	return rotation;
}

TTransform * player::Scale()
{
	return scale;
}

TTransform * player::Translation()
{
	return translation;
}

void player::setVelocity(float v)
{
	velocity = v;
}

void player::setYaw(float y)
{
	yaw = y;
}

void player::setPitch(float p)
{
	pitch = p;
}

glm::vec3 player::getPos()
{
	return pos;
}

glm::vec3 player::getRot()
{
	return rot;
}

glm::vec3 player::getScale()
{
	return escale;
}

void player::setPos(float x, float y, float z)
{

	std::cout << std::endl;
	std::cout << "POS ANTES: " << std::endl;
	std::cout << "X: " << pos.x << std::endl;
	std::cout << "Y: " << pos.y << std::endl;
	std::cout << "Z: " << pos.z << std::endl;
	std::cout << std::endl;
	pos.x = x; pos.y = y; pos.z = z;

	std::cout << std::endl;
	std::cout << "POS DESPUES: " << std::endl;
	std::cout << "X: " << pos.x << std::endl;
	std::cout << "Y: " << pos.y << std::endl;
	std::cout << "Z: " << pos.z << std::endl;
	std::cout << std::endl;

}

void player::setRot(float x, float y, float z)
{
	rot.x = x; rot.y = y; rot.z = z;
}

void player::setScale(float x, float y, float z)
{
	escale.x = x; escale.y = y; escale.z = z;

}

void player::actualizarFisicas(int n)
{

	if (n == -1) {
		entity->getCuerpo2D()->SetLinearVelocity(b2Vec2(0.0f, 0.0f));

	}

	if (n == 0) {
		entity->getCuerpo2D()->SetLinearVelocity(b2Vec2(velocity, 0.0f));
	}

	if (n == 1) {

		entity->getCuerpo2D()->SetLinearVelocity(b2Vec2(-velocity, 0.0f));


	}

	if (n == 2) {
		entity->getCuerpo2D()->SetLinearVelocity(b2Vec2(0.0f, velocity));

	}


	if (n == 3) {
		entity->getCuerpo2D()->SetLinearVelocity(b2Vec2(0.0f, -velocity));
	}

}

TNodo * player::getNodoTrans()
{
	return nodoTransfTM;
}
