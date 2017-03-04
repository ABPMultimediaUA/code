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


MiContactListener::MiContactListener() {
}

MiContactListener::MiContactListener(const MiContactListener& orig) {
}

MiContactListener::~MiContactListener() {
}

void MiContactListener::actualizarPuerta(Entity2D* entity, int modo) {
	std::cout << "ACTUALIZO " << modo << std::endl;
	Puerta *puerta = static_cast<Puerta*>(entity->getObjeto3D());
	if (modo == 0 && puerta->getAbierta() == false) {
		//si tiene rotacion en Y van | sino van -
		puerta->abrirPuerta();
		puerta->setAbierta(true);

	}


	else if (modo == 1 && puerta->getAbierta() == true) {
		puerta->cerrarPuerta();
		puerta->setAbierta(false);

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

void MiContactListener::activarTerminar(Entity2D * pers, Entity2D * terminal)
{
	Personaje *personaje = static_cast<Personaje*>(pers->getObjeto3D());
	Terminal *ter = static_cast<Terminal*>(terminal->getObjeto3D());
	if(personaje->getTeclaE() == true) {

		if(ter->getEstado() == false) {
			ter->cambiarEstado(true);
			ter->cambiarColor();
		}

		else {
			ter->cambiarEstado(false);
			ter->cambiarColor();
		}

	}
}

void MiContactListener::aplicarImpulso(Entity2D* entity) {

	Personaje *pers = static_cast<Personaje*>(entity->getObjeto3D());
	float vel = 5000.0f;
	switch (pers->getDireccion()) {

	case 0:
		entity->getCuerpo2D()->ApplyForce(b2Vec2(-vel, 0.0f), entity->getCuerpo2D()->GetWorldCenter(), true);

		break;

	case 1:

		entity->getCuerpo2D()->ApplyForce(b2Vec2(vel, 0.0f), entity->getCuerpo2D()->GetWorldCenter(), true);

		break;

	case 2:

		entity->getCuerpo2D()->ApplyForce(b2Vec2(0.0f, -vel), entity->getCuerpo2D()->GetWorldCenter(), true);

		break;

	case 3:

		entity->getCuerpo2D()->ApplyForce(b2Vec2(0.0f, vel), entity->getCuerpo2D()->GetWorldCenter(), true);

		break;

	case 4:

		entity->getCuerpo2D()->ApplyForce(b2Vec2(-vel, -vel), entity->getCuerpo2D()->GetWorldCenter(), true);

		break;

	case 5:

		entity->getCuerpo2D()->ApplyForce(b2Vec2(-vel, vel), entity->getCuerpo2D()->GetWorldCenter(), true);

		break;

	case 6:

		entity->getCuerpo2D()->ApplyForce(b2Vec2(vel, vel), entity->getCuerpo2D()->GetWorldCenter(), true);

		break;

	case 7:

		entity->getCuerpo2D()->ApplyForce(b2Vec2(vel, -vel), entity->getCuerpo2D()->GetWorldCenter(), true);

		break;

	}

	//pers->setVelocidad();
	pers->actualizarPosicion();

}

void MiContactListener::BeginContact(b2Contact* contact) {
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

			//            Personaje *pers = static_cast<Personaje*>(entity1->getObjeto3D());

			// std::cout<<"ENTIDAD 1: "<<entity1->getIDEN()<<std::endl;
			//   std::cout<<"ENTIDAD 2: "<<entity2->getIDEN()<<std::endl;


			/* int a = *((int*)b1->GetUserData());
			int b = *((int*)b2->GetUserData());
			if(a == 1){
			std::cout<<"Personaje"<<std::endl;

			}*/
			/*
			std::cout<<"///////////////////////////////////"<<std::endl;
			std::cout<<"POSICION DE LA ENTITY 2"<<std::endl;
			std::cout<<"POS X: "<<entity2->getCuerpo2D()->GetPosition().x<<" POS Y: "<<entity2->getCuerpo2D()->GetPosition().y<<std::endl;
			std::cout<<"///////////////////////////////////"<<std::endl;
			*/

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


			if (entity1->getIDEN() == 0 && entity2->getIDEN() == 5 && f2->IsSensor() == true) {
				std::cout << "JASJAOSJAOS" << std::endl;
				this->activarTerminar(entity1, entity2);
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
				actualizarPuerta(entity2, 1);
			}



		}
	}
}

void MiContactListener::PostSolve(b2Contact* contact, const b2ContactImpulse* impulse) {

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
			aplicarImpulso(entity1);
			}

			else if(entity2->getIDEN() == 0){
			aplicarImpulso(entity2);

			}*/

			//if (entity1->getIDEN() == 0 && entity2->getIDEN() == 5 && f2->IsSensor() == true) {
			//	std::cout << "JASJAOSJAOS" << std::endl;
			//	this->activarTerminar(entity1, entity2);
			//}

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
			aplicarImpulso(entity1);
			}

			else if(entity2->getIDEN() == 0){
			aplicarImpulso(entity2);

			}*/


		}

	}
}


