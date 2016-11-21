#include <irrlicht.h>
//#include "Box2D.h"
#include "CAppReceiver.h"
#include "Personaje.h"
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

int main()
{
    CAppReceiver teclado;
    
    //creas una ventana, primer false es si quieres fullscreen
	IrrlichtDevice *device =
		createDevice( video::EDT_OPENGL, dimension2d<u32>(640, 480), 16,
			false, false, false, &teclado);

        
        
	if (!device)
		return 1;

	device->setWindowCaption(L"Ejemplo");

	IVideoDriver* driver = device->getVideoDriver();
	ISceneManager* smgr = device->getSceneManager(); //grafo de la escena(controlador)
	IGUIEnvironment* guienv = device->getGUIEnvironment(); //hacer intrerfaces de usuario

	guienv->addStaticText(L"Ejemplo basico de Irrlicht",
		rect<s32>(10,10,260,22), true);//metodo para poner algo por pantalla
        //cambiar la camara activa smgr->setActiveCamera(camera);
        
        Personaje *pers = new Personaje(smgr,driver);
        Escenario *esce = new Escenario(smgr,driver);
        Camara *cam = new Camara(smgr,driver);

        
	//smgr->addCameraSceneNode(0, vector3df(0,30,-40), vector3df(0,5,0)); //se añade una camara al grafo
       
        //primer parametro nodo padre, 0 el nodo raiz
        //primer vector posicion, segundo direccion
        
        u32 then = device->getTimer()->getTime();
        
	while(device->run())
	{
            
            if(device->isWindowActive()){
                
                const u32 now = device->getTimer()->getTime();
                const f32 dt = (f32) (now - then) / 1000.f;
                
               // vector3df cubePos = pers->getPos();
                
                if(teclado.isKeyDown(irr::KEY_KEY_D)){
                    //cubePos.X += pers->getVel()*dt; 0
                    pers->moverPersonaje(0,dt);
                }
                if(teclado.isKeyDown(irr::KEY_KEY_A)){
                   // cubePos.X -= pers->getVel()*dt; 1
                 pers->moverPersonaje(1,dt);

                }
                if(teclado.isKeyDown(irr::KEY_KEY_W)){
                    //cubePos.Z += pers->getVel()*dt; 2
                     pers->moverPersonaje(2,dt);
                }
                if(teclado.isKeyDown(irr::KEY_KEY_S)){
                   // cubePos.Z -= pers->getVel()*dt; 3
                     pers->moverPersonaje(3,dt);
                }
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
