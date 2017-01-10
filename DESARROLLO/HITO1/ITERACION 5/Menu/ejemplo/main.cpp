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

int main() {


    Juego *game= new Juego();
    game ->loopJuego();
    return 0;
}
