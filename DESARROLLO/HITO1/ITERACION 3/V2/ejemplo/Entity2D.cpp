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



//hacer diferentes constructores para los distintos objetos
Entity2D::Entity2D(b2World *world, vector3df pos) {
    
    mundo = world;
    bodyDef.type = b2_dynamicBody;
    bodyDef.position.Set(pos.X, pos.Z);
    bodyShape.SetAsBox(10, 10);
    body = world->CreateBody(&bodyDef);
    body -> CreateFixture(&bodyShape, 1.0f);
    
    body->SetUserData(this);
    iden = 0;
}

Entity2D::Entity2D(b2World* world, vector3df pos, vector3df rot){
         std::cout<<"CREO PARED CON ENTITY! "<<std::endl;

    bodyDef.type = b2_dynamicBody;
    bodyDef.position.Set(pos.X, pos.Z);
    //si tiene rotacion en Y van | sino van -
    if(rot.Y == 90){
        
        bodyShape.SetAsBox(5, 20);

    }
    
    else{
         bodyShape.SetAsBox(20, 5);

    }
   
   
    body = world->CreateBody(&bodyDef);
    body -> CreateFixture(&bodyShape, 1.0f);
    body->SetUserData(this);
    iden = 1;
}

Entity2D::Entity2D(const Entity2D& orig) {
}

Entity2D::~Entity2D() {
}

float Entity2D::rayCast(int modo){
  
    
    float rayo1, rayo2, resultado = 0;
    
    switch(modo){
        
        //D: 0 -> x++ al punto final hay que sumarle a la X
        case 0:
            std::cout<<"Posicion X: "<<body->GetPosition().x<<"Y: "<<body->GetPosition().y<<std::endl;

            rayo1 = rayCasting(b2Vec2(body->GetPosition().x, body->GetPosition().y), 
                    b2Vec2(body->GetPosition().x+1.0f, body->GetPosition().y));
            
            rayo2 = rayCasting(b2Vec2(body->GetPosition().x, body->GetPosition().y), 
                    b2Vec2(body->GetPosition().x+5.0f, body->GetPosition().y));
            
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
    mundo->RayCast(callback, inicio, fin);
    
}

b2Body* Entity2D::getCuerpo2D(){
    return body;
}

int Entity2D::getIDEN(){
    return iden;
}
