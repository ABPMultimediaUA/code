#include "Pared.h"
#include "../Fisicas\Entity2D.h"
#include "../Fisicas\Mundo.h"
#include "../graphicEngine\TGraphicEngine.h"
#include "../graphicEngine\entityTree\TTransform.h"
#include "../graphicEngine\entityTree\TNodo.h"
#include "../graphicEngine\entityTree\TMalla.h"
#include "../graphicEngine\entityTree\TCamara.h"
#include <string>




Pared::Pared(TGraphicEngine * motorApp, glm::vec3 tras, glm::vec3 r, glm::vec3 sca, std::string model) : velocity{ 1.0f }, yaw{ 0 }, pitch{ 0 }
{

	rotation = motorApp->crearTransform();
	scale = motorApp->crearTransform();
	translation = motorApp->crearTransform();


	pos = tras;
	rot = r;
	escala = sca;
	motor = motorApp;
	//sca.y = 1;
	//fis->Scale()->escalar(sca.x, sca.y, sca.z );

	TNodo* nodoTransfRM = motorApp->crearNodo(motorApp->nodoRaiz(), rotation);
	TNodo* nodoTransfEM = motorApp->crearNodo(nodoTransfRM, scale);
	TNodo* nodoTransfTM = motorApp->crearNodo(nodoTransfEM, translation);
	if (model!="")
	{
		nodoMalla = motorApp->crearNodo(nodoTransfTM, motorApp->crearMalla("resourse/models/Escenario/" + model + "/" + model + ".obj"));
		rotation->resetMatriz();
		rotation->rotarYPR(rot.y, 0.0, 0.0);

	}
	scale->escalar(sca.x, sca.y, sca.z);

	translation->trasladar(tras.x, tras.y, tras.z);
}

Pared::~Pared()
{
	delete(scale);
	delete(rotation);
	delete(translation);
	delete entity;
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


void Pared::setFisicas(Mundo *m)
{

	entity = new Entity2D(m->getWorldBox2D(), pos, rot, escala, this);
	//glm::vec3 pos2D(entity->getCuerpo2D()->GetPosition().x, 0, entity->getCuerpo2D()->GetPosition().y);
	//fis = new MallaFisica(motor, pos2D, rot, entity->getEscalaFixture(), nodoMalla);
	/*translation->resetMatriz();
	translation->trasladar(entity->getCuerpo2D()->GetPosition().x, 0, entity->getCuerpo2D()->GetPosition().y);
*/
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
