/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Entity2D.cpp
 * Author: User
 * 
 * Created on 9 de diciembre de 2016, 15:52
 */
#include <iostream>
#include "Entity2D.h"


#define FILTRO_PERSONAJE 1
#define FILTRO_PARED 2
#define FILTRO_PUERTA 3
#define FILTRO_DISPAROPERS 4
#define FILTRO_DISPAROENE 5
#define FILTRO_ENEMIGO 6


#define FILTRO_PUERTAABIERTA 15



//hacer diferentes constructores para los distintos objetos
//constructor personaje
Entity2D::Entity2D(b2World *world, vector3df pos, void* dirPers) {
    
    
    bodyDef.type = b2_dynamicBody;
    bodyDef.position.Set(pos.X, pos.Z);
    bodyShape.SetAsBox(6, 6); //ratio de la mitad de la figura en 3d
    
    body = world->CreateBody(&bodyDef);
    body -> CreateFixture(&bodyShape, 1.0f);
    
    body->SetUserData(this);
    filtro.groupIndex = FILTRO_PERSONAJE;
    body->GetFixtureList()->SetFilterData(filtro);
    iden = 0;
    objeto3D = dirPers;
    
}



Entity2D::Entity2D(const Entity2D& orig) {
}

Entity2D::~Entity2D() {
    std::cout<<"ID DE LA ENTITY "<<iden<<std::endl;
    std::cout<<"MUERO ENTITY2D"<<std::endl;
    body->GetWorld()->DestroyBody(body); //así se tienen que borrar los objetos, no vale con la copia del puntero
    //mundo->DestroyBody(body);
//    body->SetUserData(NULL);
//    body = NULL;
    
}



void Entity2D::destruirFixture(){
    
   for (b2Fixture* f = body->GetFixtureList(); f; f ){
       
       if(f->IsSensor() == false ){
          
           b2Filter newFilter;
           newFilter.groupIndex = FILTRO_PUERTAABIERTA;
           f->SetFilterData(newFilter);
          // b2Fixture* destroyMe = f;
           
          // body->DestroyFixture(destroyMe);
       }
     f = f->GetNext();
  }
}

void Entity2D::crearFixture(){
        
   for (b2Fixture* f = body->GetFixtureList(); f; f ){
       
       if(f->IsSensor() == false ){
          
           b2Filter newFilter;
           newFilter.groupIndex = FILTRO_PUERTA;
           f->SetFilterData(newFilter);
          // b2Fixture* destroyMe = f;
           
          // body->DestroyFixture(destroyMe);
       }
     f = f->GetNext();
  }
}

b2Body* Entity2D::getCuerpo2D(){
    return body;
}

int Entity2D::getIDEN(){
    return iden;
}

bool Entity2D::getLive(){
    return live;
}

void Entity2D::setLive(bool x){
    live = x;
}

void* Entity2D::getObjeto3D(){
    return objeto3D;
}
