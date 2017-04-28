#include "Pared.h"
#include "graphicEngine\TGraphicEngine.h"
#include "graphicEngine\entityTree\TTransform.h"
#include "graphicEngine\entityTree\TNodo.h"
#include "graphicEngine\entityTree\TMalla.h"
#include "graphicEngine\entityTree\TCamara.h"



Pared::Pared(TGraphicEngine * motorApp) : velocity{ 1.0f }, yaw{ 0 }, pitch{ 0 }
{
	rotation = motorApp->crearTransform();
	scale = motorApp->crearTransform();
	translation = motorApp->crearTransform();
	scale->escalar(0.1, 0.1, 0.1);
	translation->trasladar(0, 0, 0);
	TNodo* nodoTransfRM = motorApp->crearNodo(motorApp->nodoRaiz(), rotation);
	TNodo* nodoTransfEM = motorApp->crearNodo(nodoTransfRM, scale);
	TNodo* nodoTransfTM = motorApp->crearNodo(nodoTransfEM, translation);
	TNodo* nodoMalla = motorApp->crearNodo(nodoTransfTM, motorApp->crearMalla("resourse/models/untitled.obj"));
}

Pared::~Pared()
{
}


float Pared::getVelocity()
{
	return velocity;
}

float Pared::getYaw()
{
	return yaw;
}

float Pared::getPitch()
{
	return pitch;
}

TTransform * Pared::Rotation()
{
	return rotation;
}

TTransform * Pared::Scale()
{
	return scale;
}

TTransform * Pared::Translation()
{
	return translation;
}

void Pared::setVelocity(float v)
{
	velocity = v;
}

void Pared::setYaw(float y)
{
	yaw = y;
}

void Pared::setPitch(float p)
{
	pitch = p;
}