/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Juego.cpp
 * Author: Hector
 * 
 * Created on 19 de diciembre de 2016, 22:22
 */
#include <irrlicht.h>
#include <Box2D.h>
#include <iostream>


#include "CAppReceiver.h"
#include "Personaje.h"
#include "Escenario/Escenario.h"
#include "Camara.h"
#include "readJson.h"
#include "MiContactListener.h"
#include "MyContactFilter.h"
#include "Enemigo.h"
#include "Juego.h"

#define ANCHO 640
#define LARGO 480

using namespace irr;

using namespace core;
using namespace scene;
using namespace video;
using namespace io;
using namespace gui;

#ifdef _IRR_WINDOWS_
#pragma comment(lib, "Irrlicht.lib")
#pragma comment(linker, "/subsystem:windows /ENTRY:mainCRTStartup")
#endif


Juego::Juego() {
    device= createDevice(video::EDT_OPENGL, dimension2d<u32>(ANCHO, LARGO), 16, false, false, false, &teclado);
    driver = device->getVideoDriver();
    smgr = device->getSceneManager();
    guienv = device->getGUIEnvironment();
    world = new b2World(gravity);
    contactListenerInstance =  new MiContactListener();
    filtroContact = new MyContactFilter();
    gravity.Set(0.0f, 0.0f);
    
    world->SetContactListener(contactListenerInstance);
    world->SetContactFilter(filtroContact);
    
    device->setWindowCaption(L"Movimiento del personaje");
    
      
    device->setWindowCaption(L"Movimiento del personaje");

    IVideoDriver* driver = device->getVideoDriver();
    ISceneManager* smgr = device->getSceneManager(); //grafo de la escena(controlador)
    IGUIEnvironment* guienv = device->getGUIEnvironment(); //hacer intrerfaces de usuario

    guienv->addStaticText(L"Movimiento del personaje",
            rect<s32>(10, 10, 260, 22), true); //metodo para poner algo por pantalla
    //cambiar la camara activa smgr->setActiveCamera(camera);

    pers = new Personaje(smgr, driver, world); //el cubo que se crea es de 10x10x10 10px = 1m
    esce = new Escenario(smgr, driver, world);
    ene = new Enemigo(smgr, driver, world, vector3df(0,10,40));
    lla= new LLave(smgr,driver,world,vector3df(10,10,50));
    
    json = new readJson(esce);
    cam = new Camara(smgr, pers->getPos());
    
    then = device->getTimer()->getTime();
    
    this->loopJuego();
    
    device->drop();
}

Juego::Juego(const Juego& orig) {
}

Juego::~Juego() {
}

CAppReceiver Juego::GetTeclado(){
    return teclado;
}

void Juego::loopJuego()
{
    int up=300;
    int i=0;
    while (device->run()) {

        if (device->isWindowActive()) {


            const u32 now = device->getTimer()->getTime();
            const f32 dt = (f32) (now - then) / 1000.f;
            //float distancia;
            world->Step(dt, 6, 2); //1.0f/60.0f
            world->ClearForces();
            
                   if(teclado.isKeyDown(irr::KEY_KEY_J)){
                ene->Cambiar(1);
            }
            else if(teclado.isKeyDown(irr::KEY_KEY_K)){
                ene->Cambiar(2);
            }
            else if(teclado.isKeyDown(irr::KEY_KEY_L)){
                ene->Cambiar(3);
            }
            else if(teclado.isKeyDown(irr::KEY_KEY_P)){
                ene->Cambiar(4);
            }
            else if(teclado.isKeyDown(irr::KEY_KEY_O)){
                ene->Cambiar(5);
            }
            
            i++;
            guienv->clear();
           
            if(pers->p!=NULL){
              //  guienv->addStaticText(L"Pulsa la tecla I para abrir/cerrar la puerta",
            //rect<s32>(pers->getPos().X, pers->getPos().Z, pers->getPos().X+10, pers->getPos().Z+10), false);
                 IGUIStaticText* tex=guienv->addStaticText(L"Pulsa la tecla I para abrir/cerrar la puerta",
            rect<s32>(320, 240, 420, 260), true,true);
                tex->setOverrideColor(video::SColor(255,255,255,255));
                tex->setBackgroundColor(video::SColor(120,0,0,0));
                pers->p->Update();
                
            }
            
            if(pers->ultp!=NULL){
                if(pers->ultp->estado!=0){
                    pers->ultp->Update();
                }
            }
            
            
            if(teclado.isKeyDown(irr::KEY_KEY_I)&&i>up){
                
                pers->ModPuerta();
                i=0;
                
            }
            
            if(lla!=NULL&&!lla->getEntity()->getLive()){
                delete(lla);
                lla=NULL;
            }
            
            ene->Update(pers);
            

            if (teclado.isKeyUp(irr::KEY_KEY_D) || teclado.isKeyUp(irr::KEY_KEY_A) || teclado.isKeyUp(irr::KEY_KEY_W) || teclado.isKeyUp(irr::KEY_KEY_S)) {
                pers->setVelocidad();
            }

            if (teclado.isKeyDown(irr::KEY_KEY_W) && teclado.isKeyDown(irr::KEY_KEY_D)) {

                pers->moverPersonaje(4, dt);
                            cam->actualizarCamara(pers->getPos(), pers->getRot(), dt);

                //cam->actualizarCamara(0, dt);
                //cam->actualizarCamara(2, dt);
            } else if (teclado.isKeyDown(irr::KEY_KEY_S) && teclado.isKeyDown(irr::KEY_KEY_D)) {

                pers->moverPersonaje(5, dt);
                            cam->actualizarCamara(pers->getPos(), pers->getRot(), dt);

               // cam->actualizarCamara(0, dt);
                //cam->actualizarCamara(3, dt);

            } else if (teclado.isKeyDown(irr::KEY_KEY_S) && teclado.isKeyDown(irr::KEY_KEY_A)) {

                pers->moverPersonaje(6, dt);
                            cam->actualizarCamara(pers->getPos(), pers->getRot(), dt);

               // cam->actualizarCamara(1, dt);
               // cam->actualizarCamara(3, dt);


            } else if (teclado.isKeyDown(irr::KEY_KEY_A) && teclado.isKeyDown(irr::KEY_KEY_W)) {

                pers->moverPersonaje(7, dt);
                            cam->actualizarCamara(pers->getPos(), pers->getRot(), dt);

               // cam->actualizarCamara(1, dt);
               // cam->actualizarCamara(2, dt);


            }// X + and -
            else if (teclado.isKeyDown(irr::KEY_KEY_D)) {

                    pers->moverPersonaje(0, dt);
                                cam->actualizarCamara(pers->getPos(), pers->getRot(), dt);

                 //   cam->actualizarCamara(0, dt);
              
            } 
               
            else if (teclado.isKeyDown(irr::KEY_KEY_A)) {

                pers->moverPersonaje(1, dt);
                            cam->actualizarCamara(pers->getPos(), pers->getRot(), dt);

                //cam->actualizarCamara(1, dt);

            }//Z + and -
            else if (teclado.isKeyDown(irr::KEY_KEY_W)) {

                pers->moverPersonaje(2, dt);
                            cam->actualizarCamara(pers->getPos(), pers->getRot(), dt);

                //cam->actualizarCamara(2, dt);
            } else if (teclado.isKeyDown(irr::KEY_KEY_S)) {

                pers->moverPersonaje(3, dt);
                            cam->actualizarCamara(pers->getPos(), pers->getRot(), dt);

                //cam->actualizarCamara(3, dt);

            }
            //recarga
            if(teclado.isKeyDown(irr::KEY_KEY_R)){
                pers->setCargador(30);
            }

                           // cam->actualizarCamara(pers->getPos(), pers->getRot(), dt);

            //RATON
            vector3df mousePosition;
            // Create a ray through the mouse cursor.
            line3df ray = smgr->getSceneCollisionManager()->getRayFromScreenCoordinates(teclado.GetMouseState().Position, smgr->getActiveCamera());
            // And intersect the ray with a plane around the node facing towards the camera.
            plane3df plane(mousePosition, vector3df(0, 0, -1));
            bool ok = plane.getIntersectionWithLine(ray.start, ray.getVector(), mousePosition);
            mousePosition.X = teclado.GetMouseState().Position.X;
            mousePosition.Y = teclado.GetMouseState().Position.Y;
            pers->rotar(mousePosition);
            if(teclado.isKeyDown(irr::KEY_KEY_E)){
             std::cout<<"//////////////////////////////////////////"<<std::endl;
            std::cout<<""<<std::endl;
            std::cout<<"POS RATON"<<std::endl;
                 std::cout<<"PosX: "<<mousePosition.X<<"PosY: "<<mousePosition.Y<<std::endl;
            }
            if (teclado.GetMouseState().LeftButtonDown && pers->getDisparo() == false) {
                //tiempoDisparo += dt;
                
                //pers -> disparar(dt,ok);
                //disparo = true;
                //Bala *bullet = new Bala(smgr, driver, world, pers, vector2df(teclado.GetMouseState().Position.X, teclado.GetMouseState().Position.Y));
                //listaBalas.push_back(bullet);
                //  }
                // }
                
                if(pers->getCargador() >= 0){
                    pers->disparar(smgr, driver, world, dt, vector2df(mousePosition.X, mousePosition.Y));

                }
            }
            

            if(pers->getDisparo() == true){
                pers->setTiempoDisparo(pers->getTiempoDisparo()+dt);
                if(pers->getTiempoDisparo() >= 0.2){
                    pers->setDisparo(false);
                    pers->setTiempoDisparo(0);
                }
            }
            
            
            
             if (ok) {
    
                 pers->actualizarLista(dt);
               
            }
            
            
            then = now;

            driver->beginScene(true, true, SColor(255, 100, 101, 140)); //se usa para hacer el render

            smgr->drawAll(); //dibuja todo el grafo

            guienv->drawAll(); //dibujar el GUI

            driver->endScene(); //intercambia buffer

        } else {
            device->yield();
        }
    }


    
}