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
#include "../Escenario/Camara.h"
#include "../Fisicas/Entity2D.h"
#include "../Escenario/readJson.h"
#include <Math.h>


#ifdef _IRR_WINDOWS_
#pragma comment(lib, "Irrlicht.lib")
#pragma comment(linker, "/subsystem:windows /ENTRY:mainCRTStartup")
#endif

Personaje::Personaje(ISceneManager* smgr, IVideoDriver* driver, b2World *world) {

    maya = smgr -> addCubeSceneNode(10); //se crea de tamanyo 10x10x10

    if (maya) {
        maya -> setMaterialFlag(EMF_LIGHTING, false);
        maya -> setPosition(vector3df(0, 10, 0));
        maya->setMaterialTexture(0, driver->getTexture("./textura/bruce.jpg"));
        //primer parametro del setVertexColors es de la maya que quieres cambiar el color y con su getMesh se consigue
        // smgr -> getMeshManipulator()->setVertexColors(cube->getMesh(), SColor(0, 0, 255, 128));//lus, R, G, B

    }


    vel = 100.0f;
    pos = maya->getPosition();
    entity = new Entity2D(world, pos, this);
    cargador = 30;
    tiempoDisparo = 0.0f;
    disparo = false;



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
    //delete(entity);
}

void Personaje::moverPersonaje(int modo, f32 dt) {

    //std::cout<<"//////////////////////////////////////////"<<std::endl;
    //            std::cout<<""<<std::endl;
    //            std::cout<<"POS PERS ANTES"<<std::endl;
    //                 std::cout<<"Pos 3D X: "<<pos.X<<"Pos 3D Z: "<<pos.Z<<std::endl;
    //                 std::cout<<"Pos 2D X: "<<entity->getCuerpo2D()->GetPosition().x<<"Pos 2D Z: "<<entity->getCuerpo2D()->GetPosition().y<<std::endl;

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
              std::cout<<"Pos2D X: "<<entity->getBody2D->GetPosition().x<<std::endl;*/

            break;

        case 1:

            /*  std::cout<<"case 1: Sntes"<<std::endl;
              std::cout<<"Pos X: "<<pos.X<<std::endl;
              std::cout<<"Pos2D X: "<<entity->getBody2D->GetPosition().x<<std::endl;*/

            entity->getCuerpo2D()->SetLinearVelocity(b2Vec2(-vel, 0.0f));
            pos.X = entity->getCuerpo2D()->GetPosition().x;

            /*std::cout<<"Des"<<std::endl;
             std::cout<<"Pos X: "<<pos.X<<std::endl;
             std::cout<<"Pos2D X: "<<entity->getBody2D->GetPosition().x<<std::endl;*/

            break;

        case 2:

            /*   std::cout<<"case 2: Sntes"<<std::endl;
              std::cout<<"Pos Z: "<<pos.Z<<std::endl;
              std::cout<<"Pos2D Z: "<<entity->getCuerpo2D()->GetPosition().y<<std::endl;*/

            entity->getCuerpo2D()->SetLinearVelocity(b2Vec2(0.0f, vel));
            pos.Z = entity->getCuerpo2D()->GetPosition().y;

            /*  std::cout<<"Des"<<std::endl;
              std::cout<<"Pos Z: "<<pos.Z<<std::endl;
              std::cout<<"Pos2D Z: "<<entity->getCuerpo2D()->GetPosition().y<<std::endl;*/

            break;

        case 3:

            /*   std::cout<<"case 3: Sntes"<<std::endl;
             std::cout<<"Pos Z: "<<pos.Z<<std::endl;
             std::cout<<"Pos2D Z: "<<entity->getCuerpo2D()->GetPosition().y<<std::endl;*/

            entity->getCuerpo2D()->SetLinearVelocity(b2Vec2(0.0f, -vel));
            pos.Z = entity->getCuerpo2D()->GetPosition().y;

            /* std::cout<<"Des"<<std::endl;
             std::cout<<"Pos Z: "<<pos.Z<<std::endl;
             std::cout<<"Pos2D Z: "<<entity->getCuerpo2D()->GetPosition().y<<std::endl;*/


            break;

            //W+D
        case 4:

            entity->getCuerpo2D()->SetLinearVelocity(b2Vec2(vel, vel));
            pos.X = entity->getCuerpo2D()->GetPosition().x;
            pos.Z = entity->getCuerpo2D()->GetPosition().y;


            break;

            //D+S
        case 5:
            entity->getCuerpo2D()->SetLinearVelocity(b2Vec2(vel, -vel));
            pos.X = entity->getCuerpo2D()->GetPosition().x;
            pos.Z = entity->getCuerpo2D()->GetPosition().y;
            break;

            //A+S
        case 6:

            entity->getCuerpo2D()->SetLinearVelocity(b2Vec2(-vel, -vel));
            pos.X = entity->getCuerpo2D()->GetPosition().x;
            pos.Z = entity->getCuerpo2D()->GetPosition().y;

            break;

            //A+W
        case 7:

            entity->getCuerpo2D()->SetLinearVelocity(b2Vec2(-vel, vel));
            pos.X = entity->getCuerpo2D()->GetPosition().x;
            pos.Z = entity->getCuerpo2D()->GetPosition().y;

            break;

    }
    //    std::cout<<"//////////////////////////////////////////"<<std::endl;
    //            std::cout<<""<<std::endl;
    //            std::cout<<"POS PERS DESPUES"<<std::endl;
    //                 std::cout<<"Pos 3D X: "<<pos.X<<"Pos 3D Z: "<<pos.Z<<std::endl;
    //                 std::cout<<"Pos 2D X: "<<entity->getCuerpo2D()->GetPosition().x<<"Pos 2D Z: "<<entity->getCuerpo2D()->GetPosition().y<<std::endl;



    direccion = modo;
    setPos(pos);
}

float Personaje::lanzarRayo(int modo) {
    return entity->rayCast(modo);
}

vector3df Personaje::getPos() {
    return pos;
}

vector3df Personaje::getRot() {
    return maya->getRotation();
}

void Personaje::setPos(vector3df pos) {
    maya->setPosition(pos);
}

float Personaje::getVel() {
    return vel;
}

int Personaje::getDireccion() {
    return direccion;
}

void Personaje::actualizarPosicion() {

    pos.X = entity->getCuerpo2D()->GetPosition().x;
    pos.Z = entity->getCuerpo2D()->GetPosition().y;

    setPos(pos);

}

void Personaje::setVelocidad() {

    entity->getCuerpo2D()->SetLinearVelocity(b2Vec2(0.0f, 0.0f));

}

void Personaje::rotar(vector3df raton) {

    float anguloRaton;
    anguloRaton = -atan2f(raton.X - 683, raton.Y - 384)*180 / 3.14; //pasar tamanyo pantalla por parametro

    //std::cout << "ANGULO: " << anguloRaton << std::endl;
    maya->setRotation(vector3df(0, anguloRaton + 90, 0));
    angulo = maya->getRotation();

    //    line3df linea = getRay

}

vector3df Personaje::getAngulo() {
    return angulo;
}

bool Personaje::getDisparo() {
    return disparo;
}

int Personaje::getCargador() {
    return cargador;
}

f32 Personaje::getTiempoDisparo() {
    return tiempoDisparo;
}

void Personaje::setCargador(int newCargador) {
    cargador = newCargador;
}

void Personaje::setDisparo(bool x) {
    disparo = x;
}

void Personaje::setTiempoDisparo(f32 t) {
    tiempoDisparo = t;
}

void Personaje::disparar(ISceneManager* smgr, IVideoDriver* driver, b2World *world, f32 dt, vector2df posRaton) {

    tiempoDisparo += dt;
    disparo = true;
    Bala *bullet = new Bala(smgr, driver, world, pos, posRaton);
    listaBalas.push_back(bullet);
    cargador--;
}

void Personaje::actualizarLista(f32 dt) {
    if (!listaBalas.empty()) {
        for (std::list<Bala*>::iterator it = listaBalas.begin(); it != listaBalas.end();) {
            if ((*it) != NULL) {
                if (!(*it)->estaViva()) {

                    delete(*it);
                    it = listaBalas.erase(it);
                } else
                    it++;
            } else
                it++;
        }

        for (std::list<Bala*>::iterator it = listaBalas.begin(); it != listaBalas.end(); it++) {
            if ((*it) != NULL && (*it)->estaViva() == true) {
                (*it)->mover(dt);
                //(*it)->update();
            }
        }
    }

}




