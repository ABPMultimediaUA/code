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
    switch(modo){
        
        case 0:
   
            break;
            
        case 1:
            
            break;
            
        case 2:
            
            break;
            
        case 3:
            
            break;
            
        case 4:
            
            break;
            
        case 5:
            
            break;
            
        case 6:
            
            break;
            
        case 7:
            
            break;
    }
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
