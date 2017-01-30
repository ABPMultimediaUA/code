/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */



#include "Menu.h"

#ifdef _IRR_WINDOWS_
#pragma comment(lib, "Irrlicht.lib")
#pragma comment(linker, "/subsystem:windows /ENTRY:mainCRTStartup")
#endif

Menu::Menu(IGUIEnvironment* gui) {
    interfaz = gui;
    tamanyo = vector2df(300, 300);
    botonesMenu.push_back(interfaz->addButton(rect<s32>(tamanyo.X / 3, tamanyo.Y / 10 + tamanyo.Y / 10 + tamanyo.Y / 10, tamanyo.X / 3 + tamanyo.X / 3, tamanyo.Y / 10 + tamanyo.Y / 10 + tamanyo.Y / 10 + tamanyo.Y / 10), NULL, 1, L"JUGAR"));
    botonesMenu.push_back(interfaz->addButton(rect<s32>(tamanyo.X / 3, tamanyo.Y / 10 + tamanyo.Y / 10 + tamanyo.Y / 10 + tamanyo.Y / 10, tamanyo.X / 3 + tamanyo.X / 3, tamanyo.Y / 10 + tamanyo.Y / 10 + tamanyo.Y / 10 + tamanyo.Y / 10 + tamanyo.Y / 10), NULL, 2, L"SALIR"));
}

Menu::Menu(const Menu& orig) {
}

Menu::~Menu() {

}

void Menu::borrarMenu() {
    if (!botonesMenu.empty()) {
        for (std::vector<IGUIButton*>::iterator it = botonesMenu.begin(); it != botonesMenu.end(); ++it) {
            (*it)->remove();
        }
        botonesMenu.clear();
    }
}

void Menu::dibujarMenu() {
    borrarMenu();
    botonesMenu.push_back(interfaz->addButton(rect<s32>(tamanyo.X / 3, tamanyo.Y / 10 + tamanyo.Y / 10 + tamanyo.Y / 10, tamanyo.X / 3 + tamanyo.X / 3, tamanyo.Y / 10 + tamanyo.Y / 10 + tamanyo.Y / 10 + tamanyo.Y / 10), NULL, 1, L"JUGAR"));
    botonesMenu.push_back(interfaz->addButton(rect<s32>(tamanyo.X / 3, tamanyo.Y / 10 + tamanyo.Y / 10 + tamanyo.Y / 10 + tamanyo.Y / 10, tamanyo.X / 3 + tamanyo.X / 3, tamanyo.Y / 10 + tamanyo.Y / 10 + tamanyo.Y / 10 + tamanyo.Y / 10 + tamanyo.Y / 10), NULL, 2, L"SALIR"));
}

s32 Menu::run() {
    if (!botonesMenu.empty()) {
        for (std::vector<IGUIButton*>::iterator it = botonesMenu.begin(); it != botonesMenu.end(); ++it) {
            if ((*it)->isPressed()) {
                borrarMenu();
                return (*it)->getID();
            }
        }
    }
    return -1;
}