#include "player.h"
#include "framework\TGraphicEngine.h"
#include "entityTree\TTransform.h"
#include "entityTree\TNodo.h"
#include "entityTree\TMalla.h"



player::player(TGraphicEngine * motorApp) : velocity{ 1.0f }, yaw{ 0 }, pitch{ 0 }
{
	nodo = motorApp->addMalla("models/Nanosuit/nanosuit.obj");
	//motorApp->escalar(nodo, 0.1f, 0.1f, 0.1f);
	motorApp->trasladar(nodo, 0.0f, 0.0f, 0.1f);
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

void player::rotation(TGraphicEngine * motorApp, float a, float x, float y, float z)
{
	motorApp->rotar(nodo, a, x, y, z);
}

void player::rotationYPR(TGraphicEngine * motorApp, float y, float p, float r)
{
	motorApp->rotarYPR(nodo, y, p, r);
}

void player::scale(TGraphicEngine * motorApp, float x, float y, float z)
{
	motorApp->escalar(nodo, x, y, z);
}

void player::translation(TGraphicEngine * motorApp, float x, float y, float z)
{
	motorApp->trasladar(nodo, x, y, z);
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

TNodo* player::getNodo()
{
	return nodo;
}
