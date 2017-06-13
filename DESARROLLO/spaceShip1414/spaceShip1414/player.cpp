#include "player.h"
#include "graphicEngine\TGraphicEngine.h"
#include "graphicEngine\entityTree\TTransform.h"
#include "graphicEngine\entityTree\TNodo.h"
#include "graphicEngine\entityTree\TMalla.h"
#include "graphicEngine\entityTree\TCamara.h"
#ifndef ENTITY2D_GUARD
#define ENTITY2D_GUARD
#include "Fisicas\Entity2D.h"
#endif
#ifndef MUNDO_GUARD
#define MUNDO_GUARD
#include "Fisicas\Mundo.h"
#endif
#include <iostream>
#include <math.h>

#define PI 3.14159265

player::player(TGraphicEngine * motorApp, Mundo *m) : velocity{ 25.0f }, yaw{ 0 }, pitch{ 0 }
{
	nodo = motorApp->addMalla("resourse/models/Nanosuit/nanosuit.obj");
	motorApp->escalar(nodo, 0.5f, 0.5f, 0.5f);
	motorApp->trasladar(nodo, 0.0f, -5.0f, 0.0f);
	motorApp->rotarYPR(nodo, 180, 0, 0);
	pos = glm::vec3(0, -5, 0);
	rot = glm::vec3(180, 0, 0);
	escale = glm::vec3(2, 7, 2);
	engine = motorApp;
	vecDir, vecA, vecD, vecS = glm::vec3(0, 0, 0);
	entity = new Entity2D(m->getWorldBox2D(), glm::vec3(0,0,0), rot, this);
	
	motorApp->setPlayerMove(this);
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


player::~player()
{

	delete(entity);

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

glm::vec3 player::getPos()
{
	return pos;
}

glm::vec3 player::getRot()
{
	return rot;
}

glm::vec3 player::getScale()
{
	return escale;
}

int player::getDireccion()
{
	return dir;
}

void player::setPos(float x, float y, float z)
{
	pos.x = x; pos.y = y; pos.z = z;
}

void player::setRot(float x, float y, float z)
{
	rot.x = x; rot.y = y; rot.z = z;
}

void player::setScale(float x, float y, float z)
{
	escale.x = x; escale.y = y; escale.z = z;

}

void player::actualizarFisicas(int n, double delta, float anguloCam)
{

	b2Vec2 vel(0,0);

	dir = n;
	glm::vec3 posSim;

	if(n == -1) {
		entity->getCuerpo2D()->SetLinearVelocity(b2Vec2(0.0f, 0.0f));
	}


	if (n == 0) {

		vel.Set(vecD.x, vecD.z);
		vel = velocity * vel;
		//entity->getCuerpo2D()->SetLinearVelocity(b2Vec2(velocity, 0.0f));
	}

	if (n == 1) {

		vel.Set(vecA.x, vecA.z);
		vel = velocity * vel;
		//entity->getCuerpo2D()->SetLinearVelocity(b2Vec2(-velocity, 0.0f));

	}

	if (n == 2) {
		vel.Set(vecS.x, vecS.z);
		vel = velocity * vel;
		//entity->getCuerpo2D()->SetLinearVelocity(b2Vec2(0.0f, -velocity));

	}


	if (n == 3) {

		vel.Set(vecDir.x, vecDir.z);
		vel = velocity * vel;
		//entity->getCuerpo2D()->SetLinearVelocity(b2Vec2(0.0f, velocity));
	}

	entity->getCuerpo2D()->SetLinearVelocity(vel);

	actualizarPosicion();

	//engine->resetTransform(this->getNodo(), 't');
	//setPos(-entity->getCuerpo2D()->GetPosition().x, this->getPos().y, -entity->getCuerpo2D()->GetPosition().y);

	//engine->trasladar(this->getNodo(), entity->getCuerpo2D()->GetPosition().x, this->getPos().y, -entity->getCuerpo2D()->GetPosition().y);

}

void player::setCamPos(glm::vec3 p)
{
	posCam = p;
}

TNodo * player::getNodo()
{
	return nodo;
}

void player::asignarVectorDirector(glm::vec3 u, float angle) {

	vecDir = u;

	std::cout << "ANGLEEEEE: " << angle << std::endl;
	std::cout << angle + 90 << std::endl;
	std::cout << angle + 180 << std::endl;
	std::cout << angle - 90 << std::endl;

	float angulo = (90) * PI / 180;


	vecA = glm::vec3(vecDir.x * cos(angulo) - vecDir.z * sin(angulo),
		0,
		vecDir.x * sin(angulo) + vecDir.z * cos(angulo));

	angulo = (180) * PI / 180;

	vecS = glm::vec3(vecDir.x * cos(angulo) - vecDir.z * sin(angulo),
		0,
		vecDir.x * sin(angulo) + vecDir.z * cos(angulo));

	angulo = (- 90) * PI / 180;


	vecD = glm::vec3(vecDir.x * cos(angulo) - vecDir.z * sin(angulo),
		0,
		vecDir.x * sin(angulo) + vecDir.z * cos(angulo));

	std::cout << "VECTORES" << std::endl;
	std::cout << "DIR: "<< glm::to_string(vecDir) << std::endl;
	std::cout << "A: "<<glm::to_string(vecA) << std::endl;
	std::cout << "S: "<< glm::to_string(vecS) << std::endl;
	std::cout <<"D:"<< glm::to_string(vecD) << std::endl;

}

void player::actualizarPosicion()
{
	engine->resetTransform(this->getNodo(), 't');
	setPos(-entity->getCuerpo2D()->GetPosition().x, this->getPos().y, -entity->getCuerpo2D()->GetPosition().y);

	engine->trasladar(this->getNodo(), entity->getCuerpo2D()->GetPosition().x, this->getPos().y, -entity->getCuerpo2D()->GetPosition().y);
}


//aplicar impulso

void player::iniciarTiempoImpulso() {

	temporizador = 4.0f;

}

void player::disminuirTem() {

	temporizador -= 0.5f;
}

float player::getTemporizador() {

	return temporizador;
}

void player::setImpulso(bool x) {
	impulso = x;
}

bool player::getImpulso() {
	return impulso;

}

//end;