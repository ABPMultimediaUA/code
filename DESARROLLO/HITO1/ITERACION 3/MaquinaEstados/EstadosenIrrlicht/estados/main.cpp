#include <irrlicht.h>
#include <Box2D.h>
#include <iostream>
#include "CAppReceiver.h"
#include "Personaje.h"
#include "Enemigo.h"
#include "Escenario.h"
#include "Camara.h"



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




int main() {
    
    

    CAppReceiver teclado;
    
    IrrlichtDevice *device =
            createDevice(video::EDT_OPENGL, dimension2d<u32>(640, 480), 16,
            false, false, false, &teclado);
    
    
    IVideoDriver* driver = device->getVideoDriver();
    ISceneManager* smgr = device->getSceneManager(); //grafo de la escena(controlador)
    IGUIEnvironment* guienv = device->getGUIEnvironment(); //hacer intrerfaces de usuario
    
    if (!device)
        //salir
        return 0;
    b2Vec2 gravity(0.0f, 0.0f);
    b2World *world = new b2World(gravity);
    

    device->setWindowCaption(L"Movimiento del personaje");
    
    
    guienv->addStaticText(L"Movimiento del personaje",
            rect<s32>(10, 10, 260, 22), true); //metodo para poner algo por pantalla
    //cambiar la camara activa smgr->setActiveCamera(camera);

    Personaje *pers = new Personaje(smgr, driver, world); //el cubo que se crea es de 10x10x10 10px = 1m
    Enemigo *ene = new Enemigo(smgr, driver, world);
    Escenario *esce = new Escenario(smgr, driver);
    Camara *cam = new Camara(smgr);
    //smgr->addCameraSceneNode(0, vector3df(0,30,-40), vector3df(0,5,0)); //se añade una camara al grafo

    //Para raton:
    ISceneNode * node = smgr->addMeshSceneNode(
            smgr->addArrowMesh("Arrow",
            video::SColor(255, 255, 0, 0),
            video::SColor(255, 0, 255, 0),
            16, 16,
            2.f, 1.3f,
            0.1f, 0.6f
            )
            );
    node->setMaterialFlag(video::EMF_LIGHTING, false);

    //primer parametro nodo padre, 0 el nodo raiz
    //primer vector posicion, segundo direccion

    u32 then = device->getTimer()->getTime();
    const f32 MOVEMENT_SPEED = 100.f;

    while (device->run()) {

        if (device->isWindowActive()) {
            
            


            const u32 now = device->getTimer()->getTime();
            const f32 dt = (f32) (now - then) / 1000.f;
            world->Step(dt, 6, 2); //1.0f/60.0f
            world->ClearForces();

            
           
                
            //estados del enemigo
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
            
            
            ene->Update(pers);
            
            if (teclado.isKeyUp(irr::KEY_KEY_D) || teclado.isKeyUp(irr::KEY_KEY_A) || teclado.isKeyUp(irr::KEY_KEY_W) || teclado.isKeyUp(irr::KEY_KEY_S)) {
                pers->setVelocidad();
            }

            if (teclado.isKeyDown(irr::KEY_KEY_W) && teclado.isKeyDown(irr::KEY_KEY_D)) {

                pers->moverPersonaje(4, dt);
                cam->actualizarCamara(0, dt);
                cam->actualizarCamara(2, dt);
            } else if (teclado.isKeyDown(irr::KEY_KEY_S) && teclado.isKeyDown(irr::KEY_KEY_D)) {

                pers->moverPersonaje(5, dt);
                cam->actualizarCamara(0, dt);
                cam->actualizarCamara(3, dt);

            } else if (teclado.isKeyDown(irr::KEY_KEY_S) && teclado.isKeyDown(irr::KEY_KEY_A)) {

                pers->moverPersonaje(6, dt);
                cam->actualizarCamara(1, dt);
                cam->actualizarCamara(3, dt);


            } else if (teclado.isKeyDown(irr::KEY_KEY_A) && teclado.isKeyDown(irr::KEY_KEY_W)) {

                pers->moverPersonaje(7, dt);
                cam->actualizarCamara(1, dt);
                cam->actualizarCamara(2, dt);


            }// X + and -
            else if (teclado.isKeyDown(irr::KEY_KEY_D)) {

                pers->moverPersonaje(0, dt);
                cam->actualizarCamara(0, dt);
            } else if (teclado.isKeyDown(irr::KEY_KEY_A)) {

                pers->moverPersonaje(1, dt);
                cam->actualizarCamara(1, dt);

            }//Z + and -
            else if (teclado.isKeyDown(irr::KEY_KEY_W)) {

                pers->moverPersonaje(2, dt);
                cam->actualizarCamara(2, dt);
            } else if (teclado.isKeyDown(irr::KEY_KEY_S)) {

                pers->moverPersonaje(3, dt);
                cam->actualizarCamara(3, dt);

            }

            //RATON
            vector3df nodePosition = node->getPosition();
            // Create a ray through the mouse cursor.
            line3df ray = smgr->getSceneCollisionManager()->getRayFromScreenCoordinates(teclado.GetMouseState().Position, smgr->getActiveCamera());

            // And intersect the ray with a plane around the node facing towards the camera.
            plane3df plane(nodePosition, vector3df(0, 0, -1));
            vector3df mousePosition;
            plane.getIntersectionWithLine(ray.start, ray.getVector(), mousePosition);
            // We now have a mouse position in 3d space; move towards it.
            //vector3df toMousePosition(mousePosition - nodePosition);
            //const f32 availableMovement = MOVEMENT_SPEED * dt;

            // if (toMousePosition.getLength() <= availableMovement)
            nodePosition = mousePosition; // Jump to the final position
            // else
            //   nodePosition += toMousePosition.normalize() * availableMovement; // Move towards it
            pers->rotar(nodePosition);
            node->setPosition(nodePosition);

            // Turn lighting on and off depending on whether the left mouse button is down.
            node->setMaterialFlag(video::EMF_LIGHTING, teclado.GetMouseState().LeftButtonDown);

            then = now;

            
            
            
            driver->beginScene(true, true, SColor(255, 100, 101, 140)); //se usa para hacer el render

            smgr->drawAll(); //dibuja todo el grafo

            guienv->drawAll(); //dibujar el GUI

            driver->endScene(); //intercambia buffer

            
        } else {
            device->yield();
        }
    }

    device->drop();

    //salir
    return 1;
    
}
