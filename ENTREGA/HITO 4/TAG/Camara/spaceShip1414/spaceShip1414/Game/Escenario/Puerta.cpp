/*
* To change this license header, choose License Headers in Project Properties.
* To change this template file, choose Tools | Templates
* and open the template in the editor.
*/

/*
* File:   Puerta.cpp
* Author: David
*
* Created on 15 de diciembre de 2016, 20:03
*/
#include <iostream>
#include "Puerta.h"
#include "../MaquinaEstados/FSM/Estados.h"
#include "../MaquinaEstados/FSM/MaquinaEstados.h"
#include "../Fisicas/Entity2D.h"
#include "../Fisicas\Mundo.h"
#include "../graphicEngine\TGraphicEngine.h"
#include "../graphicEngine\entityTree\TTransform.h"
#include "../graphicEngine\entityTree\TNodo.h"
#include "../graphicEngine\entityTree\TMalla.h"
#include "../graphicEngine\entityTree\TCamara.h"

#define VEL 200.0f

Puerta::Puerta(TGraphicEngine * motorApp, int ident, glm::vec3 posicion, glm::vec3 rotacion, glm::vec3 escala, std::string llave){
	
	id = ident;
	pos = posicion;
	rot = rotacion;
	escal = escala;
	posIni = posicion;

	rotation = motorApp->crearTransform();
	scale = motorApp->crearTransform();
	translation = motorApp->crearTransform();
	scale->escalar(escal.x, escal.y, escal.z);
	rotation->rotar(rot.x, 1.0f, 0.0f, 0.0f);
	rotation->rotar(rot.y, 0.0f, 1.0f, 0.0f);
	rotation->rotar(rot.z, 0.0f, 0.0f, 1.0f);
	translation->trasladar(pos.x, pos.y, pos.z);

	TNodo* nodoTransfRM = motorApp->crearNodo(motorApp->nodoRaiz(), rotation);
	TNodo* nodoTransfEM = motorApp->crearNodo(nodoTransfRM, scale);
	TNodo* nodoTransfTM = motorApp->crearNodo(nodoTransfEM, translation);
	nodoMalla = motorApp->crearNodo(nodoTransfTM, motorApp->crearMalla("resourse/models/untitled.obj"));

	abierta = false;
	limiteApX = pos.x + (escal.x / 2);
	limiteApZ = -(pos.z + (escal.z / 2));
	CERRADA = new Estados("CERRADA");
	ABIERTA = new Estados("ABIERTA");
	BLOQUEADA = new Estados("BLOQUEADA");
	BLOQLLAVE = new Estados("BLOQLLAVE");
	Maquina = new MaquinaEstados();
	Maquina->addEstado(CERRADA);
	Maquina->addEstado(ABIERTA);

	if(llave != "ABIERTA") {
		Maquina->addEstado(BLOQUEADA);
		Maquina->addEstado(BLOQLLAVE, true);
	}

	else {
		Maquina->addEstado(BLOQUEADA, true);
	}

	if(escal.x == 5 || escal.z == 5) {
		desfase = 15;
	}

	else {
		desfase = 30;
	}
	 //dependiendo de que string se le pase se inicia en un estado o otro
	llaveAsociada = llave;
	detectado = false;
	idDetect = -1;
}

Puerta::Puerta(const Puerta& orig) {
}

Puerta::~Puerta() {

	delete(scale);
	delete(rotation);
	delete(translation);
	delete entity;
	delete CERRADA;
	delete ABIERTA;
	delete BLOQLLAVE;
	delete BLOQUEADA;
	delete Maquina;
}

TTransform * Puerta::Rotation()
{
	return rotation;
}

TTransform * Puerta::Scale()
{
	return scale;
}

TTransform * Puerta::Translation()
{
	return translation;
}


glm::vec3 Puerta::getPosicion() {
	return pos;
}

glm::vec3 Puerta::getRotacion() {
	return rot;
}

glm::vec3 Puerta::getEscala() {
	return escal;
}

bool Puerta::getTotalAbierta() {
	return abierta;
}

bool Puerta::getAbierta() {
	return abrir;
}



void Puerta::setDetectado(bool x,int ident)
{

		detectado = x;
		idDetect = ident;
	
}

void Puerta::setAbierta() {
	if (detectado==true)
	{
		Maquina->cambiaEstado("ABIERTA");
	}
	
}

void Puerta::setCerrada()
{
	if (detectado==false)
	{
		Maquina->cambiaEstado("CERRADA");
	}
}

void Puerta::UpdateEstado()
{
	if (detectado == true)
	{
		if (Maquina->getEstadoActivo()->getEstado() == "BLOQLLAVE")
			//maya->getMaterial(0).EmissiveColor.set(0, 0, 180, 0);

		Maquina->cambiaEstado("ABIERTA");
	}

	if (detectado == false && abierta == true)
	{
		Maquina->cambiaEstado("CERRADA");
	}


}

bool Puerta::getDetectado()
{
	return detectado;
}

std::string Puerta::getEstado()
{
	return Maquina->getEstadoActivo()->getEstado();
}

std::string Puerta::getLlaveAsociada()
{
	return llaveAsociada;
}


void Puerta::setFisica(Mundo *world, int ident) {
	//std::cout<<"CREO PARED! "<<std::endl;

	entity = new Entity2D(world->getWorldBox2D(), pos, rot, escal, true, this,ident);

}

void Puerta::abrirPuerta() {


	//si tiene rotacion en Y van | sino van -


	if (escal.z != 1) {

		if (limiteApZ + desfase >entity->getCuerpo2D()->GetPosition().y)
		{
			entity->getCuerpo2D()->SetLinearVelocity(b2Vec2(0, VEL));
			pos.z = entity->getCuerpo2D()->GetPosition().y;
			//maya->setPosition(pos);
			translation->resetMatriz();
			translation->trasladar(pos.x, pos.y, -pos.z);
			

		}
		else
		{
			abierta = true;
			//std::cout << detectado << std::endl;
			entity->getCuerpo2D()->SetLinearVelocity(b2Vec2(0, 0));
			if (detectado == false)
			{
				Maquina->cambiaEstado("CERRADA");
			}
		}
	}

	else {
		
		if (limiteApX + desfase >entity->getCuerpo2D()->GetPosition().x)
		{
			entity->getCuerpo2D()->SetLinearVelocity(b2Vec2(VEL, 0.0f));
			pos.x = entity->getCuerpo2D()->GetPosition().x;
			translation->resetMatriz();
			translation->trasladar(pos.x, pos.y, pos.z);
		}
		else
		{
			abierta = true;
			//std::cout << detectado << std::endl;
			entity->getCuerpo2D()->SetLinearVelocity(b2Vec2(0, 0));

			if (detectado == false)
			{
				Maquina->cambiaEstado("CERRADA");
			}
		}
		//  entity->getSombraP2D()->SetLinearVelocity(b2Vec2(-vel, 0.0f));
		

	}


}

void Puerta::cerrarPuerta() {



	if (escal.z != 1) {

		if (limiteApZ + 2 < entity->getCuerpo2D()->GetPosition().y)
		{
			entity->getCuerpo2D()->SetLinearVelocity(b2Vec2(0, -VEL));
			pos.z = entity->getCuerpo2D()->GetPosition().y;
			translation->resetMatriz();
			translation->trasladar(pos.x, pos.y, -pos.z);
		

		}
		else
		{
			abierta = false;
			entity->getCuerpo2D()->SetLinearVelocity(b2Vec2(0, 0));

			//Maquina->cambiaEstado("BLOQUEADA");
		}
	}

	else {
		
		if (limiteApX - 2 < entity->getCuerpo2D()->GetPosition().x)
		{
			entity->getCuerpo2D()->SetLinearVelocity(b2Vec2(-VEL, 0.0f));
			pos.x = entity->getCuerpo2D()->GetPosition().x;
			translation->resetMatriz();
			translation->trasladar(pos.x, pos.y, pos.z);

		}
		else
		{
			abierta = false;
			entity->getCuerpo2D()->SetLinearVelocity(b2Vec2(0, 0));

			//Maquina->cambiaEstado("BLOQUEADA");

		}
		//  entity->getSombraP2D()->SetLinearVelocity(b2Vec2(-vel, 0.0f));


	}


}

void Puerta::Update()
{
	
	if (ABIERTA->getEstadoActivo())
	{
		std::cout << "UPDATE AB" << std::endl;

		this->abrirPuerta();
	}

	if (CERRADA->getEstadoActivo())
	{
		std::cout << "UPDATE CE" << std::endl;

		this->cerrarPuerta();
	}
	//std::cout << Maquina->getEstadoActivo()->getEstado() << " COMPLETA: " << abierta << " id: " << id << " idEn: " << entity->getId() << " Detect: " << idDetect << std::endl;
	
	
	if (BLOQUEADA->getEstadoActivo())
	{
		
	}

}