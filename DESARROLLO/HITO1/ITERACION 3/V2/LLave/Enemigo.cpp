/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Enemigo.cpp
 * Author: Iván
 * 
 * Created on 29 de noviembre de 2016, 17:52
 */

#include "Enemigo.h"

#include <Math.h>

#ifdef _IRR_WINDOWS_
#pragma comment(lib, "Irrlicht.lib")
#pragma comment(linker, "/subsystem:windows /ENTRY:mainCRTStartup")
#endif

Enemigo::Enemigo(ISceneManager* smgr, IVideoDriver* driver, b2World *world, vector3df posicion) {
    
    maya = smgr -> addCubeSceneNode(10); //preguntar a Miguel Angel
    
    if (maya) {
    
        maya -> setPosition(posicion);//vector3df(0, 10, 40)
        maya->getMaterial(0).EmissiveColor.set(0,128,0,20);
        //primer parametro del setVertexColors es de la maya que quieres cambiar el color y con su getMesh se consigue
        // smgr -> getMeshManipulator()->setVertexColors(cube->getMesh(), SColor(0, 0, 255, 128));//lus, R, G, B

    }


    vel = 20.0f;
    velRapida = 30.0f;
    pos = maya->getPosition();
    entity = new Entity2D(world, pos, true, this);
    estado=4;
    estPatrulla=0;
  

    
}

Enemigo::Enemigo(const Enemigo& orig) {
}

Enemigo::~Enemigo() {
}

void Enemigo::mover(int modo, f32 dt) {
//std::cout<<"//////////////////////////////////////////"<<std::endl;
//            std::cout<<""<<std::endl;
//            std::cout<<"POS ENE ANTES"<<std::endl;
//                 std::cout<<"Pos 3D X: "<<pos.X<<" Pos 3D Y: "<<pos.Y<<" Pos 3D Z: "<<pos.Z<<std::endl;

    switch (modo) {

        case 0:
            /* std::cout<<"case 0: Sntes"<<std::endl;
               std::cout<<"Pos X: "<<pos.X<<std::endl;
               std::cout<<"Pos2D X: "<<body->GetPosition().x<<std::endl;*/
            // body->ApplyForceToCenter(b2Vec2(5.0,0.0), true);

            entity->getCuerpo2D()->SetLinearVelocity(b2Vec2(vel, 0.0f));
            pos.X = entity->getCuerpo2D()->GetPosition().x;

            /* std::cout<<"Des"<<std::endl;
              std::cout<<"Pos X: "<<pos.X<<std::endl;
              std::cout<<"Pos2D X: "<<body->GetPosition().x<<std::endl;*/

            break;

        case 1:

            /*  std::cout<<"case 1: Sntes"<<std::endl;
              std::cout<<"Pos X: "<<pos.X<<std::endl;
              std::cout<<"Pos2D X: "<<body->GetPosition().x<<std::endl;*/

            entity->getCuerpo2D()->SetLinearVelocity(b2Vec2(-vel, 0.0f));
            pos.X = entity->getCuerpo2D()->GetPosition().x;

            /*std::cout<<"Des"<<std::endl;
             std::cout<<"Pos X: "<<pos.X<<std::endl;
             std::cout<<"Pos2D X: "<<body->GetPosition().x<<std::endl;*/

            break;

        case 2:

            /*   std::cout<<"case 2: Sntes"<<std::endl;
              std::cout<<"Pos Z: "<<pos.Z<<std::endl;
              std::cout<<"Pos2D Z: "<<body->GetPosition().y<<std::endl;*/

            entity->getCuerpo2D()->SetLinearVelocity(b2Vec2(0.0f, vel));
            pos.Z = entity->getCuerpo2D()->GetPosition().y;

            /*  std::cout<<"Des"<<std::endl;
              std::cout<<"Pos Z: "<<pos.Z<<std::endl;
              std::cout<<"Pos2D Z: "<<body->GetPosition().y<<std::endl;*/

            break;

        case 3:

            /*   std::cout<<"case 3: Sntes"<<std::endl;
             std::cout<<"Pos Z: "<<pos.Z<<std::endl;
             std::cout<<"Pos2D Z: "<<body->GetPosition().y<<std::endl;*/

            entity->getCuerpo2D()->SetLinearVelocity(b2Vec2(0.0f, -vel));
            pos.Z = entity->getCuerpo2D()->GetPosition().y;

            /* std::cout<<"Des"<<std::endl;
             std::cout<<"Pos Z: "<<pos.Z<<std::endl;
             std::cout<<"Pos2D Z: "<<body->GetPosition().y<<std::endl;*/


            break;

//            std::cout<<"//////////////////////////////////////////"<<std::endl;
//            std::cout<<""<<std::endl;
//            std::cout<<"POS ENE DESPUES"<<std::endl;
//           std::cout<<"Pos 3D X: "<<pos.X<<" Pos 3D Y: "<<pos.Y<<" Pos 3D Z: "<<pos.Z<<std::endl;


   

    }


    setPos(pos);
}

void Enemigo::moverRapido(int modo, f32 dt) {


    switch (modo) {

        case 0:
            /* std::cout<<"case 0: Sntes"<<std::endl;
               std::cout<<"Pos X: "<<pos.X<<std::endl;
               std::cout<<"Pos2D X: "<<body->GetPosition().x<<std::endl;*/
            // body->ApplyForceToCenter(b2Vec2(5.0,0.0), true);

            entity->getCuerpo2D()->SetLinearVelocity(b2Vec2(velRapida, 0.0f));
            pos.X = entity->getCuerpo2D()->GetPosition().x;

            /* std::cout<<"Des"<<std::endl;
              std::cout<<"Pos X: "<<pos.X<<std::endl;
              std::cout<<"Pos2D X: "<<body->GetPosition().x<<std::endl;*/

            break;

        case 1:

            /*  std::cout<<"case 1: Sntes"<<std::endl;
              std::cout<<"Pos X: "<<pos.X<<std::endl;
              std::cout<<"Pos2D X: "<<body->GetPosition().x<<std::endl;*/

            entity->getCuerpo2D()->SetLinearVelocity(b2Vec2(-velRapida, 0.0f));
            pos.X = entity->getCuerpo2D()->GetPosition().x;

            /*std::cout<<"Des"<<std::endl;
             std::cout<<"Pos X: "<<pos.X<<std::endl;
             std::cout<<"Pos2D X: "<<body->GetPosition().x<<std::endl;*/

            break;

        case 2:

            /*   std::cout<<"case 2: Sntes"<<std::endl;
              std::cout<<"Pos Z: "<<pos.Z<<std::endl;
              std::cout<<"Pos2D Z: "<<body->GetPosition().y<<std::endl;*/

            entity->getCuerpo2D()->SetLinearVelocity(b2Vec2(0.0f, velRapida));
            pos.Z = entity->getCuerpo2D()->GetPosition().y;

            /*  std::cout<<"Des"<<std::endl;
              std::cout<<"Pos Z: "<<pos.Z<<std::endl;
              std::cout<<"Pos2D Z: "<<body->GetPosition().y<<std::endl;*/

            break;

        case 3:

            /*   std::cout<<"case 3: Sntes"<<std::endl;
             std::cout<<"Pos Z: "<<pos.Z<<std::endl;
             std::cout<<"Pos2D Z: "<<body->GetPosition().y<<std::endl;*/

            entity->getCuerpo2D()->SetLinearVelocity(b2Vec2(0.0f, -velRapida));
            pos.Z = entity->getCuerpo2D()->GetPosition().y;

            /* std::cout<<"Des"<<std::endl;
             std::cout<<"Pos Z: "<<pos.Z<<std::endl;
             std::cout<<"Pos2D Z: "<<body->GetPosition().y<<std::endl;*/


            break;

           

    }


    setPos(pos);
}

vector3df Enemigo::getPos() {
    return pos;
}

void Enemigo::setPos(vector3df pos) {
    maya->setPosition(pos);
}

float Enemigo::getVel() {
    return vel;
}

void Enemigo::setVelocidad() {

    entity->getCuerpo2D()->SetLinearVelocity(b2Vec2(0.0f, 0.0f));

}



void Enemigo::Cambiar(int nuevo){
  
      
          estado=nuevo;
   
} 

void Enemigo::Update(Personaje *pers){
    
    switch(estado){
        case 1: //perseguir
            this->Perseguir(pers);
            break;
        case 2: //huir
            this->Alejarse(pers);
            break;
        case 3: //irapunto
            this->Irapunto();
            break;
        case 4: //patrullar
            this->Patrullar();
            break;
        case 5:
            this->PatrullarCorriendo();
            break;
    }
}

void Enemigo::Perseguir(Personaje* pers){
    vector3df vj=pers->getPos();
    vector3df ve=this->getPos();
    if(vj.X>ve.X){
        this->mover(0,1);//que hacer con dt???
    }
    else {
        this->mover(1,1);
    }
    
    if(vj.Z>ve.Z){
        this->mover(2,1);
    }
    else{
        this->mover(3,1);
    }
    
}

void Enemigo::Alejarse(Personaje* pers){
    vector3df vj=pers->getPos();
    vector3df ve=this->getPos();
    if(vj.X<ve.X){
        this->mover(0,1);//que hacer con dt???
    }
    else {
        this->mover(1,1);
    }
    
    if(vj.Z<ve.Z){
        this->mover(2,1);
    }
    else{
        this->mover(3,1);
    }
    
}

void Enemigo::Irapunto(){
    
     vector3df vo=vector3df(60.0f,0.0f,50.0f);
    vector3df ve=this->getPos();
    if(vo.X>ve.X){
        this->mover(0,1);//que hacer con dt???
    }
    else {
        this->mover(1,1);
    }
    
    if(vo.Z>ve.Z){
        this->mover(2,1);
    }
    else{
        this->mover(3,1);
    }
    
}

void Enemigo::Patrullar(){
    
    //this->Irapunto(); //va a p1
    vector3df p1=vector3df(60.0f,0.0f,50.0f);
    vector3df p2=vector3df(-20.0f,0.0f,50.0f);
    vector3df ve=this->getPos();
   
    
     //se mueve de p1 a p2 y viceversa, en bucle
        if(p2.X >= ve.X){
            estPatrulla=1;
        }
    
    if(p1.X <= ve.X){
        estPatrulla=0;
    }
    if(estPatrulla)
            this->mover(0,1);//derecha
        else 
            this->mover(1,1); //izquierda
       
        //std::cout<<h<<std::endl;
        //std::cout<<ve.X<<std::endl;
    
    
}

void Enemigo::PatrullarCorriendo(){
    
    //this->Irapunto(); //va a p1
    vector3df p1=vector3df(60.0f,0.0f,50.0f);
    vector3df p2=vector3df(-20.0f,0.0f,50.0f);
    vector3df ve=this->getPos();
   
    
     //se mueve de p1 a p2 y viceversa, en bucle
        if(p2.X >= ve.X){
            estPatrulla=1;
        }
    
    if(p1.X <= ve.X){
        estPatrulla=0;
    }
    if(estPatrulla)
            this->moverRapido(0,1);//derecha
        else 
            this->moverRapido(1,1); //izquierda
       
}