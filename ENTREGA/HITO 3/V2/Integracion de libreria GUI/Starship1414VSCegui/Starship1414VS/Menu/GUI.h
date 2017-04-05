#pragma once

#include <irrlicht.h>
#include <iostream>
#include <vector>
#include <string>
#include "../EstadoGeneral.h"
#include "../intro.h"
#include <glm\glm.hpp>
#include <CEGUI\CEGUI.h>
#include <CEGUI\RendererModules\Irrlicht\Renderer.h>

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

class GUI
{
	public:
		GUI();
		~GUI();
		void init(const std::string& resourceDirectory);
		void draw();
		void destroy();
		GUI(IrrlichtDevice* Device);
		CEGUI::IrrlichtRenderer* getRenderer() { return m_renderer; }
		CEGUI::GUIContext* getContext() { return m_context; }

		void loadScheme(const std::string& schemeFile);
		void setFont(const std::string& fontFile);
		CEGUI::Window* createWidget(const std::string& type, const glm::vec4& destRectPerc, const glm::vec4& destRectPix, const std::string& name = "");
		static void setWidgetDestRect(CEGUI::Window* widget, const glm::vec4& destRectPerc, const glm::vec4& destRectPix);


	private:
		CEGUI::IrrlichtRenderer* m_renderer;
		IrrlichtDevice* iDevice;
		CEGUI::GUIContext* m_context = nullptr;
		CEGUI::Window* m_root = nullptr;

		
};

