#pragma once
/*
* To change this license header, choose License Headers in Project Properties.
* To change this template file, choose Tools | Templates
* and open the template in the editor.
*/

/*
* File:   Menu.h
* Author: Sammy Guergachi <sguergachi at gmail.com>
*
* Created on 29 de diciembre de 2016, 20:12
*/




#ifndef MENU_H
#define MENU_H

#include <irrlicht.h>
#include <iostream>
#include <vector>
#include <string>
#include "../EstadoGeneral.h"
#include "../intro.h"
#include <CEGUI\CEGUI.h>
#include <CEGUI\RendererModules\Irrlicht\Renderer.h>
#include <glm\glm.hpp>

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

class Menu : public EstadoGeneral {
private:
	std::vector<IGUIButton*> botonesMenu;
	vector2df tamanyo;
	IGUIEnvironment* interfaz;
	int estado;

	//CEGUI
	CEGUI::IrrlichtRenderer* m_renderer;
	IrrlichtDevice* iDevice;
	CEGUI::GUIContext* m_context = nullptr;
	CEGUI::Window* m_root = nullptr;

public:
	Menu(std::string name);
	Menu(const Menu& orig);
	Menu(IrrlichtDevice* iDevice, int i);
	virtual ~Menu();
	void borrarMenu();
	void dibujarMenu();
	s32 run();
	void StarUP(IrrlichtDevice* iDevice);
	void Dentro(void);
	void Fuera(void);
	bool OnEvent(const SEvent &event);
	void render(IrrlichtDevice* iDevice);

	//CEGUI
	void init(const std::string& resourceDirectory);
	void draw();
	void destroy();
	Menu(IrrlichtDevice* Device);
	CEGUI::IrrlichtRenderer* getRenderer() { return m_renderer; }
	CEGUI::GUIContext* getContext() { return m_context; }

	void loadScheme(const std::string& schemeFile);
	void setFont(const std::string& fontFile);
	CEGUI::Window* createWidget(const std::string& type, const glm::vec4& destRectPerc, const glm::vec4& destRectPix, const std::string& name = "");
	static void setWidgetDestRect(CEGUI::Window* widget, const glm::vec4& destRectPerc, const glm::vec4& destRectPix);




};

#endif /* MENU_H */

