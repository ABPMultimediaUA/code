#include "Luces.h"
#include "..\graphicEngine\TGraphicEngine.h"
#include "..\graphicEngine\entityTree\TTransform.h"
#include "..\graphicEngine\entityTree\TNodo.h"
#include "..\graphicEngine\entityTree\TLuz.h"

#include "..\graphicEngine\entityTree\TCamara.h"
#include <string>




Luces::Luces(TGraphicEngine * motorApp, glm::vec3 tras, glm::vec3 r, glm::vec3 sca) : velocity{ 1.0f }, yaw{ 0 }, pitch{ 0 }
{

	TNodo* nodoLuz = motorApp->addLuz('d');
	motorApp->trasladar(nodoLuz, tras.x, tras.y, tras.z+20);
	motorApp->rotarYPR(nodoLuz, r.x, r.y, r.z);
	motorApp->escalar(nodoLuz, sca.x, sca.y, sca.z);
	motorApp->addRegistroLuz(nodoLuz);
}

Luces::~Luces()
{
	delete(scale);
	delete(rotation);
	delete(translation);
}


float Luces::getVelocity()
{
	return velocity;
}

float Luces::getYaw()
{
	return yaw;
}

float Luces::getPitch()
{
	return pitch;
}

TTransform * Luces::Rotation()
{
	return rotation;
}

TTransform * Luces::Scale()
{
	return scale;
}

TTransform * Luces::Translation()
{
	return translation;
}

void Luces::setVelocity(float v)
{
	velocity = v;
}

void Luces::setYaw(float y)
{
	yaw = y;
}

void Luces::setPitch(float p)
{
	pitch = p;
}

glm::vec3 Luces::getPos()
{
	return pos;
}

glm::vec3 Luces::getRot()
{
	return rot;
}

glm::vec3 Luces::getEscala()
{
	return escala;
}
