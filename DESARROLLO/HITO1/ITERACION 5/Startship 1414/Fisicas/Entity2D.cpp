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
#include "../Enemigos/Enemigo.h"

#define FILTRO_PERSONAJE 1
#define FILTRO_PARED 2
#define FILTRO_PUERTA 3
#define FILTRO_DISPAROPERS 4
#define FILTRO_DISPAROENE 5
#define FILTRO_ENEMIGO 6


#define FILTRO_PUERTAABIERTA 15



//hacer diferentes constructores para los distintos objetos
//constructor personaje
Entity2D::Entity2D(b2World *world, vector3df pos, void* dirPers,ISceneManager* smgr) {
    
    
    
    bodyDef.type = b2_dynamicBody;
    bodyDef.position.Set(pos.X, pos.Z);
    bodyShape.SetAsBox(5.0f, 5.0f);
    md.mass=50.0f;
    md.center=b2Vec2(3,3);
    md.I=0.0f;
    body = world->CreateBody(&bodyDef);
    body -> CreateFixture(&bodyShape, 1.0f);
    body->GetFixtureList()->SetFriction(10.0f);
    body->SetUserData(this);
    body->SetMassData(&md);
    
     /*
    sombraDef.type = b2_dynamicBody;
    sombraDef.position.Set(pos.X, pos.Z);
    sombraShape.SetAsBox(5.0f, 5.0f);
    sombraP= world->CreateBody(&sombraDef);
    sombraP -> CreateFixture(&sombraShape, 1.0f);
    sombraP->GetFixtureList()->SetFriction(10.0f);
    sombraP->SetUserData(this);
    sombraP->SetMassData(&md);*/
     filtro.groupIndex = FILTRO_PERSONAJE;
    body->GetFixtureList()->SetFilterData(filtro);
 //   sombraP->GetFixtureList()->SetFilterData(filtro);
    idenSh=0;
    
    
   /* fisica=smgr->addCubeSceneNode(10);
    fisica->setMaterialFlag(irr::video::EMF_WIREFRAME, true);
    fisica->setMaterialFlag(irr::video::EMF_BACK_FACE_CULLING,false);
    fisica->getMaterial(0).EmissiveColor.set(0,255,10,20);
    fisica->setPosition(vector3df(sombraP->GetPosition().x,10,sombraP->GetPosition().y));
    */
    iden = 0;
    objeto3D = dirPers;
    
}
//constructir pared

Entity2D::Entity2D(b2World* world, vector3df pos, vector3df rot, vector3df escala, void* dirPared){
       //  std::cout<<"CREO PARED CON ENTITY! "<<std::endl;

    bodyDef.type = b2_staticBody;
    bodyDef.position.Set(pos.X, pos.Z);
    
    //si tiene rotacion en Y van | sino van -
    // con la Y rotada y como esta escalado en X en unity hay que poner el escalado de X en la Y del body
   // std::cout<<"PARED: "<<this<<" ESCALA X: "<<escala.X<<" ESCALA Z: "<<escala.Z<<std::endl;
    if(rot.Y == 90){
        
        bodyShape.SetAsBox(5*escala.Z, 5*escala.X);
        
    }
    
    else{
         bodyShape.SetAsBox(5*escala.X, 5*escala.Z);

    }
    
    
    body = world->CreateBody(&bodyDef);
    body -> CreateFixture(&bodyShape, 1.0f);
    body->SetUserData(this);
    
    filtro.groupIndex = FILTRO_PARED;
    body->GetFixtureList()->SetFilterData(filtro);
   
    objeto3D = dirPared;
    iden = 1;
}

//constructir puerta
Entity2D::Entity2D(b2World* world, vector3df pos, vector3df rot, vector3df escala, bool sensor, void* dirPuerta){
        bodyDef.type = b2_staticBody;
    bodyDef.position.Set(pos.X, pos.Z);
    b2PolygonShape bodyShape2;
    //si tiene rotacion en Y van | sino van -
    // con la Y rotada y como esta escalado en X en unity hay que poner el escalado de X en la Y del body
    //std::cout<<"PUERTA: "<<this<<" ESCALA X: "<<escala.X<<" ESCALA Z: "<<escala.Z<<std::endl;
    if(rot.Y == 90){
        
        bodyShape.SetAsBox(50*escala.Z, 5*escala.X);
        bodyShape2.SetAsBox(5*escala.Z, 5*escala.X);
        
    }
    
    else{
         bodyShape.SetAsBox(5*escala.X, 50*escala.Z);
         bodyShape2.SetAsBox(5*escala.X, 5*escala.Z);
         

    }
   
    objeto3D = dirPuerta;
    body = world->CreateBody(&bodyDef);
    body -> CreateFixture(&bodyShape, 1.0f);
    body->GetFixtureList()->SetSensor(sensor);
    //std::cout<<"SENSOR: "<<body->GetFixtureList()->IsSensor()<<std::endl;
    body->SetUserData(this);
    body->CreateFixture(&bodyShape2, 1.0f);
    
    filtro.groupIndex = FILTRO_PUERTA;
//    body->GetFixtureList()->SetFilterData(filtro);
    iden = 2;
 for (b2Fixture* f = body->GetFixtureList(); f; f = f->GetNext()){
     f->SetFilterData(filtro);
     
  }
}
//constructor bala
Entity2D::Entity2D(b2World* world, vector3df pos, vector3df rot, bool vivo, void* dirBala){
    
   
    bodyDef.type = b2_dynamicBody;
    bodyDef.position.Set(pos.X, pos.Z);
   // bodyShape.SetAsBox(2, 2);
    bodyCircle.m_p.Set(0,0);
    bodyCircle.m_radius=1;
    body = world->CreateBody(&bodyDef);
    body -> CreateFixture(&bodyCircle, 1.0f);
    body ->SetBullet(true);
    body->SetUserData(this);
    iden = 3;
    live = vivo;
    filtro.groupIndex = FILTRO_DISPAROPERS;
    body->GetFixtureList()->SetFilterData(filtro);
    objeto3D = dirBala;
    
}

//constructor enemigo
Entity2D::Entity2D(b2World *world, vector3df pos, bool vivo, void* dirEnemigo,ISceneManager* smgr) {
    
    
    bodyDef.type = b2_dynamicBody;
    bodyDef.position.Set((pos.X), (pos.Z));
    bodyShape.SetAsBox(5.0f, 5.0f);
    md.mass=50.0f;
    md.center=b2Vec2(3,3);
    md.I=0.0f;
    body = world->CreateBody(&bodyDef);
    body -> CreateFixture(&bodyShape, 1.0f);
    live = vivo;
     body->GetFixtureList()->SetFriction(10.0f);
    body->SetUserData(this);
    body->SetMassData(&md);
    
    sombraDef.type = b2_kinematicBody;
    sombraDef.position.Set(pos.X, pos.Z);
    sombraShape.SetAsBox(6.0f, 6.0f);
    sombraE= world->CreateBody(&sombraDef);
    sombraE -> CreateFixture(&sombraShape, 1.0f);
    sombraE->GetFixtureList()->SetFriction(10.0f);
    sombraE->SetUserData(this);
    sombraE->SetMassData(&md);
    idenSh=1;
    filtro.groupIndex = FILTRO_ENEMIGO;
    body->GetFixtureList()->SetFilterData(filtro);
    
    fisica2=smgr->addCubeSceneNode(10);
    fisica2->setMaterialFlag(irr::video::EMF_WIREFRAME, true);
    fisica2->setMaterialFlag(irr::video::EMF_BACK_FACE_CULLING,false);
    fisica2->getMaterial(0).EmissiveColor.set(0,100,10,100);
    fisica2->setPosition(vector3df(sombraE->GetPosition().x,10,sombraE->GetPosition().y));
   
    iden = 4;
    objeto3D = dirEnemigo;
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

float Entity2D::rayCast(int modo){
  
    
    float resultado = 0;
    float rayo1, rayo2 = 0;
    switch(modo){
        
        //D: 0 -> x++ al punto final hay que sumarle a la X
        case 0:
            std::cout<<"TIPO ENTITY: "<<this->iden<<std::endl;
            std::cout<<"Posicion X: "<<body->GetPosition().x<<"Y: "<<body->GetPosition().y<<std::endl;
            std::cout<<"//////////////////////////////////////////"<<std::endl;
            std::cout<<""<<std::endl;

            rayo1 = rayCasting(b2Vec2(body->GetPosition().x, body->GetPosition().y), 
                    b2Vec2(body->GetPosition().x+50.0f, body->GetPosition().y));
            
           // rayo2 = rayCasting(b2Vec2(body->GetPosition().x, body->GetPosition().y), 
                  //  b2Vec2(body->GetPosition().x+500.0f, body->GetPosition().y));
            
            break;
        
        //A: 1 -> x-- al punto final hay que restarle a la X
        case 1:
            
            break;
        
        //W: 2 -> z++ al punto final hay que sumarle en Z (la y en 2D)
        case 2:
            
            break;
        
        //S: 3 -> z-- al punto final hay que restarle en Z (la y en 2D)
        case 3:
            
            break;
        
        //W+D: 4 -> x++ y z++ al punto final hay que sumarle en ambas coordenadas
        case 4:
            
            break;
        
        //S+D: 5 -> x++ y z-- al punto final hay que restarle en Z (Y) y sumarle en X    
        case 5:
            
            break;
        
        //S+A: 6 -> x-- y z-- al punto final hay que restarle en ambas coordenadas    
        case 6:
            
            break;
        
        //A+W: 7 -> x-- y z++ al punto final hay que restarle en X y sumarle en Z(Y)
        case 7:
            
            break;
    }
    
     if(rayo1!=0 && rayo2!=0){
                if(rayo1<rayo2){
                    resultado = rayo1;
                }
                else{
                    resultado = rayo2;
                }
            }
            
            else{
                if(rayo1>rayo2){
                    resultado = rayo1;
                }
                else{
                    resultado = rayo2;
                }
            }
    
    std::cout<<"Soy rayo1: "<<rayo1<<std::endl;
    std::cout<<"Soy rayo2: "<<rayo2<<std::endl;
    ////////////////////////////////////////////
    std::cout<<resultado<<std::endl;
    ////////////////////////////////////////////
    
    return resultado;
}


float Entity2D::rayCasting(b2Vec2 inicio, b2Vec2 fin){
  
    RayCastCallback *callback = new RayCastCallback();
    llamarCallBack(callback, inicio, fin);
    
    return callback->getDistancia();
    
}

float Entity2D::llamarCallBack(RayCastCallback* callback, b2Vec2 inicio, b2Vec2 fin){
    //mundo->RayCast(callback, inicio, fin);
    
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


b2Body* Entity2D::getSombraE2D(){
  //  std::cout<<"Sombra x: "<<sombra->GetPosition().x<<" Sombra z: "<<sombra->GetPosition().y<<std::endl;
   //  std::cout<<"Body x: "<<body->GetPosition().x<<" Body z: "<<body->GetPosition().y<<std::endl;
     if(fisica2!=NULL)
     {
        fisica2->setPosition(vector3df(sombraE->GetPosition().x,10, sombraE->GetPosition().y));
     }
    return sombraE;
}

int Entity2D::getIDEN(){
    return iden;
}
int Entity2D::getIDENSH(){
    return idenSh;
}

b2Body* Entity2D::getSombraP2D(){
  //  std::cout<<"Sombra x: "<<sombra->GetPosition().x<<" Sombra z: "<<sombra->GetPosition().y<<std::endl;
   //  std::cout<<"Body x: "<<body->GetPosition().x<<" Body z: "<<body->GetPosition().y<<std::endl;
     
     if(fisica!=NULL)
     {
        fisica->setPosition(vector3df(sombraP->GetPosition().x,10, sombraP->GetPosition().y));
     }
    return sombraP;
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
