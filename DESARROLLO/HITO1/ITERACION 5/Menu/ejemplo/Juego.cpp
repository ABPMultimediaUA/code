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
#include "Menu.h"

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

    device = createDevice(video::EDT_OPENGL, dimension2d<u32>(ANCHO, LARGO), 16, false, false, false, &teclado);
    driver = device->getVideoDriver();
    smgr = device->getSceneManager();
    guienv = device->getGUIEnvironment();
    world = new b2World(gravity);
    contactListenerInstance = new MiContactListener();
    filtroContact = new MyContactFilter();
    gravity.Set(0.0f, 0.0f);

    world->SetContactListener(contactListenerInstance);
    world->SetContactFilter(filtroContact);



    IVideoDriver* driver = device->getVideoDriver();
    ISceneManager* smgr = device->getSceneManager(); //grafo de la escena(controlador)
    IGUIEnvironment* guienv = device->getGUIEnvironment(); //hacer intrerfaces de usuario


    //cambiar la camara activa smgr->setActiveCamera(camera);

    pers = new Personaje(smgr, driver, world); //el cubo que se crea es de 10x10x10 10px = 1m
    esce = new Escenario(smgr, driver, world);
    // ene = new Enemigo(smgr, driver, world, vector3df(0,10,40));
    esce->fabricaDeEnemigos(smgr, driver, world);
    json = new readJson(esce);
    cam = new Camara(smgr, pers->getPos());
    estado = 0;
    menu = new Menu(guienv);
    then = device->getTimer()->getTime();

    //    this->loopJuego();
    //
    //    device->drop();

}

Juego::Juego(const Juego& orig) {
}

Juego::~Juego() {
}

void Juego::loopJuego() {


    while (device->run()) {

        if (device->isWindowActive()) {


            const u32 now = device->getTimer()->getTime();

            const f32 dt = (f32) (now - then) / 1000.f;
            //float distancia;
            world->Step(dt, 6, 2); //1.0f/60.0f
            world->ClearForces();

            //            if(teclado.isKeyDown(irr::KEY_KEY_J)){
            //                ene->Cambiar(1);
            //            }
            //            else if(teclado.isKeyDown(irr::KEY_KEY_K)){
            //                ene->Cambiar(2);
            //            }
            //            else if(teclado.isKeyDown(irr::KEY_KEY_L)){
            //                ene->Cambiar(3);
            //            }
            //            else if(teclado.isKeyDown(irr::KEY_KEY_P)){
            //                ene->Cambiar(4);
            //            }
            //            else if(teclado.isKeyDown(irr::KEY_KEY_O)){
            //                ene->Cambiar(5);
            //            }

            if (estado == 1) {
                // ene->Update(pers);
                esce->actualizarListaEnemigos(pers);



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

                } else if (teclado.isKeyDown(irr::KEY_KEY_A)) {

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
                if (teclado.isKeyDown(irr::KEY_KEY_R)) {
                    pers->setCargador(30);
                }

                if (teclado.isKeyDown(irr::KEY_ESCAPE)) {
                    menu->dibujarMenu();
                    estado = 2; //pausa
                }

                if (teclado.isKeyDown(irr::KEY_KEY_Q) && now >= 5.0f) {
                    esce->spawnearEnemigo(smgr, driver, world);

                }

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
                if (teclado.isKeyDown(irr::KEY_KEY_E)) {
                    std::cout << "//////////////////////////////////////////" << std::endl;
                    std::cout << "" << std::endl;
                    std::cout << "POS EPRS" << std::endl;
                    std::cout << "PosX: " << pers->getPos().X << "PosZ: " << pers->getPos().Z << std::endl;
                }
                if (teclado.GetMouseState().LeftButtonDown && pers->getDisparo() == false) {
                    //tiempoDisparo += dt;

                    //pers -> disparar(dt,ok);
                    //disparo = true;
                    //Bala *bullet = new Bala(smgr, driver, world, pers, vector2df(teclado.GetMouseState().Position.X, teclado.GetMouseState().Position.Y));
                    //listaBalas.push_back(bullet);
                    //  }
                    // }

                    if (pers->getCargador() >= 0) {
                        pers->disparar(smgr, driver, world, dt, vector2df(mousePosition.X, mousePosition.Y));

                    }
                }


                if (pers->getDisparo() == true) {
                    pers->setTiempoDisparo(pers->getTiempoDisparo() + dt);
                    if (pers->getTiempoDisparo() >= 0.2) {
                        pers->setDisparo(false);
                        pers->setTiempoDisparo(0);
                    }
                }



                if (ok) {

                    pers->actualizarLista(dt);

                }
            }
            //MENU INICIAL y para pausa tambien
            if (estado == 0 || estado == 2) {
                s32 pulsado = menu->run();
                //  std::cout << "seleccion: " << pulsado << std::endl;
                if (pulsado != -1) {
                    if (pulsado == 1) {
                        estado = 1;
                    } else if (pulsado == 2)
                        device->closeDevice();
                }
            }


            then = now;

            driver->beginScene(true, true, SColor(255, 100, 101, 140)); //se usa para hacer el render

            if (estado == 1 || estado == 2)
                smgr->drawAll(); //dibuja todo el grafo

            guienv->drawAll(); //dibujar el GUI

            driver->endScene(); //intercambia buffer

        } else {
            device->yield();
        }
    }


    device->drop();

}