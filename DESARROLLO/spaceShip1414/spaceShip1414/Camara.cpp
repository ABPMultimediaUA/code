#include "Camara.h"
#include "graphicEngine\TGraphicEngine.h"
#include "graphicEngine\entityTree\TTransform.h"
#include "graphicEngine\entityTree\TNodo.h"
#include "graphicEngine\entityTree\TMalla.h"
#include "graphicEngine\entityTree\TCamara.h"


Camara::Camara(TGraphicEngine * motorApp) : velocity{ 5.0f }, yaw{ 0 }, pitch{ 0 }
{
	Transform = motorApp->crearTransform();
	Transform->rotar(0, 1.0f, 0.0f, 0.0f);
	Transform->rotar(0, 0.0f, 1.0f, 0.0f);
	Transform->rotar(0, 0.0f, 0.0f, 1.0f);
	Transform->trasladar(0, 0, 0);
	Transform->escalar(1, 1, 1);

	TNodo* nodoTrans = motorApp->crearNodo(motorApp->nodoRaiz(), Transform);
	TNodo* nodoCamara = motorApp->crearNodo(nodoTrans, motorApp->crearCamara(true, 45.0f, 0.1f, 1000.f, 0.0f, 0.0f, 0.0f, true));
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

TTransform * Camara::getTransformacion()
{
	return Transform;
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