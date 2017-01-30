#include <irrlicht.h>
#include "EstadoGeneral.h"
#include "ManejadorEstadoGeneral.h"
#include "Juego.h"
#include "Menu/Menu.h"
#include <iostream>
#include <string>
#include "Configuracion.h"

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

void update(std::string estado, bool controles) {
    if (manager.getEstadoActivo()->getNombre() == "juego") {
        manager.getEstadoActivo()->LimpiarEstado();
        manager.AddEstado(new Juego("juego", controles));
        manager.CambiaEstado("juego");
    }
}

int main(int argc, char **argv) {

    Configuracion *c = new Configuracion();
    SIrrlichtCreationParameters parametros = c->getParametros();

    if (manager.Inicializar(parametros.WindowSize.Width, parametros.WindowSize.Height, parametros.Fullscreen)) {


        manager.AddEstado(new Menu("menu", c));
        manager.CambiaEstado("menu");
        std::string estado = manager.getEstadoActivo()->getNombre();
        while (device->run()) {
            if (estado != manager.getEstadoActivo()->getNombre()) {
                update(manager.getEstadoActivo()->getNombre(), c->getControles());
                estado = manager.getEstadoActivo()->getNombre();
            }

            device->getVideoDriver()->beginScene(true, true, SColor(255, 255, 255, 255));
            manager.Render();
            device->getVideoDriver()->endScene();
        }

        manager.Finalizar();
    }
    return (0);
}

