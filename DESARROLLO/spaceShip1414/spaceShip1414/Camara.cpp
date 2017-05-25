#include "Camara.h"
#include <iostream>
#include "graphicEngine\TGraphicEngine.h"
#include "graphicEngine\entityTree\TTransform.h"
#include "graphicEngine\entityTree\TNodo.h"
#include "graphicEngine\entityTree\TMalla.h"
#include "graphicEngine\entityTree\TCamara.h"
#include "graphicEngine\entityTree\TNodo.h"
#include "player.h"


//tipo 0 = librePerspectiva, 1 = jugadorPerspectiva, 2 = libreOrto, 3 = jugadorOrto 
Camara::Camara(TGraphicEngine * motorApp, char tipo, bool activa, player * jugador) : velocity{ 5.0f }, yaw{ 0 }, pitch{ 0 }
{
	switch (tipo)
	{
	case 0:
		nodo = motorApp->addCamaraLibre(activa);
		motorApp->setCamaraMove(this);
		//motorApp->trasladar(nodo, 0, 10, -2.0f);
		break;
	case 1:
		nodo = motorApp->addCamaraPerspectivaSeguidora(activa, motorApp->getPadreX(jugador->getNodo()));
		motorApp->setCamaraMove(this);

		break;
	case 2:
		nodo = motorApp->addCamaraParalelaFija(activa);
		motorApp->trasladar(nodo, 0, 10, -2.0f);
		break;
	case 3:
		nodo = motorApp->addCamaraParalelaSeguidora(activa, motorApp->getPadreX(jugador->getNodo()));
		break;
	default:
		std::cout << "Este tipo de camara no existe" << std::endl;
		break;
	}
}

Camara::Camara(TGraphicEngine * motorApp, bool activa, glm::vec3 pos, glm::vec3 rot, glm::vec3 escala) : velocity{ 5.0f }, yaw{ 0 }, pitch{ 0 }
{
	nodo = motorApp->addCamaraPerspectivaFija(activa);
	motorApp->rotarYPR(nodo, rot.y, rot.x, rot.z);
	motorApp->trasladar(nodo, pos.x, pos.y, pos.z);
	motorApp->setCamaraMove(this);

}

Camara::~Camara()
{
}


float Camara::getVelocity()
{
	return velocity;
}

float Camara::getYaw()
{
	return yaw;
}

float Camara::getPitch()
{
	return pitch;
}



void Camara::setVelocity(float v)
{
	velocity = v;
}

void Camara::setYaw(float y)
{
	yaw = y;
}

void Camara::setPitch(float p)
{
	pitch = p;
}


TCamara * Camara::getTCamara()
{
	return static_cast<TCamara*>(nodo->getEntidad());
}

TNodo * Camara::getNodo()
{
	return nodo;
}

void Camara::rotation(TGraphicEngine * motorApp, float a, float x, float y, float z)
{
	motorApp->rotar(nodo, a, x, y, z);
}

void Camara::rotationYPR(TGraphicEngine * motorApp, float y, float p, float r)
{
	motorApp->rotarYPR(nodo, y, p, r);
}

void Camara::scale(TGraphicEngine * motorApp, float x, float y, float z)
{
	motorApp->escalar(nodo, x, y, z);
}

void Camara::translation(TGraphicEngine * motorApp, float x, float y, float z)
{
	motorApp->trasladar(nodo, x, y, z);
}


void Camara::updateCam(TGraphicEngine *motorApp, glm::vec3 eye, glm::vec3 posPers) {

	motorApp->look(nodo, eye, posPers, glm::vec3(0, 1, 0));

	translation(motorApp, posPers.x, 15,posPers.z - 15);

}
