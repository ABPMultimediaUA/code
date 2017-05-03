#include "MallaFisica.h"
#include "graphicEngine\TGraphicEngine.h"
#include "graphicEngine\entityTree\TTransform.h"
#include "graphicEngine\entityTree\TNodo.h"
#include "graphicEngine\entityTree\TMalla.h"
#include "graphicEngine\entityTree\TCamara.h"
#include "../Fisicas/Entity2D.h"
#include "../Fisicas/Mundo.h"

#include <iostream>

MallaFisica::MallaFisica(TGraphicEngine * motorApp, glm::vec3 tras, glm::vec3 r, glm::vec3 sca, TNodo *nodo) : velocity{ 50.0f }, yaw{ 0 }, pitch{ 0 }
{

	rotation = motorApp->crearTransform();
	scale = motorApp->crearTransform();
	translation = motorApp->crearTransform();
	scale->escalar(sca.x, sca.y, sca.z);
	rotation->rotar(rot.x, 1.0f, 0.0f, 0.0f);
	rotation->rotar(rot.y, 0.0f, 1.0f, 0.0f);
	rotation->rotar(rot.z, 0.0f, 0.0f, 1.0f);
	translation->trasladar(tras.x, tras.y, tras.z);

	

	//TNodo* nodoTransfRM = motorApp->crearNodo(motorApp->nodoRaiz(), rotation);
	TNodo* nodoTransfRM = motorApp->crearNodo(nodo, rotation);
	TNodo* nodoTransfEM = motorApp->crearNodo(nodoTransfRM, scale);
	nodoTransfTM = motorApp->crearNodo(nodoTransfEM, translation);

	TNodo* nodoMalla = motorApp->crearNodo(nodoTransfTM, motorApp->crearMalla("resourse/models/untitled.obj"));

	//motorApp->setPlayerMove(this);
}


MallaFisica::~MallaFisica()
{

}

float MallaFisica::getVelocity()
{
	return velocity;
}

float MallaFisica::getYaw()
{
	return yaw;
}

float MallaFisica::getPitch()
{
	return pitch;
}

TTransform * MallaFisica::Rotation()
{
	return rotation;
}

TTransform * MallaFisica::Scale()
{
	return scale;
}

TTransform * MallaFisica::Translation()
{
	return translation;
}

void MallaFisica::setVelocity(float v)
{
	velocity = v;
}

void MallaFisica::setYaw(float y)
{
	yaw = y;
}

void MallaFisica::setPitch(float p)
{
	pitch = p;
}

glm::vec3 MallaFisica::getPos()
{
	return pos;
}

glm::vec3 MallaFisica::getRot()
{
	return rot;
}

glm::vec3 MallaFisica::getScale()
{
	return escale;
}

void MallaFisica::setPos(float x, float y, float z)
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

void MallaFisica::setRot(float x, float y, float z)
{
	rot.x = x; rot.y = y; rot.z = z;
}

void MallaFisica::setScale(float x, float y, float z)
{
	escale.x = x; escale.y = y; escale.z = z;

}

TNodo * MallaFisica::getNodoTrans()
{
	return nodoTransfTM;
}
