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

player::player(TGraphicEngine * motorApp, Mundo *m) : velocity{ 100.0f }, yaw{ 0 }, pitch{ 0 }
{
	nodo = motorApp->addMalla("resourse/models/Nanosuit/nanosuit.obj");
	motorApp->escalar(nodo, 0.7f, 0.7f, 0.7f);
	motorApp->trasladar(nodo, 0.0f, 0.0f, 0.1f);
	pos = glm::vec3(0, 0, 0);
	rot = glm::vec3(0, 0, 0);
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

void player::actualizarFisicas(int n, double delta)
{

	//std::cout<<"//////////////////////////////////////////"<<std::endl;
	//            std::cout<<""<<std::endl;
	//            std::cout<<"POS PERS ANTES"<<std::endl;
	//                 std::cout<<"Pos 3D X: "<<pos.x<<"Pos 3D Z: "<<pos.z<<std::endl;
	//                 std::cout<<"Pos 2D X: "<< entity->getCuerpo2D()->GetWorldPoint(entity->getCuerpo2D()->GetPosition()).x<<"Pos 2D Z: "
	//					 << entity->getCuerpo2D()->GetWorldPoint(entity->getCuerpo2D()->GetPosition()).y<<std::endl;
	//			std::cout<<"Pos 2D X: "<<entity->getCuerpo2D()->GetPosition().x<<"Pos 2D Z: "<<entity->getCuerpo2D()->GetPosition().y<<std::endl;

	if (n == -1) {
		entity->getCuerpo2D()->SetLinearVelocity(b2Vec2(0.0f, 0.0f));
		/*fis->Translation()->trasladar(entity->getCuerpo2D()->GetLinearVelocity().x, 0, entity->getCuerpo2D()->GetLinearVelocity().y);*/
	}

	if (n == 0) {
		entity->getCuerpo2D()->SetLinearVelocity(b2Vec2(velocity, 0.0f));
		/*fis->Translation()->trasladar(entity->getCuerpo2D()->GetLinearVelocity().x * 0.016, 0, entity->getCuerpo2D()->GetLinearVelocity().y * 0.016);*/
	}

	if (n == 1) {

		entity->getCuerpo2D()->SetLinearVelocity(b2Vec2(-velocity, 0.0f));
		/*fis->Translation()->trasladar(entity->getCuerpo2D()->GetLinearVelocity().x*0.016, 0, entity->getCuerpo2D()->GetLinearVelocity().y*0.016);*/

	}

	if (n == 2) {
		entity->getCuerpo2D()->SetLinearVelocity(b2Vec2(0.0f, -velocity));
	/*	fis->Translation()->trasladar(entity->getCuerpo2D()->GetLinearVelocity().x*0.016, 0, entity->getCuerpo2D()->GetLinearVelocity().y*0.016);*/
		//std::cout <<"-------------------------------<<<"<< entity->getCuerpo2D()->GetLinearVelocity().x << " " << entity->getCuerpo2D()->GetLinearVelocity().y << std::endl;
	}


	if (n == 3) {
		entity->getCuerpo2D()->SetLinearVelocity(b2Vec2(0.0f, velocity));
	/*	fis->Translation()->trasladar(entity->getCuerpo2D()->GetLinearVelocity().x*0.016, 0, entity->getCuerpo2D()->GetLinearVelocity().y*0.016);*/
	}


	//std::cout << "//////////////////////////////////////////" << std::endl;
	//std::cout << "" << std::endl;
	//std::cout << "POS PERS DES" << std::endl;
	//std::cout << "Pos 3D X: " << pos.x << "Pos 3D Z: " << pos.z << std::endl;
	//std::cout << "Pos 2D X: " << entity->getCuerpo2D()->GetWorldPoint(entity->getCuerpo2D()->GetPosition()).x << "Pos 2D Z: "
	//	<< entity->getCuerpo2D()->GetWorldPoint(entity->getCuerpo2D()->GetPosition()).y << std::endl;
	//std::cout << "Pos 2D X: " << entity->getCuerpo2D()->GetPosition().x << "Pos 2D Z: " << entity->getCuerpo2D()->GetPosition().y << std::endl;
	
	setPos(entity->getCuerpo2D()->GetPosition().x, 0, entity->getCuerpo2D()->GetPosition().y);

	//std::cout << "//////////////////////////////////////////" << std::endl;
	//std::cout << "" << std::endl;
	//std::cout << "POS PERS DES" << std::endl;
	//std::cout << "Pos 3D X: " << pos.x << "Pos 3D Z: " << pos.z << std::endl;
	//std::cout << "Pos 2D X: " << entity->getCuerpo2D()->GetWorldPoint(entity->getCuerpo2D()->GetPosition()).x << "Pos 2D Z: "
	//	<< entity->getCuerpo2D()->GetWorldPoint(entity->getCuerpo2D()->GetPosition()).y << std::endl;
	//std::cout << "Pos 2D X: " << entity->getCuerpo2D()->GetPosition().x << "Pos 2D Z: " << entity->getCuerpo2D()->GetPosition().y << std::endl;
}

TNodo * player::getNodo()
{
	return nodo;
}
