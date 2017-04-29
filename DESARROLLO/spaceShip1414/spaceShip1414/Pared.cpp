#include "Pared.h"
#include "graphicEngine\TGraphicEngine.h"
#include "graphicEngine\entityTree\TTransform.h"
#include "graphicEngine\entityTree\TNodo.h"
#include "graphicEngine\entityTree\TMalla.h"
#include "graphicEngine\entityTree\TCamara.h"
#include <glm\vec3.hpp>
#include <glm\gtc\matrix_transform.hpp>
#include <glm\gtx\string_cast.hpp>
#include <glm\gtx\euler_angles.hpp>



Pared::Pared(TGraphicEngine * motorApp, glm::vec3 tras, glm::vec3 rot, glm::vec3 sca) : velocity{ 1.0f }, yaw{ 0 }, pitch{ 0 }
{

	//rotation = motorApp->crearTransform();
	//scale = motorApp->crearTransform();
	//translation = motorApp->crearTransform();
	//scale->escalar(sca.x, sca.y, sca.z);
	//rotation->rotar(rot.x, 1.0f, 0.0f, 0.0f);
	//rotation->rotar(rot.y, 0.0f, 1.0f, 0.0f);
	//rotation->rotar(rot.z, 0.0f, 0.0f, 1.0f);
	//translation->trasladar(tras.x, tras.y, tras.z);
	motor = motorApp;
	Transform = motorApp->crearTransform();
	Transform->rotar(rot.x, 1.0f, 0.0f, 0.0f);
	Transform->rotar(rot.y, 0.0f, 1.0f, 0.0f);
	Transform->rotar(rot.z, 0.0f, 0.0f, 1.0f);
	Transform->trasladar(tras.x, tras.y, tras.z);
	Transform->escalar(sca.x, sca.y, sca.z);


	TNodo* nodoTransfRM = motorApp->crearNodo(motorApp->nodoRaiz(), Transform);
	//TNodo* nodoTransfEM = motorApp->crearNodo(nodoTransfRM, scale);
	//TNodo* nodoTransfTM = motorApp->crearNodo(nodoTransfEM, translation);
	/*TNodo* nodoMalla = motorApp->crearNodo(nodoTransfRM, motorApp->crearMalla("resourse/models/untitled.obj"));*/
	padre = nodoTransfRM;


}

Pared::~Pared()
{
	//delete(scale);
	//delete(rotation);
	//delete(translation);
}

TNodo* Pared::addMalla(TNodo* father)
{
	TNodo* nodoMalla;
	if (father==nullptr)
	{
		nodoMalla = motor->crearNodo(padre, motor->crearMalla("resourse/models/untitled.obj"));
	}
	else
	{
		nodoMalla = motor->crearNodo(father, motor->crearMalla("resourse/models/untitled.obj"));
		
	}

	return nodoMalla;
}

TNodo* Pared::addNodo(TNodo*father, glm::vec3 tras, glm::vec3 rot, glm::vec3 sca)
{
	TNodo* nodo;
	if (father == nullptr)
	{
		TTransform *transf;
		transf = motor->crearTransform();
		transf->rotar(rot.x, 1.0f, 0.0f, 0.0f);
		transf->rotar(rot.y, 0.0f, 1.0f, 0.0f);
		transf->rotar(rot.z, 0.0f, 0.0f, 1.0f);
		transf->trasladar(tras.x, tras.y, tras.z);
		transf->escalar(sca.x, sca.y, sca.z);

		nodo = motor->crearNodo(padre, transf);
	}
	else
	{
		TTransform *transf;
		transf = motor->crearTransform();
		transf->rotar(rot.x, 1.0f, 0.0f, 0.0f);
		transf->rotar(rot.y, 0.0f, 1.0f, 0.0f);
		transf->rotar(rot.z, 0.0f, 0.0f, 1.0f);
		transf->trasladar(tras.x, tras.y, tras.z);
		transf->escalar(sca.x, sca.y, sca.z);
		nodo = motor->crearNodo(father, transf);
	}

	return nodo;
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