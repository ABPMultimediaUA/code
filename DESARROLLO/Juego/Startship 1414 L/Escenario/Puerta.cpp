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

Puerta::Puerta(vector3df posicion, vector3df rotacion, vector3df escala, IMeshSceneNode *objeto) {
    
    pos = posicion;
    rot = rotacion;
    escal = escala;
    posIni = posicion;
    maya = objeto;
    abierta = false;
    conllave=true;
    estado=0;
    
    
}

Puerta::Puerta(const Puerta& orig) {
}

Puerta::~Puerta() {
}

vector3df Puerta::getPosicion(){
    return pos;
}

vector3df Puerta::getRotacion(){
    return rot;
}

vector3df Puerta::getEscala(){
    return escal;
}

bool Puerta::getAbierta(){
    return abierta;
}

bool Puerta::getConllave(){
    return conllave;
}

int Puerta::getEstado(){
    return estado;
}

void Puerta::setPosicion(vector3df newPos){
    pos = newPos;
}

void Puerta::setRotacion(vector3df newRot){
    rot = newRot;
}

void Puerta::setEscala(vector3df newEscala){
    escal = newEscala;
}

void Puerta::setAbierta(bool x){
    abierta = x;
}

void Puerta::setConllave(bool x){
    conllave=x;
}

void Puerta::setEstado(int x){
    estado=x;
}

void Puerta::setFisica(b2World* world){
     //std::cout<<"CREO PARED! "<<std::endl;

    entity = new Entity2D(world, pos, rot, escal, true, this);
    
}

void Puerta::abrirPuerta(){
    entity->getCuerpo2D()->SetAwake(true);
        std::cout<<"ABRO"<<std::endl;
                    //si tiene rotacion en Y van | sino van -

        if(rot.Y ==90){
            std::cout<<"PUERTS ROTADA"<<std::endl;

            pos.Z -= 80;
                   entity->getCuerpo2D()->SetLinearVelocity(b2Vec2(0,10));
        }
        
        else{
            std::cout<<"PUERTS NO ROTADA"<<std::endl;

            //pos.X += 80;
            entity->getCuerpo2D()->SetLinearVelocity(b2Vec2(10,0));
            
            
            std::cout<<entity->getCuerpo2D()->GetLinearVelocity().x<<std::endl;
        } 
   //entity->destruirFixture();      
  //maya->setPosition(pos);
        float xp=entity->getCuerpo2D()->GetPosition().x;
  float zp=entity->getCuerpo2D()->GetPosition().y;
  //float prueba[3]= {xp, 0, zp};
  irr::core::vector3d<float> vec;
  vec.set(xp,10,zp);
  maya->setPosition(vec);
  pos=vec;
  estado=1;
  abierta=true;
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

void Puerta::cerrarPuerta(){
    std::cout<<"CIERRO"<<std::endl;
    
        if(rot.Y ==90){
            std::cout<<"PUERTS ROTADA"<<std::endl;

            pos.Z += 80;
                  entity->getCuerpo2D()->SetLinearVelocity(b2Vec2(0,-10));
        }
        
        else{
            std::cout<<"PUERTS NO ROTADA"<<std::endl;

            pos.X -= 80;
             entity->getCuerpo2D()->SetLinearVelocity(b2Vec2(-10,0));
        } 
   //entity->crearFixture();      
  //maya->setPosition(pos);
    float xp=entity->getCuerpo2D()->GetPosition().x;
  float zp=entity->getCuerpo2D()->GetPosition().y;
  //float prueba[3]= {xp, 0, zp};
  irr::core::vector3d<float> vec;
  vec.set(xp,10,zp);
  maya->setPosition(vec);    
  pos=vec;
  estado=2;
  abierta=false;
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

void Puerta::Update(){
    if(estado==1){//abriendo
        if(posIni.X+40<pos.X||posIni.Z+40<pos.Z){
            entity->getCuerpo2D()->SetLinearVelocity(b2Vec2(0,0));
            estado=0;
            
        }
        else{
            //std::cout<<pos.X<<std::endl;
            float xp=entity->getCuerpo2D()->GetPosition().x;
  float zp=entity->getCuerpo2D()->GetPosition().y;
  //float prueba[3]= {xp, 0, zp};
  irr::core::vector3d<float> vec;
  vec.set(xp,10,zp);
  maya->setPosition(vec);    
  pos=vec;
        }
    }
    else if(estado==2){//cerrando
        if(posIni.X>pos.X||posIni.Z>pos.Z){
            entity->getCuerpo2D()->SetLinearVelocity(b2Vec2(0,0));
            estado=0;
        }
        else{
            float xp=entity->getCuerpo2D()->GetPosition().x;
  float zp=entity->getCuerpo2D()->GetPosition().y;
  //float prueba[3]= {xp, 0, zp};
  irr::core::vector3d<float> vec;
  vec.set(xp,10,zp);
  maya->setPosition(vec);    
  pos=vec;
        }
    }
}