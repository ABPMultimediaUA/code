#include "player.h"
#include "graphicEngine\TGraphicEngine.h"
#include "graphicEngine\entityTree\TTransform.h"
#include "graphicEngine\entityTree\TNodo.h"
#include "graphicEngine\entityTree\TMalla.h"
#include "graphicEngine\entityTree\TCamara.h"


player::player(TGraphicEngine * motorApp) : velocity{ 1.0f }, yaw{ 0 }, pitch{ 0 }
{
	rotation = motorApp->crearTransform();
	scale = motorApp->crearTransform();
	translation = motorApp->crearTransform();
	scale->escalar(0.1, 0.1, 0.1);
	translation->trasladar(0, 0, 0);
	TNodo* nodoTransfRM = motorApp->crearNodo(motorApp->nodoRaiz(), rotation);
	TNodo* nodoTransfEM = motorApp->crearNodo(nodoTransfRM, scale);
	TNodo* nodoTransfTM = motorApp->crearNodo(nodoTransfEM, translation);
	//TNodo* nodoMalla = motorApp->crearNodo(nodoTransfTM, motorApp->crearMalla("resourse/models/Nanosuit/nanosuit.obj"));
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