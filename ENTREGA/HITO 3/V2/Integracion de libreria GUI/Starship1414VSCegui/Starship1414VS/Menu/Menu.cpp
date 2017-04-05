/*
* To change this license header, choose License Headers in Project Properties.
* To change this template file, choose Tools | Templates
* and open the template in the editor.
*/



#include "Menu.h"
#include "../ManejadorEstadoGeneral.h"



#ifdef _IRR_WINDOWS_
#pragma comment(lib, "Irrlicht.lib")
#pragma comment(linker, "/subsystem:windows /ENTRY:mainCRTStartup")
#endif

Menu::Menu(std::string name) : EstadoGeneral(name) {
	control = false;
}

Menu::Menu(const Menu& orig) {
}

Menu::~Menu() {

}

Menu::Menu(IrrlichtDevice* Device) {

	m_renderer = nullptr;
	iDevice = Device;
}

void Menu::init(const std::string& resourceDirectory) {
	//comprobamos si el renderer y system no estan inicializados
	if (m_renderer == nullptr) {
		iDevice->getVideoDriver()->setTextureCreationFlag(ETCF_ALWAYS_32_BIT, true);
		iDevice->getVideoDriver()->setTextureCreationFlag(ETCF_ALWAYS_16_BIT, false);
		iDevice->getVideoDriver()->setTextureCreationFlag(ETCF_CREATE_MIP_MAPS, false);
		iDevice->getVideoDriver()->setTextureCreationFlag(ETCF_OPTIMIZED_FOR_QUALITY, true);
		m_renderer = &CEGUI::IrrlichtRenderer::bootstrapSystem(*iDevice);
		CEGUI::DefaultResourceProvider* rp = static_cast<CEGUI::DefaultResourceProvider*>(CEGUI::System::getSingleton().getResourceProvider());
		rp->setResourceGroupDirectory("imagesets", resourceDirectory + "/imagesets/");
		rp->setResourceGroupDirectory("schemes", resourceDirectory + "/schemes/");
		rp->setResourceGroupDirectory("fonts", resourceDirectory + "/fonts/");
		rp->setResourceGroupDirectory("layouts", resourceDirectory + "/layouts/");
		rp->setResourceGroupDirectory("looknfeel", resourceDirectory + "/looknfeel/");
		rp->setResourceGroupDirectory("lua_scripts", resourceDirectory + "/lua_scripts/");

		CEGUI::ImageManager::setImagesetDefaultResourceGroup("imagesets");
		CEGUI::Scheme::setDefaultResourceGroup("schemes");
		CEGUI::Font::setDefaultResourceGroup("fonts");
		CEGUI::WidgetLookManager::setDefaultResourceGroup("looknfeels");
		CEGUI::WindowManager::setDefaultResourceGroup("layouts");
		CEGUI::ScriptModule::setDefaultResourceGroup("lua_scripts");
	}

	m_context = &CEGUI::System::getSingleton().createGUIContext(m_renderer->getDefaultRenderTarget());
	m_root = CEGUI::WindowManager::getSingleton().createWindow("DefaultWindow", "root");
	m_context->setRootWindow(m_root);
}

void Menu::destroy() {
	CEGUI::System::getSingleton().destroyGUIContext(*m_context);
}


void Menu::draw() {
	m_renderer->beginRendering();

	m_context->draw();

	m_renderer->endRendering();
	//to do, bug here
}

void Menu::loadScheme(const std::string& schemeFile) {
	CEGUI::SchemeManager::getSingleton().createFromFile(schemeFile);
}


void  Menu::setFont(const std::string& fontFile) {
	CEGUI::FontManager::getSingleton().createFromFile(fontFile + ".font");
	m_context->setDefaultFont(fontFile);
}


CEGUI::Window* Menu::createWidget(const std::string& type, const glm::vec4& destRectPerc, const glm::vec4& destRectPix, const std::string& name/* = ""*/) {
	CEGUI::Window* newWindow = CEGUI::WindowManager::getSingleton().createWindow(type, name);
	m_root->addChild(newWindow);
	setWidgetDestRect(newWindow, destRectPerc, destRectPix);
	return newWindow;
}


void Menu::setWidgetDestRect(CEGUI::Window* widget, const glm::vec4& destRectPerc, const glm::vec4& destRectPix) {
	widget->setPosition(CEGUI::UVector2(CEGUI::UDim(destRectPerc.x, destRectPix.x), CEGUI::UDim(destRectPerc.y, destRectPix.y)));
	widget->setSize(CEGUI::USize(CEGUI::UDim(destRectPerc.z, destRectPix.z), CEGUI::UDim(destRectPerc.w, destRectPix.w)));
}



/////////////////

Menu::Menu(IrrlichtDevice* iDevice, int i) {
	interfaz = iDevice->getGUIEnvironment();
	botonesMenu.push_back(interfaz->addButton(rect<int>(100, 120, 200, 160), NULL, 1, L"REANUDAR"));
	botonesMenu.push_back(interfaz->addButton(rect<int>(100, 160, 200, 200), NULL, 2, L"SALIR"));
}

void Menu::StarUP(IrrlichtDevice* iDevice) {
	interfaz = iDevice->getGUIEnvironment();
	ITexture* tex;
	tex = iDevice->getVideoDriver()->getTexture("textura/CARTEL.jpg");
	IGUIImage* img;
	estado = 0;
	tamanyo = vector2df(300, 300);
	botonesMenu.push_back(interfaz->addButton(rect<s32>(tamanyo.X / 3, tamanyo.Y / 10 + tamanyo.Y / 10 + tamanyo.Y / 10, tamanyo.X / 3 + tamanyo.X / 3, tamanyo.Y / 10 + tamanyo.Y / 10 + tamanyo.Y / 10 + tamanyo.Y / 10), NULL, 1, L"JUGAR"));
	botonesMenu.push_back(interfaz->addButton(rect<s32>(tamanyo.X / 3, tamanyo.Y / 10 + tamanyo.Y / 10 + tamanyo.Y / 10 + tamanyo.Y / 10, tamanyo.X / 3 + tamanyo.X / 3, tamanyo.Y / 10 + tamanyo.Y / 10 + tamanyo.Y / 10 + tamanyo.Y / 10 + tamanyo.Y / 10), NULL, 2, L"SALIR"));
	img = interfaz->addImage(core::rect<s32>(0, 0, 1366, 768));
	img->setImage(tex);
	img->setScaleImage(true);

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
				std::cout << (*it)->getID() << std::endl;
				borrarMenu();
				return (*it)->getID();
			}
		}
	}
	return -1;
}

void Menu::render(IrrlichtDevice* iDevice) {
	if (control == false) {
		this->StarUP(iDevice);
		control = true;
	}

	switch (estado) {
	case 0:
		s32 pulsado;
		pulsado = this->run();
		if (pulsado == 1) {
			estado = 1;
		}
		else if (pulsado == 2) {
			estado = 2;
		}
		break;
	case 1:

		//this->nombre="juego";
		manager.CambiaEstado("juego");
		iDevice->getGUIEnvironment()->clear();
		control = false;
		break;

	case 2:
		iDevice->closeDevice();



		break;
	}

	if (control == true) {
		this->dibujarMenu();
		iDevice->getGUIEnvironment()->drawAll();
	}
}

void Menu::Dentro(void) {
	//set up gui
}

void Menu::Fuera(void) {
	//restore playerdata
}

bool Menu::OnEvent(const SEvent &event) {
	//handle user input
	return (false);
}
