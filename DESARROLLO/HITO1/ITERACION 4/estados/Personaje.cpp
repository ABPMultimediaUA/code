/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   Personaje.cpp
 * Author: User
 *
 * Created on 16 de noviembre de 2016, 15:41
 */

#include "Personaje.h"
#include "Camara.h"
#include <Math.h>

#ifdef _IRR_WINDOWS_
#pragma comment(lib, "Irrlicht.lib")
#pragma comment(linker, "/subsystem:windows /ENTRY:mainCRTStartup")
#endif

Personaje::Personaje(ISceneManager* smgr, IVideoDriver* driver, b2World *world) {

    maya = smgr -> addCubeSceneNode(10); //preguntar a Miguel Angel

    if (maya) {
        maya -> setMaterialFlag(EMF_LIGHTING, false);
        maya -> setPosition(vector3df(0, 0, 0));
        maya->setMaterialTexture(0, driver->getTexture("texture/bruce.jpg"));
        //primer parametro del setVertexColors es de la maya que quieres cambiar el color y con su getMesh se consigue
        // smgr -> getMeshManipulator()->setVertexColors(cube->getMesh(), SColor(0, 0, 255, 128));//lus, R, G, B

    }


    vel = 20.0f;
    pos = maya->getPosition();
    bodyDef.type = b2_dynamicBody;
    bodyDef.position.Set(0, 0);
    bodyShape.SetAsBox(10, 10);
    body = world->CreateBody(&bodyDef);
    body -> CreateFixture(&bodyShape, 1.0f);
    /* md.mass = 2.0;
     md.center = b2Vec2(5.0,5.0);
     md.I = 1.0;
     body->SetMassData(&md);*/

    /*std::cout<<"Tam X: "<<maya->getScale().X<<std::endl;
    std::cout<<"Tam Y: "<<maya->getScale().Y<<std::endl;
    std::cout<<"Tam Z: "<<maya->getScale().Z<<std::endl;
    std::cout<<"Pos X: "<<pos.X<<" Pos Y: "<<pos.Y<<" Pos Z: "<<pos.Z<<std::endl;*/


}

Personaje::Personaje(const Personaje& orig) {
}

Personaje::~Personaje() {
}

void Personaje::moverPersonaje(int modo, f32 dt) {


    switch (modo) {

        case 0:
            /* std::cout<<"case 0: Sntes"<<std::endl;
               std::cout<<"Pos X: "<<pos.X<<std::endl;
               std::cout<<"Pos2D X: "<<body->GetPosition().x<<std::endl;*/
            // body->ApplyForceToCenter(b2Vec2(5.0,0.0), true);

            body->SetLinearVelocity(b2Vec2(vel, 0.0f));
            pos.X = body->GetPosition().x;

            /* std::cout<<"Des"<<std::endl;
              std::cout<<"Pos X: "<<pos.X<<std::endl;
              std::cout<<"Pos2D X: "<<body->GetPosition().x<<std::endl;*/

            break;

        case 1:

            /*  std::cout<<"case 1: Sntes"<<std::endl;
              std::cout<<"Pos X: "<<pos.X<<std::endl;
              std::cout<<"Pos2D X: "<<body->GetPosition().x<<std::endl;*/

            body->SetLinearVelocity(b2Vec2(-vel, 0.0f));
            pos.X = body->GetPosition().x;

            /*std::cout<<"Des"<<std::endl;
             std::cout<<"Pos X: "<<pos.X<<std::endl;
             std::cout<<"Pos2D X: "<<body->GetPosition().x<<std::endl;*/

            break;

        case 2:

            /*   std::cout<<"case 2: Sntes"<<std::endl;
              std::cout<<"Pos Z: "<<pos.Z<<std::endl;
              std::cout<<"Pos2D Z: "<<body->GetPosition().y<<std::endl;*/

            body->SetLinearVelocity(b2Vec2(0.0f, vel));
            pos.Z = body->GetPosition().y;

            /*  std::cout<<"Des"<<std::endl;
              std::cout<<"Pos Z: "<<pos.Z<<std::endl;
              std::cout<<"Pos2D Z: "<<body->GetPosition().y<<std::endl;*/

            break;

        case 3:

            /*   std::cout<<"case 3: Sntes"<<std::endl;
             std::cout<<"Pos Z: "<<pos.Z<<std::endl;
             std::cout<<"Pos2D Z: "<<body->GetPosition().y<<std::endl;*/

            body->SetLinearVelocity(b2Vec2(0.0f, -vel));
            pos.Z = body->GetPosition().y;

            /* std::cout<<"Des"<<std::endl;
             std::cout<<"Pos Z: "<<pos.Z<<std::endl;
             std::cout<<"Pos2D Z: "<<body->GetPosition().y<<std::endl;*/


            break;

            //W+D
        case 4:

            body->SetLinearVelocity(b2Vec2(vel, vel));
            pos.X = body->GetPosition().x;
            pos.Z = body->GetPosition().y;


            break;

            //D+S
        case 5:
            body->SetLinearVelocity(b2Vec2(vel, -vel));
            pos.X = body->GetPosition().x;
            pos.Z = body->GetPosition().y;
            break;

            //A+S
        case 6:

            body->SetLinearVelocity(b2Vec2(-vel, -vel));
            pos.X = body->GetPosition().x;
            pos.Z = body->GetPosition().y;

            break;

            //A+W
        case 7:

            body->SetLinearVelocity(b2Vec2(-vel, vel));
            pos.X = body->GetPosition().x;
            pos.Z = body->GetPosition().y;

            break;

    }


    setPos(pos);
}

vector3df Personaje::getPos() {
    return pos;
}

void Personaje::setPos(vector3df pos) {
    maya->setPosition(pos);
}

float Personaje::getVel() {
    return vel;
}

void Personaje::setVelocidad() {

    body->SetLinearVelocity(b2Vec2(0.0f, 0.0f));

}

void Personaje::rotar(vector3df raton) {


    float angulo;

    angulo = atan2f(raton.X - pos.X, raton.Y - pos.Z)*180 / 3.14;

    maya->setRotation(vector3df(0, angulo + 90, 0));

    //    line3df linea = getRay
}
