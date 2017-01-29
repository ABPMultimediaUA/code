#include <irrlicht.h>
#include "EstadoGeneral.h"
#include "ManejadorEstadoGeneral.h"
#include "intro.h"
#include "Menu.h"
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

int main(int argc, char **argv)
{    
    if(manager.Inicializar(640, 480, false))
    { 
        
        manager.AddEstado(new Menu("menu"));
        manager.CambiaEstado("menu");
        while(device->run())
        {
            if(manager.getEstadoActivo()->getNombre()=="intro")
            {
                manager.getEstadoActivo()->LimpiarEstado();
                manager.AddEstado(new intro("intro"));
                manager.CambiaEstado("intro");
            }
           device->getVideoDriver()->beginScene(true,true,SColor(255,255,255,255));
           manager.Render();
 	   device->getVideoDriver()->endScene();
        }
        
        manager.Finalizar();
    }
     return(0);  
}

