#include <irrlicht.h>
#include <Box2D.h>
#include <iostream>
#include "CAppReceiver.h"
#include "Personaje.h"
#include "Enemigo.h"
#include "Escenario.h"
#include "Camara.h"
#include "Estado.h"
#include "Perseguir.h"
#include "Alejarse.h"
#include "Irapunto.h" 
#include "Actu.h"
#include "Juego.h"


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
    
    

    Juego j;
    
    Estado* juego= new Actu();
    Estado* pausa=new Estado();
    
    j.pausa=pausa;
    j.jugando=juego;
    j.actual=juego;
    //std::cout<<j.actual->getid()<<std::endl; 
    
    while(1){
    j.actual->Ejecutar(j);
    
}
}
