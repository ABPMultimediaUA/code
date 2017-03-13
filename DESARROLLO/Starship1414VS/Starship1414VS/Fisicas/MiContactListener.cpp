/*
* To change this license header, choose License Headers in Project Properties.
* To change this template file, choose Tools | Templates
* and open the template in the editor.
*/

/*
* File:   MiContactListener.cpp
* Author: David
*
* Created on 7 de diciembre de 2016, 11:27
*/
#include <Box2D\Box2D.h>
#include <iostream>
#include "../Escenario/Puerta.h"
#include "MiContactListener.h"
#include "../Jugador/Personaje.h"
#include "../Enemigos/Enemigo.h"
#include "Entity2D.h"
#include "../Escenario/Terminal.h"
#include "../Escenario/ObjConsumables/TiposDeMunicion/MunicionSubfusil.h"
#include "../Escenario/ObjConsumables/TiposDeMunicion/MunicionEscopeta.h"
#include "../Escenario/ObjConsumables/TiposDeMunicion/MunicionPistola.h"



MiContactListener::MiContactListener() {
	terActivado = false;
}

MiContactListener::MiContactListener(const MiContactListener& orig) {
}

MiContactListener::~MiContactListener() {
}

void MiContactListener::actualizarPuerta(Entity2D* entity, int modo) {
	std::cout << "ACTUALIZO " << modo << std::endl;

	Puerta *puerta = static_cast<Puerta*>(entity->getObjeto3D());

	if (modo == 0) {
		//si tiene rotacion en Y van | sino van -
		puerta->setDetectado(true,entity->getId());
		puerta->UpdateEstado();
	}	


	else if (modo == 1 ) {
		std::cout << "cerrar123" << std::endl;
		puerta->setDetectado(false,entity->getId());
		puerta->UpdateEstado();
	}

}

void MiContactListener::aplicarDamage(Entity2D* entity, Entity2D *bala) {

	Enemigo *ene = static_cast<Enemigo*>(entity->getObjeto3D()); //mirar el tema de hacer un cast dependiendo de la raza
	Bala *bullet = static_cast<Bala*>(bala->getObjeto3D());
	if (ene->getVida() > 0.0f) {
		ene->quitarVida(bullet->getDamage());
		if (ene->getVida() <= 0.0f) {
			entity->setLive(false);
		}
	}
}

void MiContactListener::activarTerminar(Entity2D * pers, Entity2D * terminal, bool actTer)
{
	
	Personaje *personaje = static_cast<Personaje*>(pers->getObjeto3D());
	Terminal *ter = static_cast<Terminal*>(terminal->getObjeto3D());
	if (actTer==true)
	{
		if (terActivado==false)
		{
			if (personaje->getTeclaE() == true) {

				if (ter->getEstado() == false) {
					ter->cambiarEstado(true);
					ter->cambiarColor();
					pers->setLive(false);
					terActivado=true;
					personaje->setTeclaE(false);
				}

			}
		}
		else
		{
			ter->cambiarColor();
			/* DESACTIVACIÓN POR DELTA TIME
			if (personaje->getTeclaE() == true) {

				ter->cambiarEstado(false);
				ter->cambiarColor();
				terActivado = false;

			}*/
		}
	}

}

void MiContactListener::gestionarObjeto(Entity2D * pers, Entity2D * objeto, int tipo)
{
	switch (tipo)
	{
	case 0:

		break;

	case 1:


		break;

	case 2:

		aumentarMunicionPistola(pers, objeto);

		break;

	case 3:
		aumentarMunicionSubfusil(pers, objeto);

		break;

	case 4:
		aumentarMunicionEscopeta(pers, objeto);

		break;


	default:
		break;
	}
}

void MiContactListener::aumentarMunicionPistola(Entity2D * pers, Entity2D * munPistola)
{
	std::cout << "" << std::endl;

	std::cout << "////////////////////////" << std::endl;
	std::cout << "AUMENTAR MUNICION DE PISTOLA" << std::endl;

	std::cout << "////////////////////////" << std::endl;
	std::cout << "" << std::endl;

	Personaje *personaje = static_cast<Personaje*>(pers->getObjeto3D());
	MunicionPistola *mun = static_cast<MunicionPistola*>(munPistola->getObjeto3D());


}

void MiContactListener::aumentarMunicionSubfusil(Entity2D * pers, Entity2D * munSubfisul)
{
	std::cout << "" << std::endl;

	std::cout << "////////////////////////" << std::endl;
	std::cout << "AUMENTAR MUNICION DE SUBFUSIL" << std::endl;

	std::cout << "////////////////////////" << std::endl;
	std::cout << "" << std::endl;
}

void MiContactListener::aumentarMunicionEscopeta(Entity2D * pers, Entity2D * munEscopeta)
{
	std::cout << "" << std::endl;

	std::cout << "////////////////////////" << std::endl;
	std::cout << "AUMENTAR MUNICION DE ESCOPETA" << std::endl;

	std::cout << "////////////////////////" << std::endl;
	std::cout << "" << std::endl;
}


void MiContactListener::BeginContact(b2Contact* contact) {
	std::cout<<""<<std::endl;

	std::cout<<"////////////////////////"<<std::endl;

	//std::cout<<"COLISION"<<std::endl;
	if (contact != NULL) {
		b2Fixture *f1 = contact->GetFixtureA();
		b2Fixture *f2 = contact->GetFixtureB();

		if (f1 != NULL && f2 != NULL) {
			b2Body *b1 = f1->GetBody();
			b2Body *b2 = f2->GetBody();

			void* bodyUserData1 = f1->GetBody()->GetUserData();
			void* bodyUserData2 = f2->GetBody()->GetUserData();

			Entity2D *entity1 = static_cast<Entity2D*>(bodyUserData1);
			Entity2D *entity2 = static_cast<Entity2D*>(bodyUserData2);

			//            Personaje *pers = static_cast<Personaje*>(entity1->getObjeto3D());

			 std::cout<<"ENTIDAD 1: "<<entity1->getIDEN()<<std::endl;
			   std::cout<<"ENTIDAD 2: "<<entity2->getIDEN()<<std::endl;


			/* int a = *((int*)b1->GetUserData());
			int b = *((int*)b2->GetUserData());
			if(a == 1){
			std::cout<<"Personaje"<<std::endl;

			}*/
			
			std::cout<<"///////////////////////////////////"<<std::endl;
			std::cout<<"POSICION DE LA ENTITY 2"<<std::endl;
			std::cout<<"POS X: "<<entity2->getCuerpo2D()->GetPosition().x<<" POS Y: "<<entity2->getCuerpo2D()->GetPosition().y<<std::endl;
			std::cout<<"///////////////////////////////////"<<std::endl;
			

			std::cout << "Sombra: " << entity1->getIDENSH() << " Elemento: " << entity2->getIDEN() << std::endl;


			//            if((entity2->getIDEN()==0 && entity2->getIDEN() == 4)&&(entity2->getIDEN()==4 && entity2->getIDEN() == 0))
			//            {
			//                if(entity1->getSombraE2D() != NULL){
			//                    std::cout<<"MEMORIA: "<<entity1->getSombraE2D()<<std::endl;
			//                    pers->setPos(vector3df(entity1->getSombraE2D()->GetPosition().x,10,entity1->getSombraE2D()->GetPosition().y));
			//                }
			//            }
			//            
			if (entity1->getIDEN() == 3 && f2->IsSensor() != true) {
				entity1->setLive(false);

			}

			else if (entity2->getIDEN() == 3 && f1->IsSensor() != true) {
				entity2->setLive(false);
			}

			//colision de enemigo y bala
			//3: bala; 4: enemigo
			if (entity1->getIDEN() == 3 && entity2->getIDEN() == 4) {
				//entity2->setLive(false);
				aplicarDamage(entity2, entity1);
				entity1->setLive(false);
			}

			else if (entity1->getIDEN() == 4 && entity2->getIDEN() == 3) {
				//entity1->setLive(false);              
				aplicarDamage(entity1, entity2);
				entity2->setLive(false);
			}

			if (entity1->getIDEN() == 2 && (entity2->getIDEN() == 0 || entity2->getIDEN() == 4) && f1->IsSensor() == true) {
				actualizarPuerta(entity1, 0);
			}

			else if (entity2->getIDEN() == 2 && (entity1->getIDEN() == 0 || entity1->getIDEN() == 4) && f2->IsSensor() == true) {
				actualizarPuerta(entity2, 0);
			}



			if (entity1->getIDEN() == 0 
				&& entity2->getIDEN() == 5 
				&& entity2->getId() != 5
				&& f2->IsSensor() == true) {
				
				gestionarObjeto(entity1, entity2, entity2->getId());
				
			}

		/*	else if (entity2->getIDEN() == 0 && entity1->getIDEN() == 5 && f1->IsSensor() == true) {
				std::cout << "HOLA PAPITO 2" << std::endl;
			}*/

		}
	}
}

void MiContactListener::EndContact(b2Contact* contact) {
	// std::cout<<"SALGO"<<std::endl;
	if (contact != NULL) {
		b2Fixture *f1 = contact->GetFixtureA();
		b2Fixture *f2 = contact->GetFixtureB();

		if (f1 != NULL && f2 != NULL) {
			b2Body *b1 = f1->GetBody();
			b2Body *b2 = f2->GetBody();

			void* bodyUserData1 = f1->GetBody()->GetUserData();
			void* bodyUserData2 = f2->GetBody()->GetUserData();

			Entity2D *entity1 = static_cast<Entity2D*>(bodyUserData1);
			Entity2D *entity2 = static_cast<Entity2D*>(bodyUserData2);
			/*
			std::cout<<"ENTIDAD 1: "<<entity1->getIDEN()<<std::endl;
			std::cout<<"ENTIDAD 2: "<<entity2->getIDEN()<<std::endl;

			int a = *((int*)b1->GetUserData());
			int b = *((int*)b2->GetUserData());
			if(a == 1){
			std::cout<<"Personaje"<<std::endl;

			}*/
			//            std::cout<<"///////////////////////////////////"<<std::endl;
			//            std::cout<<"POSICION DE LA ENTITY 2"<<std::endl;
			//            std::cout<<"POS X: "<<entity2->getCuerpo2D()->GetPosition().x<<" POS Y: "<<entity2->getCuerpo2D()->GetPosition().y<<std::endl;
			//            std::cout<<"///////////////////////////////////"<<std::endl;
		

			if (entity1->getIDEN() == 2 && entity2->getIDEN() == 0 && f1->IsSensor() == true) {
				
				actualizarPuerta(entity1, 1);
			}

			else if (entity2->getIDEN() == 2 && entity1->getIDEN() == 0 && f2->IsSensor() == true) {
				std::cout << "lalal " << std::endl;
				actualizarPuerta(entity2, 1);
			}


			

		}
	}
}

void MiContactListener::PostSolve(b2Contact* contact, const b2ContactImpulse* impulse) {
	//std::cout<<""<<std::endl;

	//std::cout<<"////////////////////////"<<std::endl;

	//std::cout<<"COLISION"<<std::endl;
	if (contact != NULL) {

		b2Fixture *f1 = contact->GetFixtureA();
		b2Fixture *f2 = contact->GetFixtureB();

		if (f1 != NULL && f2 != NULL) {

			b2Body *b1 = f1->GetBody();
			b2Body *b2 = f2->GetBody();

			void* bodyUserData1 = f1->GetBody()->GetUserData();
			void* bodyUserData2 = f2->GetBody()->GetUserData();

			Entity2D *entity1 = static_cast<Entity2D*>(bodyUserData1);
			Entity2D *entity2 = static_cast<Entity2D*>(bodyUserData2);
			/*
			std::cout<<"ENTIDAD 1: "<<entity1->getIDEN()<<std::endl;
			std::cout<<"ENTIDAD 2: "<<entity2->getIDEN()<<std::endl;


			if(entity1->getIDEN() == 0){
			
			}

			else if(entity2->getIDEN() == 0){
		

			}*/


			if (entity1->getIDEN() == 0 && entity2->getIDEN() == 5)
			{
				this->activarTerminar(entity1, entity2, true);

			}
	
			/*if (entity1->getIDEN() == 0 && entity2->getIDEN() == 5 && f2->IsSensor() == true) {
				
				this->activarTerminar(entity1, entity2);
			}*/

		}

	}

}

void MiContactListener::PreSolve(b2Contact* contact, const b2Manifold* oldManifold) {
	if (contact != NULL) {

		b2Fixture *f1 = contact->GetFixtureA();
		b2Fixture *f2 = contact->GetFixtureB();

		if (f1 != NULL && f2 != NULL) {

			b2Body *b1 = f1->GetBody();
			b2Body *b2 = f2->GetBody();

			void* bodyUserData1 = f1->GetBody()->GetUserData();
			void* bodyUserData2 = f2->GetBody()->GetUserData();

			Entity2D *entity1 = static_cast<Entity2D*>(bodyUserData1);
			Entity2D *entity2 = static_cast<Entity2D*>(bodyUserData2);

			/*     std::cout<<"ENTIDAD 1: "<<entity1->getIDEN()<<std::endl;
			std::cout<<"ENTIDAD 2: "<<entity2->getIDEN()<<std::endl;


			if(entity1->getIDEN() == 0){
			
			}

			else if(entity2->getIDEN() == 0){
			

			}*/


		}

	}
}


