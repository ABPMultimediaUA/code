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
#include "MiContactListener.h"
#include <Box2D.h>
#include <iostream>
#include "escenario/Puerta.h"
#include "Personaje.h"
#include "Juego.h"
#include "CAppReceiver.h"
#include "LLave.h"
#include "Objeto.h"

extern Juego *game;
extern CAppReceiver *tecladou;

MiContactListener::MiContactListener() {
    
}

MiContactListener::MiContactListener(const MiContactListener& orig) {
}

MiContactListener::~MiContactListener() {
}

void MiContactListener::actualizarPuerta(Entity2D* entitypu, Entity2D* entityper, int modo){
                std::cout<<"ACTUALIZO "<<modo<<std::endl;
  Puerta *puerta = static_cast<Puerta*>(entitypu->getObjeto3D());
  Personaje *per= static_cast<Personaje*>(entityper->getObjeto3D());
    if(modo == 0){
            //si tiene rotacion en Y van | sino van -
        per->p=puerta;
        per->ultp=puerta;
            
    }
    
    
    else{
        per->p=NULL;
       
    }
    
}

void MiContactListener::aplicarImpulso(Entity2D* entity){
    
    Personaje *pers = static_cast<Personaje*>(entity->getObjeto3D());
    float vel = 5000.0f;
    switch(pers->getDireccion()){
        
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
            
            entity->getCuerpo2D()->ApplyForce(b2Vec2(-vel,vel), entity->getCuerpo2D()->GetWorldCenter(), true);
            
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

void MiContactListener::BeginContact(b2Contact* contact){
       std::cout<<""<<std::endl;

       std::cout<<"////////////////////////"<<std::endl;

   std::cout<<"COLISION"<<std::endl;
   
   if(contact != NULL){
    b2Fixture *f1 = contact->GetFixtureA();
    b2Fixture *f2 = contact->GetFixtureB();
 
    if(f1!= NULL && f2!= NULL){
        b2Body *b1 = f1->GetBody();
        b2Body *b2 = f2->GetBody();

        void* bodyUserData1 = f1->GetBody()->GetUserData();
            void* bodyUserData2 = f2->GetBody()->GetUserData();

        Entity2D *entity1 = static_cast<Entity2D*>(bodyUserData1);
        Entity2D *entity2 = static_cast<Entity2D*>(bodyUserData2);

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

            if(entity1->getIDEN() == 3 ){
                entity1->setLive(false);
                
            }

            else if(entity2->getIDEN() == 3){
                entity2->setLive(false);
            }

            
            //std::cout<<tecladop.isKeyDown(irr::KEY_KEY_A)<<std::endl;
            
            if(entity1->getIDEN() == 2 && entity2->getIDEN() == 0 && f1->IsSensor() == true){
                actualizarPuerta(entity1, entity2, 0);
            }
            
            
            
            else if(entity2->getIDEN() == 2 && entity1->getIDEN() == 0 && f2->IsSensor() == true){
                
                actualizarPuerta(entity2, entity1, 0);
            }
    
            if(entity1->getIDEN() == 7 && entity2->getIDEN() == 0){
                Personaje *per= static_cast<Personaje*>(entity2->getObjeto3D());
                Objeto *o=static_cast<Objeto*>(entity1->getObjeto3D());
                if(o->id==2){
                per->llaves++;
                o->Actualizar();
                std::cout<<"El jugador ha cogido la llave"<<std::endl;
                }
            }
            
            
            
            else if(entity2->getIDEN() == 7 && entity1->getIDEN() == 0){
                Personaje *per= static_cast<Personaje*>(entity1->getObjeto3D());
                Objeto *o=static_cast<Objeto*>(entity2->getObjeto3D());
                if(o->id==2){
                per->llaves++;
                o->Actualizar();
                std::cout<<"El jugador ha cogido la llave"<<std::endl;
                }
                //a base de añadir ifs al id del objeto, se pueden implementar los demás objetos
                if(o->id==3){
                    std::cout<<"El jugador ha cogido el objeto 3"<<std::endl;
                }
            }
            
    }
   }
}

void MiContactListener::EndContact(b2Contact* contact){
        std::cout<<"SALGO"<<std::endl;
 if(contact != NULL){
    b2Fixture *f1 = contact->GetFixtureA();
    b2Fixture *f2 = contact->GetFixtureB();
 
    if(f1!= NULL && f2!= NULL){
        b2Body *b1 = f1->GetBody();
        b2Body *b2 = f2->GetBody();

        void* bodyUserData1 = f1->GetBody()->GetUserData();
            void* bodyUserData2 = f2->GetBody()->GetUserData();

        Entity2D *entity1 = static_cast<Entity2D*>(bodyUserData1);
        Entity2D *entity2 = static_cast<Entity2D*>(bodyUserData2);

        std::cout<<"ENTIDAD 1: "<<entity1->getIDEN()<<std::endl;
            std::cout<<"ENTIDAD 2: "<<entity2->getIDEN()<<std::endl;

       /* int a = *((int*)b1->GetUserData());
        int b = *((int*)b2->GetUserData());
        if(a == 1){
                std::cout<<"Personaje"<<std::endl;

        }*/
//            std::cout<<"///////////////////////////////////"<<std::endl;
//            std::cout<<"POSICION DE LA ENTITY 2"<<std::endl;
//            std::cout<<"POS X: "<<entity2->getCuerpo2D()->GetPosition().x<<" POS Y: "<<entity2->getCuerpo2D()->GetPosition().y<<std::endl;
//            std::cout<<"///////////////////////////////////"<<std::endl;

            
            if(entity1->getIDEN() == 2 && entity2->getIDEN() == 0 && f1->IsSensor() == true){
                actualizarPuerta(entity1, entity2, 1);
            }
            
            else if(entity2->getIDEN() == 2 && entity1->getIDEN() == 0 && f2->IsSensor() == true){
                actualizarPuerta(entity2, entity1, 1);
            }
    
    }
   }
}

void MiContactListener::PostSolve(b2Contact* contact, const b2ContactImpulse* impulse){
    
    if(contact != NULL){
        
        b2Fixture *f1 = contact->GetFixtureA();
        b2Fixture *f2 = contact->GetFixtureB();
 
    if(f1!= NULL && f2!= NULL){
        
        b2Body *b1 = f1->GetBody();
        b2Body *b2 = f2->GetBody();
        
        void* bodyUserData1 = f1->GetBody()->GetUserData();
        void* bodyUserData2 = f2->GetBody()->GetUserData();

        Entity2D *entity1 = static_cast<Entity2D*>(bodyUserData1);
        Entity2D *entity2 = static_cast<Entity2D*>(bodyUserData2);

//        std::cout<<"ENTIDAD 1: "<<entity1->getIDEN()<<std::endl;
//        std::cout<<"ENTIDAD 2: "<<entity2->getIDEN()<<std::endl;
        
        
        if(entity1->getIDEN() == 0){
            aplicarImpulso(entity1);
        }
        
        else if(entity2->getIDEN() == 0){
            aplicarImpulso(entity2);

        }
        
    }
        
    }
    
}

void MiContactListener::PreSolve(b2Contact* contact, const b2Manifold* oldManifold){
    
}


