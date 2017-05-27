#include "Luces.h"
#include "..\graphicEngine\TGraphicEngine.h"
#include "..\graphicEngine\entityTree\TTransform.h"
#include "..\graphicEngine\entityTree\TNodo.h"
#include "..\graphicEngine\entityTree\TLuz.h"

#include "..\graphicEngine\entityTree\TCamara.h"
#include <string>




Luces::Luces(TGraphicEngine * motorApp, glm::vec3 tras, glm::vec3 r, glm::vec3 sca) : velocity{ 1.0f }, yaw{ 0 }, pitch{ 0 }
{

	rotation = motorApp->crearTransform();
	scale = motorApp->crearTransform();
	translation = motorApp->crearTransform();
	scale->escalar(sca.x, sca.y, sca.z);
	rotation->rotar(rot.x, 1.0f, 0.0f, 0.0f);
	rotation->rotar(rot.y, 0.0f, 1.0f, 0.0f);
	rotation->rotar(rot.z, 0.0f, 0.0f, 1.0f);
	translation->trasladar(tras.x, tras.y, tras.z);

	//sca.y = 1;
	//fis->Scale()->escalar(sca.x, sca.y, sca.z );
	TNodo* nodoTransfRL = motorApp->crearNodo(motorApp->nodoRaiz(), rotation);
	TNodo* nodoTransfEL = motorApp->crearNodo(nodoTransfRL, scale);
	TNodo* nodoTransfTL = motorApp->crearNodo(nodoTransfEL, translation);
	TNodo* nodoLuz = motorApp->addLuz(nodoTransfTL,'d');
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
