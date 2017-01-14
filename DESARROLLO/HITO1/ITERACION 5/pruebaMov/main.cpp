
#include <irrlicht.h>
#include <Box2D.h>
#include <iostream>

#include "Camara.h"
#include "Personaje.h"
#include "CAppReceiver.h"
#include "MiContactListener.h"

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




int main(int argc, char **argv)
{    
  CAppReceiver teclado;
    
    //creas una ventana, primer false es si quieres fullscreen
	IrrlichtDevice *device =
		createDevice( video::EDT_OPENGL, dimension2d<u32>(1366, 768), 16,
			false, false, false, &teclado);

        
        
	if (!device)
		return 1;

	device->setWindowCaption(L"Prueba de Movimiento");

	IVideoDriver* driver = device->getVideoDriver();
	ISceneManager* smgr = device->getSceneManager(); //grafo de la escena(controlador)
	IGUIEnvironment* guienv = device->getGUIEnvironment(); //hacer intrerfaces de usuario

        b2World *world = new b2World(b2Vec2(0.0f,0.0f));
        MiContactListener *contactListenerInstance =  new MiContactListener();
        world->SetContactListener(contactListenerInstance);
	guienv->addStaticText(L"Ejemplo basico de Irrlicht",
		rect<s32>(10,10,260,22), true);//metodo para poner algo por pantalla
        //cambiar la camara activa smgr->setActiveCamera(camera);
        
        Personaje *pers = new Personaje(smgr,driver, world, vector3df(-100,0,0));
        Personaje *pers2 = new Personaje(smgr,driver, world, vector3df(100,0,0));

        Camara *cam = new Camara(smgr);
   

        
	
        //primer parametro nodo padre, 0 el nodo raiz
        //primer vector posicion, segundo direccion
        
        u32 then = device->getTimer()->getTime();
        
	while(device->run())
	{
            
            if(device->isWindowActive()){
                
                const u32 now = device->getTimer()->getTime();
                const f32 dt = (f32) (now - then) / 1000.f;
                
               world->Step(dt, 6, 2); //1.0f/60.0f
                world->ClearForces();
               
                
                pers->moverPersonaje(0);
                pers2->moverPersonaje(1);
                
                
                
                
                then = now;
              
                
		driver->beginScene(true, true, SColor(255,100,101,140));//se usa para hacer el render

		smgr->drawAll(); //dibuja todo el grafo
		guienv->drawAll();//dibujar el GUI

		driver->endScene(); //intercambia buffer
                
            }
            else{
                device->yield();
            }
	}

	device->drop();

	return 0; 
}

