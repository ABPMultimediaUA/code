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
}


Entity2D::Entity2D(const Entity2D& orig) {
}

Entity2D::~Entity2D() {
}

float Entity2D::rayCast(int modo){
    /*    float ray1 = RayCasting( b2Vec2(m_position.x-1.4, m_position.y-1.4), b2Vec2(m_position.x-1.4, m_position.y-1.4-ray_distance) );
    float ray2 = RayCasting( b2Vec2(m_position.x+1.4, m_position.y-1.4), b2Vec2(m_position.x+1.4, m_position.y-1.4-ray_distance) );
    
    float result=0;
    
    if(ray1!=0 && ray2!=0){
        if(ray1<ray2){
            result = ray1;
        }else{
            result = ray2;
        }
    }else{
        if(ray1>ray2){
            result = ray1;
        }else{
            result = ray2;
        }
    }
   // std::cout<<"Soy rayo1: "<<ray1<<std::endl;
    //std::cout<<"Soy rayo2: "<<ray2<<std::endl;
    ////////////////////////////////////////////
    //std::cout<<result<<std::endl;
    ////////////////////////////////////////////
    return result;*/
    
    float rayo1, rayo2, resultado = 0;
    
    switch(modo){
        
        //D: 0 -> x++ al punto final hay que sumarle a la X
        case 0:
            rayo1 = rayCasting(b2Vec2(body->GetPosition().x, body->GetPosition().y), 
                    b2Vec2(body->GetPosition().x+5.0f, body->GetPosition().y));
            
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
    
    return resultado;
}


float Entity2D::rayCasting(b2Vec2 inicio, b2Vec2 fin){
    /*//Creates the callback and sets the origin height
    RayCastCallback* callback = new RayCastCallback();
    callback->SetZ(m_position.z);
    callback->SetVolume(volume);
    //std::cout<<volume<<std::endl;
    
    //Sets the ray in the world
    Facade2D::CreateRay(callback, _start, _end);
    
    return callback->m_fraction;*/
    
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
