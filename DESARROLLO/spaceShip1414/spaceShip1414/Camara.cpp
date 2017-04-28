#include "Camara.h"
#include "graphicEngine\TGraphicEngine.h"
#include "graphicEngine\entityTree\TTransform.h"
#include "graphicEngine\entityTree\TNodo.h"
#include "graphicEngine\entityTree\TMalla.h"
#include "graphicEngine\entityTree\TCamara.h"


Camara::Camara(TGraphicEngine * motorApp) : velocity{ 5.0f }, yaw{ 0 }, pitch{ 0 }
{
	rotation = motorApp->crearTransform();
	scale = motorApp->crearTransform();
	translation = motorApp->crearTransform();
	scale->escalar(0.1, 0.1, 0.1);
	translation->trasladar(0, 0, 0);
	TNodo* nodoTransfRC2 = motorApp->crearNodo(motorApp->nodoRaiz(), rotation);
	TNodo* nodoTransfEC2 = motorApp->crearNodo(nodoTransfRC2, scale);
	TNodo* nodoTransfTC2 = motorApp->crearNodo(nodoTransfEC2, translation);
	TNodo* nodoCamara = motorApp->crearNodo(nodoTransfTC2, motorApp->crearCamara(true, 45.f, 0.1f, 1000.f, 0.0f, 0.0f, 0.0f, true));
	motorApp->addRegistroCamara(nodoCamara);

	motorApp->setCameraMove(this);
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