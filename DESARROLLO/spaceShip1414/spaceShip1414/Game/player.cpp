#include "player.h"
#include "../graphicEngine\TGraphicEngine.h"
#include "../graphicEngine\entityTree\TTransform.h"
#include "../graphicEngine\entityTree\TNodo.h"
#include "../graphicEngine\entityTree\TMalla.h"
#include "../graphicEngine\entityTree\TCamara.h"
#include "../graphicEngine\entityTree\TAnimacion.h"
#include "MaquinaEstados\FSM\MaquinaEstados.h"
#include "MaquinaEstados\FSM\Estados.h"
#include "Jugador\Inventario.h"
#include "Escenario\ObjConsumables\Botiquines.h"

#ifndef ENTITY2D_GUARD
#define ENTITY2D_GUARD
#include "../Fisicas\Entity2D.h"
#endif
#ifndef MUNDO_GUARD
#define MUNDO_GUARD
#include "../Fisicas\Mundo.h"
#endif
#include <iostream>
#include <math.h>

#define PI 3.14159265
#define PISTOLA 0
#define FUSIL 1
#define ESCOPETA 2

player::player(TGraphicEngine * motorApp, Mundo *m) : velocity{ 70.0f }, yaw{ 0 }, pitch{ 0 }
{
	anguloCamara = 90.0f; //para hacer que rote con la camara
	vida = 100.0f;
	vidaMax = vida;
	initEstados();
	nodo = motorApp->addAnimacion(andar->getPathAnimacion(), 25);
	motorApp->escalar(nodo, 0.75f, 0.75f, 0.75f);
	motorApp->trasladar(nodo, 0.0f, 0.0f, 0.0f);
	motorApp->rotarYPR(nodo, 0, 0, 0);
	//animation = motorApp->addAnimacion(andar->getPathAnimacion(), 25);
	//motorApp->escalar(animation, 0.75f, 0.75f, 0.75f);
	//motorApp->trasladar(animation, 0.0f, 0.0f, 0.0f);
	//motorApp->rotarYPR(animation, 0, 0, 0);
	//animation->destruirEntidad();
	pos = glm::vec3(0, -5, 0);
	rot = glm::vec3(180, 0, 0);
	escale = glm::vec3(0.75f, 0.75f, 0.75f);
	engine = motorApp;
	vecDir, vecA, vecD, vecS = glm::vec3(0, 0, 0);
	entity = new Entity2D(m->getWorldBox2D(), glm::vec3(0,0,0), rot, this);
	//motorApp->setPlayerMove(this);
	inv = new Inventario();
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
	reposo = new Estados("reposo");
	//reposo->asignarPath("resourse/animations/Personaje/Reposo/");
	reposo->asignarPath("resourse/models/Personajes/personaje/personaje.obj");
	correr = new Estados("correr");
	correr->asignarPath("resourse/animations/Personaje/Correr/");
	disparar = new Estados("disparar");
	disparar->asignarPath("resourse/animations/Personaje/Disparar/");
	MaquinaEstadosAnimation->addEstado(andar);
	MaquinaEstadosAnimation->addEstado(reposo, true);
	MaquinaEstadosAnimation->addEstado(correr);
	MaquinaEstadosAnimation->addEstado(disparar);
}

void player::deleteEstados()
{
	delete andar;
	delete reposo;
	delete correr;
	delete disparar;
	delete MaquinaEstadosAnimation;
}

player::~player()
{
	delete(entity);
	delete inv;
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
		//std::cout << "REPOSO" << std::endl;
		MaquinaEstadosAnimation->cambiaEstado("reposo");
		destruirAnimacion(nodo);
		//destruirAnimacion(animation);
		engine->cargarNuevaMalla(nodo, reposo->getPathAnimacion());
		break;
	case 'a': //andar
		//std::cout << "ANDAR" << std::endl;
		MaquinaEstadosAnimation->cambiaEstado("andar");
		destruirAnimacion(nodo);
		//destruirAnimacion(animation);
		//engine->cargarNuevaMalla(nodo, reposo->getEstado());
		engine->cargarNuevaAnimacion(nodo, andar->getPathAnimacion(), 25);
		break;
	case 'c': //correr
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

	//std::cout << "VALORS DE N: " << n << std::endl;
	//if (n != -1 && MaquinaEstadosAnimation->getEstadoActivo()->getEstado() != andar->getEstado())
	//{
	//	cambiarAnimacion('a');
	//}

	//std::cout << "VECTORES ACTU" << std::endl;
	//std::cout << "DIR: "<< glm::to_string(vecDir) << std::endl;
	//std::cout << "A: "<<glm::to_string(vecA) << std::endl;
	//std::cout << "S: "<< glm::to_string(vecS) << std::endl;
	//std::cout <<"D:"<< glm::to_string(vecD) << std::endl;


	if(n == -1)
	{
		entity->getCuerpo2D()->SetLinearVelocity(b2Vec2(0.0f, 0.0f));
		if (MaquinaEstadosAnimation->getEstadoActivo()->getEstado() != reposo->getEstado()) {
			//cambiarAnimacion('r');
		}
		if (recalculo == true)
		{
			//std::cout << "HORA DEL RECALCULO" << std::endl;
			asignarVectorDirector(vecDir, anguloCamara);
			setRecalculo(false);
		}
		engine->resetTransform(this->getNodo(), 'r');
		engine->rotarYPR(nodo, rotaton.y, 0.0f, 0.0f);
	}
	if (n == 0)
	{
		vel.Set(vecD.x, vecD.z);
		vel = velocity * vel;
		engine->resetTransform(nodo, 'r');
		engine->rotarYPR(nodo, anguloCamara - 90, 0.0f, 0.0f);
		//entity->getCuerpo2D()->SetLinearVelocity(b2Vec2(velocity, 0.0f));
	}
	if (n == 1)
	{
		vel.Set(vecA.x, vecA.z);
		vel = velocity * vel;
		engine->resetTransform(nodo, 'r');
		engine->rotarYPR(nodo, anguloCamara + 90, 0.0f, 0.0f);
		//entity->getCuerpo2D()->SetLinearVelocity(b2Vec2(-velocity, 0.0f));
	}
	if (n == 2)
	{
		vel.Set(vecS.x, vecS.z);
		vel = velocity * vel;
		engine->resetTransform(nodo, 'r');
		engine->rotarYPR(nodo, anguloCamara + 180, 0.0f, 0.0f);
		//entity->getCuerpo2D()->SetLinearVelocity(b2Vec2(0.0f, -velocity));
	}
	if (n == 3)
	{
		vel.Set(vecDir.x, vecDir.z);
		vel = velocity * vel;
		engine->resetTransform(nodo, 'r');
		engine->rotarYPR(nodo, anguloCamara, 0.0f, 0.0f);
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

void player::asignarVectorDirector(glm::vec3 u, float angle)
{
	vecDir = u;
	anguloCamara = angle;
	//std::cout << "ANGLEEEEE: " << angle << std::endl;
	//std::cout << angle + 90 << std::endl;
	//std::cout << angle + 180 << std::endl;
	//std::cout << angle - 90 << std::endl;
	float angulo = (90) * PI / 180;
	vecA = glm::vec3(vecDir.x * cos(angulo) - vecDir.z * sin(angulo),
					0, vecDir.x * sin(angulo) + vecDir.z * cos(angulo));
	angulo = (180) * PI / 180;
	vecS = glm::vec3(vecDir.x * cos(angulo) - vecDir.z * sin(angulo),
					0, vecDir.x * sin(angulo) + vecDir.z * cos(angulo));
	angulo = (- 90) * PI / 180;
	vecD = glm::vec3(vecDir.x * cos(angulo) - vecDir.z * sin(angulo),
					0, vecDir.x * sin(angulo) + vecDir.z * cos(angulo));
	//std::cout << "VECTORES" << std::endl;
	//std::cout << "DIR: "<< glm::to_string(vecDir) << std::endl;
	//std::cout << "A: "<<glm::to_string(vecA) << std::endl;
	//std::cout << "S: "<< glm::to_string(vecS) << std::endl;
	//std::cout <<"D:"<< glm::to_string(vecD) << std::endl;

}

void player::actualizarPosicion()
{	
	
//	std::cout << "POS ANTES DEL PUTO JUGADOR: " << glm::to_string(engine->getPosicion(nodo)) << std::endl;
	engine->resetTransform(this->getNodo(), 't');

	setPos(entity->getCuerpo2D()->GetPosition().x, this->getPos().y, -entity->getCuerpo2D()->GetPosition().y);
//	std::cout << "POS 2D DEL PUTO JUGADOR DEPSUES: " << entity->getCuerpo2D()->GetPosition().x << ", " << -entity->getCuerpo2D()->GetPosition().y << std::endl;
	engine->trasladar(this->getNodo(), entity->getCuerpo2D()->GetPosition().x, this->getPos().y, -entity->getCuerpo2D()->GetPosition().y);
//	std::cout << "POS DESPUES DEL PUTO JUGADOR: " << glm::to_string(engine->getPosicion(nodo)) << std::endl;

}

void player::iniciarTiempoImpulso() {

	temporizador = 4.0f;

}

void player::disminuirTem()
{
	temporizador -= 0.5f;
}

float player::getTemporizador()
{
	return temporizador;
}

void player::setImpulso(bool x)
{
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

void player::setTeclaE(bool x)
{
	teclaE = x;
}

void player::setTeclaQ(bool x)
{
	teclaQ = x;
}

bool player::getTeclaE()
{
	return teclaE;
}

bool player::getTeclaQ()
{
	return teclaQ;
}

void player::quitarVida(float damage)
{
	std::cout << std::endl;
	std::cout << "VIDA ANTES: " << vida << std::endl;
	vida -= damage;
	std::cout << std::endl;
	std::cout << "VIDA DESPUES: " << vida << std::endl;
}

void player::curar(float recup)
{
	vida += recup;
}

void player::usarBotiquin()
{
	Botiquines *bot = static_cast<Botiquines*>(inv->usarObjeto(0));
	if (bot != nullptr) {
		float dif = vidaMax - vida;
		if (dif >= bot->getVida()) {
			curar(bot->getVida());
			inv->deleteObj(bot);
		}
		else if (vida != vidaMax) {
			curar(dif);
			inv->deleteObj(bot);
		}
		else {
			std::cout << std::endl;
			std::cout << "TIENES LA VIDA MAX " << std::endl;
			std::cout << std::endl;
		}
	}
	else {
		std::cout << std::endl;
		std::cout << "NO TIENES BOTIQUINES " << std::endl;
		std::cout << std::endl;
	}
}

float player::getVida()
{
	return vida;
}

Inventario * player::getInventario()
{
	return inv;
}
