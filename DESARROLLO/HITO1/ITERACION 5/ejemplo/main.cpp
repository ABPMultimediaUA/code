#include <irrlicht.h>
#include "EstadoGeneral.h"
#include "ManejadorEstadoGeneral.h"
#include "intro.h"
#include <iostream>

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
/*
void cargarInterfaz()
{
    CAppReceiver teclado;
    
    //creas una ventana, primer false es si quieres fullscreen
	IrrlichtDevice *device = createDevice( video::EDT_OPENGL, dimension2d<u32>(640, 480), 16,
			false, false, false, &teclado);

	device->setWindowCaption(L"Ejemplo");

	IVideoDriver* driver = device->getVideoDriver();
	ISceneManager* smgr = device->getSceneManager(); //grafo de la escena(controlador)
	IGUIEnvironment* guienv = device->getGUIEnvironment(); //hacer intrerfaces de usuario

        
	guienv->addStaticText(L"Ejemplo basico de Irrlicht",
		rect<s32>(10,10,260,22), true);//metodo para poner algo por pantalla
        //cambiar la camara activa smgr->setActiveCamera(camera);
        
        while(device->run())
	{
            
            if(device->isWindowActive()){
                
                smgr->addCameraSceneNode(0, vector3df(0,30,-40), vector3df(0,5,0)); //se añade una camara al grafo
                //primer parametro nodo padre, 0 el nodo raiz
                //primer vector posicion, segundo direccion
                driver->beginScene(true, true, SColor(255,100,101,140));//se usa para hacer el render
                smgr->drawAll(); //dibuja todo el grafo
                guienv->drawAll();//dibujar el GUI

                driver->endScene(); //intercambia buffer
            }
            else{
                device->yield();
            }
        }
}
*/
    
int main(int argc, char **argv)
{

          
/*  cargarInterfaz();

        
        IMeshSceneNode *cube = smgr -> addCubeSceneNode(10); //preguntar a Miguel Angel
        if(cube){
            cube -> setMaterialFlag(EMF_LIGHTING, false);
            cube -> setPosition(vector3df(0,0,0));
            //primer parametro del setVertexColors es de la maya que quieres cambiar el color y con su getMesh se consigue
            smgr -> getMeshManipulator()->setVertexColors(cube->getMesh(), SColor(128, 255, 0, 0));
            
	}

        
	smgr->addCameraSceneNode(0, vector3df(0,30,-40), vector3df(0,5,0)); //se añade una camara al grafo
        //primer parametro nodo padre, 0 el nodo raiz
        //primer vector posicion, segundo direccion

	while(device->run())
	{
            
            if(device->isWindowActive()){
                
                vector3df cubePos = cube->getPosition();
                
                if(teclado.isKeyDown(irr::KEY_KEY_D)){
                  
                }
                else if(teclado.isKeyDown(irr::KEY_KEY_A)){
                 
                }
                
                cube->setPosition(cubePos);
                
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
*/
    
    if(manager.Inicializar(640, 480, false))
    {
        manager.AddEstado(new intro("intro"));
        manager.CambiaEstado("intro");
        
        while(device->run())
        {
    
           device->getVideoDriver()->beginScene(true,true,SColor(255,255,255,255));
           manager.Render();
 	   device->getVideoDriver()->endScene();
        }
        
        manager.Finalizar();
    }
     return(0);  
}

