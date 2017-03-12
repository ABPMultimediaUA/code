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

Puerta::Puerta(int ident, vector3df posicion, vector3df rotacion, vector3df escala, IMeshSceneNode *objeto){
	id = ident;
	pos = posicion;
	rot = rotacion;
	escal = escala;
	posIni = posicion;
	maya = objeto;
	abierta = false;
	limiteApX = this->getPosicion().X + (this->getEscala().X / 2);
	limiteApZ = this->getPosicion().Z + (this->getEscala().Z / 2);
	CERRADA = new Estados("CERRADA");
	ABIERTA = new Estados("ABIERTA");
	BLOQUEADA = new Estados("BLOQUEADA");
	Maquina = new MaquinaEstados();
	Maquina->addEstado(CERRADA);
	Maquina->addEstado(ABIERTA);
	Maquina->addEstado(BLOQUEADA, true);

	detectado = false;
	idDetect = -1;
}

Puerta::Puerta(const Puerta& orig) {
}

Puerta::~Puerta() {
}

vector3df Puerta::getPosicion() {
	return pos;
}

vector3df Puerta::getRotacion() {
	return rot;
}

vector3df Puerta::getEscala() {
	return escal;
}

bool Puerta::getTotalAbierta() {
	return abierta;
}

bool Puerta::getAbierta() {
	return abrir;
}

void Puerta::setPosicion(vector3df newPos) {
	pos = newPos;
}

void Puerta::setRotacion(vector3df newRot) {
	rot = newRot;
}

void Puerta::setEscala(vector3df newEscala) {
	escal = newEscala;
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
	if (detectado == true && id == idDetect)
	{
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


void Puerta::setFisica(b2World* world , ISceneManager* smgr,int ident) {
	//std::cout<<"CREO PARED! "<<std::endl;

	entity = new Entity2D(world, pos, rot, escal, true, this,smgr,ident);

}

void Puerta::abrirPuerta() {


	//si tiene rotacion en Y van | sino van -


	if (rot.Y == 90) {

		if (limiteApZ + 70>entity->getCuerpo2D()->GetPosition().y)
		{
			entity->getCuerpo2D()->SetLinearVelocity(b2Vec2(0, 20.0f));
			pos.Z = entity->getCuerpo2D()->GetPosition().y;
			maya->setPosition(pos);

		}
		else
		{
			abierta = true;
			std::cout << detectado << std::endl;
			if (detectado == false)
			{
				Maquina->cambiaEstado("CERRADA");
			}
		}
	}

	else {
		
		if (limiteApX+70>entity->getCuerpo2D()->GetPosition().x)
		{
			entity->getCuerpo2D()->SetLinearVelocity(b2Vec2(20.0f, 0.0f));
			pos.X = entity->getCuerpo2D()->GetPosition().x;
			maya->setPosition(pos);
		}
		else
		{
			abierta = true;
			std::cout << detectado << std::endl;
			if (detectado == false)
			{
				Maquina->cambiaEstado("CERRADA");
			}
		}
		//  entity->getSombraP2D()->SetLinearVelocity(b2Vec2(-vel, 0.0f));
		

	}


	//  if(entity->getCuerpo2D()->GetPosition().y >= y){
	//                    std::cout<<"ENTRO nAQUI"<<std::endl;
	//
	//            entity->getCuerpo2D()->SetLinearVelocity(b2Vec2(0.0f, -50000.0f));
	//            
	//            //pos.X = x;
	//            pos.Z = y;
	//            maya->setPosition(pos);
	//        //}


	//        switch(modo){
	//            
	//            case 0:
	//                        std::cout<<"ABRO: 0"<<std::endl;
	//
	//                    entity->getCuerpo2D()->SetLinearVelocity(b2Vec2(0.0f, -50000.0f));
	//                    pos.X = entity->getCuerpo2D()->GetPosition().x;
	//                    pos.Z = entity->getCuerpo2D()->GetPosition().y;
	//                    maya->setPosition(pos);
	//                            
	//                break;
	//                
	//            case 1:
	//                
	//                break;
	//                
	//        }



	//            std::cout<<"//////////////////////////////////////////"<<std::endl;
	//            std::cout<<""<<std::endl;
	//            std::cout<<"POS PUERTA"<<std::endl;
	//                 std::cout<<"Pos 3D X: "<<pos.X<<"Pos 3D Z: "<<pos.Z<<std::endl;
	//                 std::cout<<"Pos 2D X: "<<entity->getCuerpo2D()->GetPosition().x<<"Pos 2D Z: "<<entity->getCuerpo2D()->GetPosition().y<<std::endl;
}

void Puerta::cerrarPuerta() {



	if (rot.Y == 90) {

		if (limiteApZ-5<entity->getCuerpo2D()->GetPosition().y)
		{
			entity->getCuerpo2D()->SetLinearVelocity(b2Vec2(0, -20.0f));
			pos.Z = entity->getCuerpo2D()->GetPosition().y;
			maya->setPosition(pos);
		}
		else
		{
			abierta = false;
			
			//manejador.cambiaEstado("BLOQUEADA");
		}
	}

	else {
		
		if (limiteApX-5<entity->getCuerpo2D()->GetPosition().x)
		{
			entity->getCuerpo2D()->SetLinearVelocity(b2Vec2(-20.0f, 0.0f));
			pos.X = entity->getCuerpo2D()->GetPosition().x;
			maya->setPosition(pos);
		}
		else
		{
			abierta = false;
			
	//		manejador.cambiaEstado("BLOQUEADA");

		}
		//  entity->getSombraP2D()->SetLinearVelocity(b2Vec2(-vel, 0.0f));


	}


	//    entity->getCuerpo2D()->SetLinearVelocity(b2Vec2(0.0f, 50000.0f));
	//            //pos.X = x;
	//            pos.Z = y;
	//            maya->setPosition(pos);
	//        
	//    std::cout<<"//////////////////////////////////////////"<<std::endl;
	//            std::cout<<""<<std::endl;
	//            std::cout<<"POS PUERTA"<<std::endl;
	//                 std::cout<<"Pos 3D X: "<<pos.X<<"Pos 3D Z: "<<pos.Z<<std::endl;
	//                 std::cout<<"Pos 2D X: "<<entity->getCuerpo2D()->GetPosition().x<<"Pos 2D Z: "<<entity->getCuerpo2D()->GetPosition().y<<std::endl;

	//            switch(modo){
	//            
	//            case 0:
	//                   std::cout<<"Cierro: 0"<<std::endl;
	//
	//                    entity->getCuerpo2D()->SetLinearVelocity(b2Vec2(0.0f, -50000.0f));
	//                    pos.X = entity->getCuerpo2D()->GetPosition().x;
	//                    pos.Z = entity->getCuerpo2D()->GetPosition().y;
	//                    maya->setPosition(pos);
	//                            
	//                break;
	//                
	//            case 1:
	//                
	//                break;
	//                
	//        }
	//    
	//            std::cout<<"//////////////////////////////////////////"<<std::endl;
	//            std::cout<<""<<std::endl;
	//            std::cout<<"POS PUERTA"<<std::endl;
	//                 std::cout<<"Pos 3D X: "<<pos.X<<"Pos 3D Z: "<<pos.Z<<std::endl;
	//                 std::cout<<"Pos 2D X: "<<entity->getCuerpo2D()->GetPosition().x<<"Pos 2D Z: "<<entity->getCuerpo2D()->GetPosition().y<<std::endl;
	//    
}

void Puerta::Update()
{
	

	if (ABIERTA->getEstadoActivo()&&id==idDetect)
	{
		this->abrirPuerta();
	}

	if (CERRADA->getEstadoActivo()&&id==idDetect)
	{
		this->cerrarPuerta();
	}
	std::cout << Maquina->getEstadoActivo()->getEstado() << " COMPLETA: " << abierta << " id: " << id << " idEn: " << entity->getId() << " Detect: " << idDetect << std::endl;
	
	
	if (BLOQUEADA->getEstadoActivo())
	{
		
	}

}