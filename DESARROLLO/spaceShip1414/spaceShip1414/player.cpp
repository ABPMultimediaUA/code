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

player::player(TGraphicEngine * motorApp, Mundo *m) : velocity{ 25.0f }, yaw{ 0 }, pitch{ 0 }
{
	nodo = motorApp->addMalla("resourse/models/Nanosuit/nanosuit.obj");
	motorApp->escalar(nodo, 0.5f, 0.5f, 0.5f);
	motorApp->trasladar(nodo, 0.0f, 0.0f, 0.1f);
	motorApp->rotarYPR(nodo, 180, 0, 0);
	pos = glm::vec3(0, 0, 0);
	rot = glm::vec3(180, 0, 0);
	escale = glm::vec3(2, 7, 2);

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

void player::setPos(float x, float y, float z)
{

	//std::cout << std::endl;
	//std::cout << "POS ANTES: " << std::endl;
	//std::cout << "X: " << pos.x << std::endl;
	//std::cout << "Y: " << pos.y << std::endl;
	//std::cout << "Z: " << pos.z << std::endl;
	//std::cout << std::endl;
	pos.x = x; pos.y = y; pos.z = z;

	//std::cout << std::endl;
	//std::cout << "POS DESPUES: " << std::endl;
	//std::cout << "X: " << pos.x << std::endl;
	//std::cout << "Y: " << pos.y << std::endl;
	//std::cout << "Z: " << pos.z << std::endl;
	//std::cout << std::endl;

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

	//new_x = ((x - x_origin) * cos(angle)) - ((y_origin - y) * sin(angle)) + x_origin;
	//new_y = ((y_origin - y) * cos(angle)) - ((x - x_origin) * sin(angle)) + y_origin;

	//calculo del vec velocidad y el punto destino

	glm::vec3 vecVel = glm::normalize(pos - posCam);

	b2Vec2 vel(0,0);
	glm::vec3 pto = vecVel + pos;

	//glm::vec3 caca = glm::normalize(pto - pos);
	//caca *= velocity;
	//std::cout << "JAJA: " << glm::to_string(vecVel) << std::endl;
	//std::cout << "HAHA: " << glm::to_string(caca) << std::endl;


	glm::vec3 posSim;

	if(n == -1) {
		entity->getCuerpo2D()->SetLinearVelocity(b2Vec2(0.0f, 0.0f));
	}


	if (n == 0) {
		entity->getCuerpo2D()->SetLinearVelocity(b2Vec2(velocity, 0.0f));
	}

	if (n == 1) {

		entity->getCuerpo2D()->SetLinearVelocity(b2Vec2(-velocity, 0.0f));

	}

	if (n == 2) {

		//posSim.x = ((pto.x - pos.x) * cos(180)) + ((pos.z - pto.z) * sin(180)) + pos.x;
		//posSim.z = ((pos.z - pto.z) * cos(180)) - ((pto.x - pos.x) * sin(180)) + pos.z;
		//posSim.x = velocity  * sin(anguloCam);
		//posSim.z = velocity * cos(anguloCam);

		//posSim.y = 0.0f;

		//glm::vec3 aux = glm::normalize(posSim - pos);
		//vecVel = aux * velocity;
		//vel.Set(vecVel.x, vecVel.z);

		entity->getCuerpo2D()->SetLinearVelocity(b2Vec2(0.0f, -velocity));

	}


	if (n == 3) {
		entity->getCuerpo2D()->SetLinearVelocity(b2Vec2(0.0f, velocity));

		//posSim.x = sin(anguloCam);
		//posSim.z = cos(anguloCam);

		//posSim.y = 0.0f;

		//glm::vec3 aux = glm::normalize(posSim - pos);
		//vecVel = aux * velocity;
		//vel.Set(vecVel.x, -vecVel.z);
		//vecVel.x += 


	}


	vecVel *= velocity;

	//entity->getCuerpo2D()->SetLinearVelocity(vel);
	//std::cout << "//////////////////////////////////////////" << std::endl;
	//std::cout << "" << std::endl;
	//std::cout << "POS PERS DES" << std::endl;
	//std::cout << "Pos 3D X: " << pos.x << "Pos 3D Z: " << pos.z << std::endl;
	//std::cout << "Pos 2D X: " << entity->getCuerpo2D()->GetWorldPoint(entity->getCuerpo2D()->GetPosition()).x << "Pos 2D Z: "
	//	<< entity->getCuerpo2D()->GetWorldPoint(entity->getCuerpo2D()->GetPosition()).y << std::endl;
	//std::cout << "Pos 2D X: " << entity->getCuerpo2D()->GetPosition().x << "Pos 2D Z: " << entity->getCuerpo2D()->GetPosition().y << std::endl;
	
	setPos(entity->getCuerpo2D()->GetPosition().x, 0, entity->getCuerpo2D()->GetPosition().y);


}

void player::setCamPos(glm::vec3 p)
{
	posCam = p;
}

TNodo * player::getNodo()
{
	return nodo;
}
