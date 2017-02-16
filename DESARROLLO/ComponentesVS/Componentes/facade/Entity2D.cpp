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
#include "../framework/vector3G.h"

#define FILTRO_PERSONAJE 1
#define FILTRO_PARED 2
#define FILTRO_PUERTA 3
#define FILTRO_DISPAROPERS 4
#define FILTRO_DISPAROENE 5

//hacer diferentes constructores para los distintos objetos
Entity2D::Entity2D(b2World *world, vector3G pos) {
	bodyDef.type = b2_dynamicBody;
	bodyDef.position.Set(pos.getX(), pos.getZ());
	bodyShape.SetAsBox(10, 10);
	body = world->CreateBody(&bodyDef);
	body->CreateFixture(&bodyShape, 1.0f);

	body->SetUserData(this);
	filtro.groupIndex = FILTRO_PERSONAJE;
	body->GetFixtureList()->SetFilterData(filtro);
	iden = 0;
}

Entity2D::Entity2D(b2World* world, vector3G pos, vector3G rot, vector3G escala) {
	bodyDef.type = b2_staticBody;
	bodyDef.position.Set(pos.getX(), pos.getZ());

	//si tiene rotacion en Y van | sino van -
	// con la Y rotada y como esta escalado en X en unity hay que poner el escalado de X en la Y del body
	// std::cout<<"PARED: "<<this<<" ESCALA X: "<<escala.X<<" ESCALA Z: "<<escala.Z<<std::endl;
	if (rot.getY() == 90) {
		bodyShape.SetAsBox(5 * escala.getZ(), 5 * escala.getX());
	}
	else {
		bodyShape.SetAsBox(5 * escala.getX(), 5 * escala.getZ());
	}

	body = world->CreateBody(&bodyDef);
	body->CreateFixture(&bodyShape, 1.0f);
	body->SetUserData(this);

	filtro.groupIndex = FILTRO_PARED;
	body->GetFixtureList()->SetFilterData(filtro);

	iden = 1;
}

Entity2D::Entity2D(b2World* world, vector3G pos, vector3G rot, vector3G escala, bool sensor) {
	bodyDef.type = b2_staticBody;
	bodyDef.position.Set(pos.getX(), pos.getZ());

	//si tiene rotacion en Y van | sino van -
	// con la Y rotada y como esta escalado en X en unity hay que poner el escalado de X en la Y del body
	//std::cout<<"PUERTA: "<<this<<" ESCALA X: "<<escala.X<<" ESCALA Z: "<<escala.Z<<std::endl;
	if (rot.getY() == 90) {
		bodyShape.SetAsBox(10 * escala.getZ(), 5 * escala.getX());
	}
	else {
		bodyShape.SetAsBox(5 * escala.getX(), 10 * escala.getZ());
	}

	body = world->CreateBody(&bodyDef);
	body->CreateFixture(&bodyShape, 1.0f);
	body->GetFixtureList()->SetSensor(sensor);
	//std::cout<<"SENSOR: "<<body->GetFixtureList()->IsSensor()<<std::endl;
	body->SetUserData(this);
	filtro.groupIndex = FILTRO_PUERTA;
	body->GetFixtureList()->SetFilterData(filtro);
	iden = 2;
}

Entity2D::Entity2D(b2World* world, vector3G pos, vector3G rot, bool vivo) {
	bodyDef.type = b2_dynamicBody;
	bodyDef.position.Set(pos.getX(), pos.getZ());
	bodyShape.SetAsBox(2, 2);
	body = world->CreateBody(&bodyDef);
	body->CreateFixture(&bodyShape, 1.0f);
	body->SetBullet(true);
	body->SetUserData(this);
	iden = 3;
	live = vivo;
	filtro.groupIndex = FILTRO_DISPAROPERS;
	body->GetFixtureList()->SetFilterData(filtro);
}

Entity2D::Entity2D(const Entity2D& orig) {
}

Entity2D::~Entity2D() {
	body->GetWorld()->DestroyBody(body); //así se tienen que borrar los objetos, no vale con la copia del puntero   
}

//float Entity2D::rayCast(int modo){
//  
//    
//    float resultado = 0;
//    float rayo1, rayo2 = 0;
//    switch(modo){
//        
//        //D: 0 -> x++ al punto final hay que sumarle a la X
//        case 0:
//            std::cout<<"TIPO ENTITY: "<<this->iden<<std::endl;
//            std::cout<<"Posicion X: "<<body->GetPosition().x<<"Y: "<<body->GetPosition().y<<std::endl;
//            std::cout<<"//////////////////////////////////////////"<<std::endl;
//            std::cout<<""<<std::endl;
//
//            rayo1 = rayCasting(b2Vec2(body->GetPosition().x, body->GetPosition().y), 
//                    b2Vec2(body->GetPosition().x+50.0f, body->GetPosition().y));
//            
//           // rayo2 = rayCasting(b2Vec2(body->GetPosition().x, body->GetPosition().y), 
//                  //  b2Vec2(body->GetPosition().x+500.0f, body->GetPosition().y));
//            
//            break;
//        
//        //A: 1 -> x-- al punto final hay que restarle a la X
//        case 1:
//            
//            break;
//        
//        //W: 2 -> z++ al punto final hay que sumarle en Z (la y en 2D)
//        case 2:
//            
//            break;
//        
//        //S: 3 -> z-- al punto final hay que restarle en Z (la y en 2D)
//        case 3:
//            
//            break;
//        
//        //W+D: 4 -> x++ y z++ al punto final hay que sumarle en ambas coordenadas
//        case 4:
//            
//            break;
//        
//        //S+D: 5 -> x++ y z-- al punto final hay que restarle en Z (Y) y sumarle en X    
//        case 5:
//            
//            break;
//        
//        //S+A: 6 -> x-- y z-- al punto final hay que restarle en ambas coordenadas    
//        case 6:
//            
//            break;
//        
//        //A+W: 7 -> x-- y z++ al punto final hay que restarle en X y sumarle en Z(Y)
//        case 7:
//            
//            break;
//    }
//    
//     if(rayo1!=0 && rayo2!=0){
//                if(rayo1<rayo2){
//                    resultado = rayo1;
//                }
//                else{
//                    resultado = rayo2;
//                }
//            }
//            
//            else{
//                if(rayo1>rayo2){
//                    resultado = rayo1;
//                }
//                else{
//                    resultado = rayo2;
//                }
//            }
//    
//    std::cout<<"Soy rayo1: "<<rayo1<<std::endl;
//    std::cout<<"Soy rayo2: "<<rayo2<<std::endl;
//    ////////////////////////////////////////////
//    std::cout<<resultado<<std::endl;
//    ////////////////////////////////////////////
//    
//    return resultado;
//}
//
//
//float Entity2D::rayCasting(b2Vec2 inicio, b2Vec2 fin){
//  
//    RayCastCallback *callback = new RayCastCallback();
//    llamarCallBack(callback, inicio, fin);
//    
//    return callback->getDistancia();
//    
//}
//
//float Entity2D::llamarCallBack(RayCastCallback* callback, b2Vec2 inicio, b2Vec2 fin){
//    mundo->RayCast(callback, inicio, fin);
//    
//}

b2Body* Entity2D::getCuerpo2D() {
	return body;
}

int Entity2D::getIDEN() {
	return iden;
}

bool Entity2D::getLive() {
	return live;
}

void Entity2D::setLive(bool x) {
	live = x;
}
