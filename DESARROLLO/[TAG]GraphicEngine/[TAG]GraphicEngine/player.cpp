#include "player.h"
#include "framework\TGraphicEngine.h"
#include "entityTree\TTransform.h"
#include "entityTree\TNodo.h"
#include "entityTree\TMalla.h"



player::player(TGraphicEngine * motorApp) : velocity{ 1.0f }, yaw{ 0 }, pitch{ 0 }
{
	rotation = motorApp->crearTransform();
	scale = motorApp->crearTransform();
	translation = motorApp->crearTransform();
	scale->escalar(0.1, 0.1, 0.1);
	translation->trasladar(0, 0, 0);
	TNodo* nodoRotation = motorApp->crearNodo(motorApp->nodoRaiz(), rotation);
	TNodo* nodoScale = motorApp->crearNodo(nodoRotation, scale);
	TNodo* nodoTranslation = motorApp->crearNodo(nodoScale, translation);
	translationNodo = nodoTranslation;
	TNodo* nodoMalla = motorApp->crearNodo(nodoTranslation, motorApp->crearMalla("models/Nanosuit/nanosuit.obj"));
	motorApp->setPlayerMove(this);
}

player::player(TGraphicEngine * motorApp, TTransform *camara) : velocity{ 1.0f }, yaw{ 0 }, pitch{ 0 }
{
	tCamara = camara;
	rotation = motorApp->crearTransform();
	scale = motorApp->crearTransform();
	translation = motorApp->crearTransform();
	scale->escalar(0.1, 0.1, 0.1);
	translation->trasladar(0, 0, 0);
	TNodo* nodoRotation = motorApp->crearNodo(motorApp->nodoRaiz(), rotation);
	TNodo* nodoScale = motorApp->crearNodo(nodoRotation, scale);
	TNodo* nodoTranslation = motorApp->crearNodo(nodoScale, translation);
	TNodo* nodoMalla = motorApp->crearNodo(nodoTranslation, motorApp->crearMalla("models/Nanosuit/nanosuit.obj"));
	motorApp->setPlayerMove(this);
}

player::~player()
{
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

void player::Translation(float x, float y, float z)
{
	translation->trasladar(x, y, z);
	tCamara->trasladar(x, y, z);
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

TNodo * player::getNodoTrans()
{
	return translationNodo;
}
