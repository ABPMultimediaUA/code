#include <irrlicht.h>
#include "EstadoGeneral.h"
#include "ManejadorEstadoGeneral.h"
#include "Juego.h"
#include "Menu/Menu.h"
#include <iostream>
#include <string>
#include "Menu/GUI.h"

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


void update(std::string estado)
{
	if (manager.getEstadoActivo()->getNombre() == "juego")
	{
		manager.getEstadoActivo()->LimpiarEstado();
		manager.AddEstado(new Juego("juego"));
		manager.CambiaEstado("juego");
	}
}

int main(int argc, char **argv)
{
	/*GUI *menu;*/
	

	if (manager.Inicializar(1366, 768, true))
	{
	

		manager.AddEstado(new Menu("menu"));
		manager.AddEstado(new Juego("juego"));
		manager.CambiaEstado("juego");

				std::string estado= manager.getEstadoActivo()->getNombre();
		while (device1->run())
		{
						if(estado!=manager.getEstadoActivo()->getNombre())
						{
							update(manager.getEstadoActivo()->getNombre());
							estado=manager.getEstadoActivo()->getNombre();
						}

			device1->getVideoDriver()->beginScene(true, true, SColor(255, 255, 255, 255));
			manager.Render();
			device1->getVideoDriver()->endScene();
		}

		manager.Finalizar();
}
	
	return(0);
}

