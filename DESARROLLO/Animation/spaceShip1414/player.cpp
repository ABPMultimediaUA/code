#include "player.h"
#include "graphicEngine\TGraphicEngine.h"
#include "graphicEngine\entityTree\TTransform.h"
#include "graphicEngine\entityTree\TNodo.h"
#include "graphicEngine\entityTree\TMalla.h"
#include "graphicEngine\entityTree\TCamara.h"
#include "graphicEngine\entityTree\TAnimacion.h"
#include "Game\MaquinaEstados\FSM\MaquinaEstados.h"
#include "Game\MaquinaEstados\FSM\Estados.h"


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

player::player(TGraphicEngine * motorApp, Mundo *m) : velocity{ 70.0f }, yaw{ 0 }, pitch{ 0 }
{
	engine = motorApp;

	anguloCamara = 90.0f; //para hacer que rote con la camara


	initEstados();
	load_personaje();
	motorApp->escalar(nodo, 0.75f, 0.75f, 0.75f);
	motorApp->trasladar(nodo, 0.0f, 0.0f, 0.0f);
	motorApp->rotarYPR(nodo, 0, 0, 0);

	//animation = motorApp->addAnimacion(andar->getPathAnimacion(), 25);

	//motorApp->escalar(animation, 0.75f, 0.75f, 0.75f);
	//motorApp->trasladar(animation, 0.0f, 0.0f, 0.0f);
	//motorApp->rotarYPR(animation, 0, 0, 0);

	//animation->destruirEntidad();
	pos = glm::vec3(0, 0, 0);
	rot = glm::vec3(180, 0, 0);
	escale = glm::vec3(0.75f, 0.75f, 0.75f);

	vecDir, vecA, vecD, vecS = glm::vec3(0, 0, 0);
	entity = new Entity2D(m->getWorldBox2D(), glm::vec3(0,0,0), rot, this);
	motorApp->setPlayerMove(this);
	movimiento = "andar";
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


void player::initEstados()
{

	MaquinaEstadosAnimation = new MaquinaEstados();
	andar = new Estados("andar");
	andar->asignarPath("resourse/animations/Personaje/AndarFix/");
	reposoAndar = new Estados("reposoAndar");
	reposoAndar->asignarPath("resourse/animations/Personaje/AndarFix/reposo.obj");
	pistola = new Estados("pistola");
	pistola->asignarPath("resourse/animations/Personaje/AndarPistolaFix/r");
	reposoPistola = new Estados("reposoPistola");
	reposoPistola->asignarPath("resourse/animations/Personaje/AndarPistolaFix/reposop.obj");
	disparar = new Estados("disparar");
	disparar->asignarPath("resourse/animations/Personaje/Disparar/");

	MaquinaEstadosAnimation->addEstado(andar);
	MaquinaEstadosAnimation->addEstado(reposoAndar, true);
	MaquinaEstadosAnimation->addEstado(reposoPistola);
	MaquinaEstadosAnimation->addEstado(pistola);
	MaquinaEstadosAnimation->addEstado(disparar);


}

void player::deleteEstados()
{
	delete andar;
	delete reposoAndar;
	delete reposoPistola;
	delete pistola;
	delete disparar;
	delete MaquinaEstadosAnimation;

}

player::~player()
{

	delete(entity);
	deleteEstados();

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

void player::cambiarAnimacion(char c) {


	switch (c)
	{

	case 'r': //reposo
		std::cout << "REPOSO" << std::endl;
		if (movimiento == "andar")
		{
			MaquinaEstadosAnimation->cambiaEstado("reposoAndar");
			NPistola->noDraw(false);
			Nandar->noDraw(false);
			NreposoPistola->noDraw(false);
			nodo = NreposoAndar;
		}
		if (movimiento == "pistola")
		{
			MaquinaEstadosAnimation->cambiaEstado("reposoPistola");
			NPistola->noDraw(false);
			Nandar->noDraw(false);
			NreposoAndar->noDraw(false);
			nodo = NreposoPistola;
		}
		break;

	case 'a': //andar
		std::cout << "ANDAR" << std::endl;
		MaquinaEstadosAnimation->cambiaEstado("andar");
		NPistola->noDraw(false);
		NreposoAndar->noDraw(false);
		NreposoPistola->noDraw(false);
		nodo = Nandar;
		break;

	case 'c': //pistola
		MaquinaEstadosAnimation->cambiaEstado("pistola");
		Nandar->noDraw(false);
		NreposoAndar->noDraw(false);
		NreposoPistola->noDraw(false);
		nodo = NPistola;

		break;

	case 'd': //disparar

		break;

	default:
		//animacion de andar
		break;
	}


}


void player::actualizarFisicas(int n, double delta, float anguloCam)
{

	b2Vec2 vel(0,0);
	glm::vec3 rotaton = engine->getRotacion(nodo);
	dir = n;
	glm::vec3 posSim;

	//std::cout << "VALORS DE N: " << n << std::endl;
	
	if(n == -1) {
		entity->getCuerpo2D()->SetLinearVelocity(b2Vec2(0.0f, 0.0f));
		if (MaquinaEstadosAnimation->getEstadoActivo()->getEstado() != reposoAndar->getEstado()|| MaquinaEstadosAnimation->getEstadoActivo()->getEstado() != reposoPistola->getEstado()) {
			cambiarAnimacion('r');
			engine->resetTransform(nodo, 'r');

			engine->rotarYPR(nodo, anguloCamara - 90, 0.0f, 0.0f);
			nodo->noDraw(true);
			
		}

		if (recalculo == true) {
			std::cout << "HORA DEL RECALCULO" << std::endl;
			asignarVectorDirector(vecDir, anguloCamara);
			setRecalculo(false);
		}

		

		engine->resetTransform(this->getNodo(), 'r');
		engine->rotarYPR(nodo, rotaton.y, 0.0f, 0.0f);

	}




	if (n == 0) {


	
		vel.Set(vecD.x, vecD.z);
		vel = velocity * vel;

		engine->resetTransform(nodo, 'r');

		engine->rotarYPR(nodo, anguloCamara - 90, 0.0f, 0.0f);
		//entity->getCuerpo2D()->SetLinearVelocity(b2Vec2(velocity, 0.0f));
		if (movimiento == "andar")
		{
			cambiarAnimacion('a');

			nodo->noDraw(true);
		}
		else
		{
			cambiarAnimacion('c');
			nodo->noDraw(true);
		}
	}

	if (n == 1) {


		nodo->noDraw(true);
		vel.Set(vecA.x, vecA.z);
		vel = velocity * vel;

		engine->resetTransform(nodo, 'r');

		engine->rotarYPR(nodo, anguloCamara + 90, 0.0f, 0.0f);

		//entity->getCuerpo2D()->SetLinearVelocity(b2Vec2(-velocity, 0.0f));
		if (movimiento=="andar")
		{
			cambiarAnimacion('a');
			nodo->noDraw(true);
		}
		else
		{
			cambiarAnimacion('c');
			nodo->noDraw(true);
		}

	}

	if (n == 2) {
		nodo->noDraw(true);

		vel.Set(vecS.x, vecS.z);
		vel = velocity * vel;
		engine->resetTransform(nodo, 'r');

		engine->rotarYPR(nodo, anguloCamara + 180, 0.0f, 0.0f);
		//entity->getCuerpo2D()->SetLinearVelocity(b2Vec2(0.0f, -velocity));
		if (movimiento == "andar")
		{
			cambiarAnimacion('a');
			nodo->noDraw(true);
		}
		else
		{
			cambiarAnimacion('c');
			nodo->noDraw(true);
		}
	}


	if (n == 3) {

		nodo->noDraw(true);
		vel.Set(vecDir.x, vecDir.z);
		vel = velocity * vel;
		engine->resetTransform(nodo, 'r');

		engine->rotarYPR(nodo, anguloCamara, 0.0f, 0.0f);
		//entity->getCuerpo2D()->SetLinearVelocity(b2Vec2(0.0f, velocity));
		if (movimiento == "andar")
		{
			cambiarAnimacion('a');
			nodo->noDraw(true);
		}
		else
		{
			cambiarAnimacion('c');
			nodo->noDraw(true);
		}
	}

	if (n == 4)
	{
		cambiarAnimacion('a');
		movimiento = "andar";
	}


	if (n==5)
	{
		cambiarAnimacion('c');
		movimiento = "pistola";
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

	anguloCamara = angle;

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
	//engine->resetTransform(animation, 't');


	setPos(entity->getCuerpo2D()->GetPosition().x, this->getPos().y, -entity->getCuerpo2D()->GetPosition().y);

	

	engine->trasladar(this->getNodo(), entity->getCuerpo2D()->GetPosition().x, this->getPos().y, -entity->getCuerpo2D()->GetPosition().y);
	//engine->trasladar(animation, entity->getCuerpo2D()->GetPosition().x, this->getPos().y, -entity->getCuerpo2D()->GetPosition().y);
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

void player::destruirAnimacion(TNodo* n)
{
	n->destruirEntidad();
	
}

bool player::getImpulso() {
	return impulso;

}

void player::setAnguloCamara(float angle)
{
	anguloCamara = angle;
}

void player::setRecalculo(bool x)
{
	recalculo = x;
}

void player::setVectorDirector(glm::vec3 u)
{
	vecDir = u;
}

void player::load_personaje()
{

	NreposoAndar = engine->addMalla(reposoAndar->getPathAnimacion());
	nodo = NreposoAndar;
	nodo->noDraw(true);
	godfather = nodo->getPadre();
	Nandar = engine->addAnimacion(andar->getPathAnimacion(), 8, godfather);
	Nandar->noDraw(false);
	NPistola = engine->addAnimacion(pistola->getPathAnimacion(), 8, godfather);
	NPistola->noDraw(false);
	NreposoPistola = engine->addMalla(reposoPistola->getPathAnimacion(), godfather);
}
//end;