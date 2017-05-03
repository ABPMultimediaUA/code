#include "Pared.h"
#include "Fisicas3D\Entity3D.h"
#include "Fisicas3D\Mundo3D.h"
#include "graphicEngine\TGraphicEngine.h"
#include "graphicEngine\entityTree\TTransform.h"
#include "graphicEngine\entityTree\TNodo.h"
#include "graphicEngine\entityTree\TMalla.h"
#include "graphicEngine\entityTree\TCamara.h"
#include <glm\vec3.hpp>
#include <glm\gtc\matrix_transform.hpp>
#include <glm\gtx\string_cast.hpp>
#include <glm\gtx\euler_angles.hpp>
#include "MallaFisica.h"



Pared::Pared(TGraphicEngine * motorApp, glm::vec3 tras, glm::vec3 r, glm::vec3 sca) : velocity{ 1.0f }, yaw{ 0 }, pitch{ 0 }
{

	rotation = motorApp->crearTransform();
	scale = motorApp->crearTransform();
	translation = motorApp->crearTransform();
	scale->escalar(sca.x, sca.y, sca.z);
	rotation->rotar(rot.x, 1.0f, 0.0f, 0.0f);
	rotation->rotar(rot.y, 0.0f, 1.0f, 0.0f);
	rotation->rotar(rot.z, 0.0f, 0.0f, 1.0f);
	translation->trasladar(tras.x, tras.y, tras.z);

	pos = tras;
	rot = r;
	escala = sca;
	motor = motorApp;
	//sca.y = 1;
	//fis->Scale()->escalar(sca.x, sca.y, sca.z );

	TNodo* nodoTransfRM = motorApp->crearNodo(motorApp->nodoRaiz(), rotation);
	TNodo* nodoTransfEM = motorApp->crearNodo(nodoTransfRM, scale);
	TNodo* nodoTransfTM = motorApp->crearNodo(nodoTransfEM, translation);
	TNodo* nodoMalla = motorApp->crearNodo(nodoTransfTM, motorApp->crearMalla("resourse/models/untitled.obj"));

}

Pared::~Pared()
{
	delete(scale);
	delete(rotation);
	delete(translation);
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

void Pared::setFisicas(Mundo3D *m)
{
	//entity = new Entity2D(m->getWorldBox2D(), pos, rot, escala, this);
	//glm::vec3 pos2D(entity->getCuerpo2D()->GetPosition().x, 0, entity->getCuerpo2D()->GetPosition().y);
	//fis = new MallaFisica(motor, pos2D, rot, entity->getEscalaFixture());
	entity = new Entity3D(m, this, pos, rot, escala);

}

glm::vec3 Pared::getPos()
{
	return pos;
}

glm::vec3 Pared::getRot()
{
	return rot;
}

glm::vec3 Pared::getEscala()
{
	return escala;
}
