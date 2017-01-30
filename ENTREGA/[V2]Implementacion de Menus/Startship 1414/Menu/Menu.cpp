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

Menu::Menu(std::string name, Configuracion* config) : EstadoGeneral(name) {
    control = false;
    c = config;
    parametros = c->getParametros();
}

Menu::Menu(const Menu& orig) {
}

Menu::~Menu() {

}

void Menu::StarUP(IrrlichtDevice* iDevice) {
    interfaz = iDevice->getGUIEnvironment();
    ITexture* tex;
    tex = iDevice->getVideoDriver()->getTexture("textura/CARTEL.jpg");
    IGUIImage* img;
    estado = 0;
    //    botonesMenu.push_back(interfaz->addButton(rect<int>(100, 120, 200, 160), NULL, 1, L"JUGAR"));
    //    botonesMenu.push_back(interfaz->addButton(rect<int>(100, 160, 200, 200), NULL, 2, L"SALIR"));
    //    botonesMenu.push_back(interfaz->addButton(rect<int>(100, 200, 200, 240), NULL, 1, L"OPCIONES"));


    img = interfaz->addImage(core::rect<s32>(0, 0, 1366, 768));
    img->setImage(tex);
    img->setScaleImage(true);

    IGUISkin* skin = interfaz->getSkin(); //alpha, red, green, blue
    skin->setColor(EGDC_BUTTON_TEXT, SColor(255, 0, 244, 244));




}

void Menu::borrarMenu() {
    //std::cout << "borro el menu" << std::endl;
    if (!botonesMenu.empty()) {
        for (std::vector<IGUIButton*>::iterator it = botonesMenu.begin(); it != botonesMenu.end(); ++it) {
            (*it)->remove();
        }
        botonesMenu.clear();
    }
}

void Menu::dibujarMenu() {
    // borrarMenu();
    //  std::cout << "dibujo el menu" << std::endl;
    botonesMenu.push_back(interfaz->addButton(rect<int>(100, 120, 200, 160), NULL, 1, L"JUGAR"));

    botonesMenu.push_back(interfaz->addButton(rect<int>(100, 160, 200, 200), NULL, 3, L"OPCIONES"));
    botonesMenu.push_back(interfaz->addButton(rect<int>(100, 200, 200, 240), NULL, 4, L"CONTROLES"));
    botonesMenu.push_back(interfaz->addButton(rect<int>(100, 240, 200, 280), NULL, 2, L"SALIR"));

    // interfaz->addCheckBox(true, rect<int>(100, 240, 200, 280), NULL, 4, TEXTO);


}

s32 Menu::run() {

    if (!botonesMenu.empty()) {
        for (std::vector<IGUIButton*>::iterator it = botonesMenu.begin(); it != botonesMenu.end(); ++it) {
            if ((*it)->isPressed()) {
                borrarMenu();
                return (*it)->getID();
            }
        }
    } else {

        if (!botonesMenuOpciones.empty()) {

            for (std::vector<IGUIButton*>::iterator it = botonesMenuOpciones.begin(); it != botonesMenuOpciones.end(); ++it) {
                if ((*it)->getID() == 5 && (*it)->isPressed()) {//volver a menu principal
                    borrarMenuOpciones();
                    return 4;
                } else if ((*it)->getID() == 8 && (*it)->isPressed()) {//aplicar cambios
                    if (parametros.Fullscreen)
                        c->editar(1366, 768, true, "configuracion.xml");
                    else {
                        switch (dimensiones->getSelected()) {
                            case 0:
                                parametros.WindowSize = dimension2d<s32>(1366, 768);
                                c->editar(parametros.WindowSize.Width, parametros.WindowSize.Height, false, "configuracion.xml");
                                break;

                            case 1:
                                parametros.WindowSize = dimension2d<s32>(720, 480);
                                c->editar(parametros.WindowSize.Width, parametros.WindowSize.Height, false, "configuracion.xml");
                                break;
                        }
                    }


                    return 5; //cerrar device
                }
            }

            if (fullscreen->isChecked()) {
                if (c->getfullscreen() == false) {
                    parametros.Fullscreen = true;
                    dimensiones->setSelected(0);
                }
                dimensiones->setEnabled(false);
                // c->editar(1366, 768, true, "configuracion.xml");
                //aqui cerrar el device y abrirlo con el nuevo tamaño
            } else if (fullscreen->isChecked() == false) {
                if (c->getfullscreen() == true) {
                    parametros.Fullscreen = false;
                }
                dimensiones->setEnabled(true);
                //c->editar(1366, 768, false, "configuracion.xml");
            }


        } else {
            if (!botonesMenuControles.empty()) {
                for (std::vector<IGUIButton*>::iterator it = botonesMenuControles.begin(); it != botonesMenuControles.end(); ++it) {
                    if ((*it)->isPressed()) {
                        return (*it)->getID();
                    }
                }
            }
        }
    }
    return -1;
}

void Menu::render(IrrlichtDevice * iDevice) {
    if (control == false) {
        this->StarUP(iDevice);
        control = true;
    }

    switch (estado) {
        case 0:
            this->dibujarMenu();
            s32 pulsado;
            pulsado = this->run();

            if (pulsado == 1) {
                estado = 1;
            } else if (pulsado == 2) {
                estado = 2;
            } else if (pulsado == 3) {
                estado = 3;
                borrarMenu();
                dibujarMenuOpciones2();
            } else if (pulsado == 4) {
                estado = 4;
                borrarMenu();
                dibujarImagenesControles();
            }
            break;
        case 1:

            this->nombre = "juego";
            break;

        case 2:
            iDevice->closeDevice();


            break;

        case 3:
            this->dibujarMenuOpciones();
            s32 pulsado2;
            pulsado2 = this->run();
            if (pulsado2 == 4) {
                estado = 0;
            } else if (pulsado2 == 5)
                iDevice->closeDevice();
            break;
        case 4:
            this->dibujarControles();
            s32 pulsado3;
            pulsado3 = this->run();
            if (pulsado3 == 1) {
                //                std::cout << "controles false" << std::endl;
                c->setControles(false);
                c->escribir("configuracion.xml");
                estado = 0;
                borrarMenuControles();

            } else if (pulsado3 == 2) {
                //                std::cout << "controles true" << std::endl;
                c->setControles(true);
                c->escribir("configuracion.xml");
                estado = 0;
                borrarMenuControles();
            } else if (pulsado3 == 3) {
                std::cout << "volver" << std::endl;
                estado = 0;
                borrarMenuControles();
            }
            break;
    }


    iDevice->getGUIEnvironment()->drawAll();
}

void Menu::Dentro(void) {
    //set up gui
}

void Menu::Fuera(void) {
    //restore playerdata
}

bool Menu::OnEvent(const SEvent & event) {
    //handle user input
    return (false);
}

void Menu::borrarMenuOpciones() {
    if (!botonesMenuOpciones.empty()) {
        for (std::vector<IGUIButton*>::iterator it = botonesMenuOpciones.begin(); it != botonesMenuOpciones.end(); ++it) {
            (*it)->remove();

        }
        botonesMenuOpciones.clear();
    }
    fullscreen->remove();
    dimensiones->remove();
    texto->remove();
}

void Menu::dibujarMenuOpciones() {
    botonesMenuOpciones.push_back(interfaz->addButton(rect<int>(100, 280, 200, 320), NULL, 8, L"APLICAR CAMBIOS"));
    botonesMenuOpciones.push_back(interfaz->addButton(rect<int>(100, 320, 200, 360), NULL, 5, L"VOLVER"));
}

void Menu::dibujarMenuOpciones2() {
    fullscreen = interfaz->addCheckBox(c->getfullscreen(), rect<int>(100, 120, 200, 160), NULL, 4, L"FULLSCREEN");

    //    IGUIListBox *list = interfaz->addListBox(rect<int>(100, 160, 200, 200), NULL, 6, true);
    //    list->addItem(L"hola");
    //    list->addItem(L"adios");

    texto = interfaz->addStaticText(L"Resolución:", rect<int>(100, 180, 300, 240), false, true, NULL, 7, false);

    dimensiones = interfaz->addComboBox(rect<int>(100, 200, 200, 240), NULL, 6);
    dimensiones->addItem(L"1366 x 768", 0);
    dimensiones->addItem(L"720 x 480", 1);

    if (parametros.WindowSize.Width == 1366)
        dimensiones->setSelected(0);
    else
        dimensiones->setSelected(1);



}

void Menu::dibujarControles() {
    botonesMenuControles.push_back(interfaz->addButton(rect<int>(200, 310, 300, 350), NULL, 1, L"USAR FLECHAS"));
    botonesMenuControles.push_back(interfaz->addButton(rect<int>(200, 510, 300, 550), NULL, 2, L"USAR LETRAS"));
    botonesMenuControles.push_back(interfaz->addButton(rect<int>(200, 600, 300, 640), NULL, 3, L"VOLVER"));

}

void Menu::dibujarImagenesControles() {
    ITexture* tex;
    tex = interfaz->getVideoDriver()->getTexture("textura/teclado1.png");

    img = interfaz->addImage(core::rect<s32>(100, 200, 440, 297));
    img->setImage(tex);

    ITexture* tex2;
    tex2 = interfaz->getVideoDriver()->getTexture("textura/teclado2.png");

    img2 = interfaz->addImage(core::rect<s32>(100, 400, 440, 497));
    img2->setImage(tex2);

    texto = interfaz->addStaticText(L"Selecciona los controles de movimiento:", rect<int>(100, 180, 300, 240), false, true, NULL, 7, false);
}

void Menu::borrarMenuControles() {
    if (!botonesMenuControles.empty()) {
        for (std::vector<IGUIButton*>::iterator it = botonesMenuControles.begin(); it != botonesMenuControles.end(); ++it) {
            (*it)->remove();
        }
        botonesMenuControles.clear();
    }
    texto->remove();
    img2->remove();
    img->remove();
}