#include "Camara.h"
#include "graphicEngine\TGraphicEngine.h"
#include "graphicEngine\entityTree\TTransform.h"
#include "graphicEngine\entityTree\TNodo.h"
#include "graphicEngine\entityTree\TMalla.h"
#include "graphicEngine\entityTree\TCamara.h"
#include "graphicEngine\entityTree\TNodo.h"



Camara::Camara(TGraphicEngine * motorApp, TNodo * jugador) : velocity{ 5.0f }, yaw{ 0 }, pitch{ 0 }
{
	translation = motorApp->crearTransform();
	rotation = motorApp->crearTransform();
	scale = motorApp->crearTransform();
	translation->trasladar(0, 0, 0);
	rotation->rotar(0.0f, 1.0f, 0.0f, 0.0f);
	rotation->rotar(0.0f, 0.0f, 1.0f, 0.0f);
	rotation->rotar(0.0f, 0.0f, 0.0f, 1.0f);
	scale->escalar(1, 1, 1);

	TNodo* nodoTransfRC;
	if (jugador != nullptr)
	{
		nodoTransfRC = motorApp->crearNodo(jugador, rotation);
	}
	else
	{
		nodoTransfRC = motorApp->crearNodo(motorApp->nodoRaiz(), rotation);
	}
	TNodo* nodoTransfEC = motorApp->crearNodo(nodoTransfRC, scale);
	TNodo* nodoTransfTC = motorApp->crearNodo(nodoTransfEC, translation);
	TNodo* nodoCamara;

	if (jugador == nullptr) {
		motorApp->setCameraMove(this);
		cam = motorApp->crearCamara(true, 45.f, 0.1f, 2000.f, 10.0f, 10.0f, 10.0f, true);
		nodoCamara = motorApp->crearNodo(nodoTransfTC, cam);
	}
	else
	{
		cam = motorApp->crearCamaraS(true, 45.f, 0.1f, 2000.f, 10.0f, 10.0f, 10.0f, true);
		nodoCamara = motorApp->crearNodo(nodoTransfTC, cam);
	}
	motorApp->addRegistroCamara(nodoCamara);
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

TTransform * Camara::Rotation()
{
	return rotation;
}

TTransform * Camara::Scale()
{
	return scale;
}

TTransform * Camara::Translation()
{
	return translation;
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
	return cam;
}
