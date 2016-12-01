#include <irrlicht.h>
#include <Box2D.h>
#include <iostream>
#include <typeinfo>
#include "CAppReceiver.h"
#include "componente.h"
#include "stateMachineComponent.h"
#include "transformComponent.h"
#include <string.h>

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
    /*componente* c1 = new stateMachineComponent();
    componente* c2 = new transformComponent();
    componente* c3 = new transformComponent();
    char *s1 = const_cast<char*>(typeid(*c2).name());
    std::cout<<"c1: "<<typeid(*c1).name()<<std::endl;
    std::cout<<"c2: "<<typeid(*c2).name()<<std::endl;
    std::cout<<"c3: "<<typeid(*c3).name()<<std::endl;
    std::cout<<"s1: "<<s1<<std::endl;
    std::cout<<"compare: "<<strcmp(s1,typeid(*c3).name())<<std::endl;*/
    CAppReceiver *teclado = new CAppReceiver();
    IrrlichtDevice *device = createDevice( video::EDT_OPENGL, dimension2d<u32>(640, 480), 16, false, false, false, teclado);
    if (!device){
	return 1;
    }
    device->setWindowCaption(L"MaquinaEstadosXComponentes");

    IVideoDriver* driver = device->getVideoDriver();
    ISceneManager* smgr = device->getSceneManager();
    IGUIEnvironment* guienv = device->getGUIEnvironment();

    guienv->addStaticText(L"Ejemplo basico de la Maquina de Estados", rect<s32>(10,10,260,22), true);

    smgr->addCameraSceneNode(0, vector3df(0,30,-40), vector3df(0,5,0));

    while(device->run())
    {
        driver->beginScene(true, true, SColor(255,100,101,140));

        smgr->drawAll();
        guienv->drawAll();

        driver->endScene();
    }

    device->drop();

    return 0;
}
