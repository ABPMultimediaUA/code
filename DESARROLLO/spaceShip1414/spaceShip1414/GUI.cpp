#include "GUI.h"

CEGUI::OpenGL3Renderer* GUI::m_renderer = nullptr;

void GUI::init(const std::string& resourceDirectory) {
    // Check if the renderer and system were not already initialized
	
    if (m_renderer == nullptr) {
        m_renderer = &CEGUI::OpenGL3Renderer::bootstrapSystem();

        CEGUI::DefaultResourceProvider* rp = static_cast<CEGUI::DefaultResourceProvider*>(CEGUI::System::getSingleton().getResourceProvider());
        rp->setResourceGroupDirectory("imagesets", resourceDirectory + "/imagesets/");
        rp->setResourceGroupDirectory("schemes", resourceDirectory + "/schemes/");
        rp->setResourceGroupDirectory("fonts", resourceDirectory + "/fonts/");
        rp->setResourceGroupDirectory("layouts", resourceDirectory + "/layouts/");
        rp->setResourceGroupDirectory("looknfeels", resourceDirectory + "/looknfeel/");
        rp->setResourceGroupDirectory("lua_scripts", resourceDirectory + "/lua_scripts/");

        CEGUI::ImageManager::setImagesetDefaultResourceGroup("imagesets");
        CEGUI::Scheme::setDefaultResourceGroup("schemes");
        CEGUI::Font::setDefaultResourceGroup("fonts");
        CEGUI::WidgetLookManager::setDefaultResourceGroup("looknfeels");
        CEGUI::WindowManager::setDefaultResourceGroup("layouts");
        CEGUI::ScriptModule::setDefaultResourceGroup("lua_scripts");
    }

    m_context = &CEGUI::System::getSingleton().createGUIContext(m_renderer->getDefaultRenderTarget());
	//wmgr = CEGUI::WindowManager::getSingletonPtr();
    m_root = CEGUI::WindowManager::getSingleton().createWindow("DefaultWindow", "root");
    m_context->setRootWindow(m_root);
	
}

void GUI::destroy() {
    CEGUI::System::getSingleton().destroyGUIContext(*m_context);
}

void GUI::draw() {
	
    m_renderer->beginRendering();
    m_context->draw();
    m_renderer->endRendering();
    glDisable(GL_SCISSOR_TEST);
}

void GUI::loadScheme(const std::string& schemeFile) {
    CEGUI::SchemeManager::getSingleton().createFromFile(schemeFile);
}

CEGUI::Window* GUI::createWidget(const std::string& type, const glm::vec4& destRectPerc, const glm::vec4& destRectPix, const std::string& name /*= ""*/) {
	//setFont("DejaVuSans-10");
	CEGUI::Window* newWindow = CEGUI::WindowManager::getSingleton().createWindow(type, name);
	
	m_root->addChild(newWindow);
	//newWindow->setName(name);
    setWidgetDestRect(newWindow, destRectPerc, destRectPix);
	//newWindow->setText("[colour='FFFF0000'] " + name);

    return newWindow;
}

void GUI::setWidgetDestRect(CEGUI::Window* widget, const glm::vec4& destRectPerc, const glm::vec4& destRectPix) {
    widget->setPosition(CEGUI::UVector2(CEGUI::UDim(destRectPerc.x, destRectPix.x), CEGUI::UDim(destRectPerc.y, destRectPix.y)));
    widget->setSize(CEGUI::USize(CEGUI::UDim(destRectPerc.z, destRectPix.z), CEGUI::UDim(destRectPerc.w, destRectPix.w)));
}

void GUI::createMenu()
{
	
	loadScheme("AlfiskoSkin.scheme");
	//setFont("DejaVuSans-10");
	CEGUI::PushButton* NewGame = static_cast<CEGUI::PushButton*>(createWidget("AlfiskoSkin/Button",
		glm::vec4(0.2,0.2,0.2,0.05)
		, glm::vec4(0.0f), "NewGame"));
	//m_root->addChild(NewGame);
	//NewGame->setPosition(CEGUI::UVector2(CEGUI::UDim(0.2f, 0.0f), CEGUI::UDim(0.2f, 0.0f)));
	//NewGame->setSize(CEGUI::USize(CEGUI::UDim(0.4f, 0.0f), CEGUI::UDim(0.2f, 0.0f)));
	NewGame->setText("New Game");

	/*NewGame->setProperty("NormalImage", "set:Buttons image:ButtonUp");
	NewGame->setProperty("HoverImage", "set:Buttons image:ButtonDown");
	NewGame->setProperty("PushedImage", "set:Buttons image:ButtonDown");*/

	CEGUI::PushButton* LoadGame = static_cast<CEGUI::PushButton*>(createWidget("AlfiskoSkin/FrameWindow", 
		glm::vec4(0.2, 0.4, 0.2, 0.05)
		, glm::vec4(0.0f), "LoadGame"));
	//LoadGame->setPosition(CEGUI::UVector2(CEGUI::UDim(0.2f, 0.0f), CEGUI::UDim(0.45f, 0.0f)));
	//LoadGame->setSize(CEGUI::USize(CEGUI::UDim(0.4f, 0.0f), CEGUI::UDim(0.2f, 0.0f)));
	LoadGame->setText("Load Game");
	LoadGame->setTooltipText("Disabled, not implemented yet");
	//LoadGame->disable();
	//LoadGame->setProperty("NormalImage", "set:Buttons image:ButtonUp");
	//LoadGame->setProperty("HoverImage", "set:Buttons image:ButtonDown");
	//LoadGame->setProperty("PushedImage", "set:Buttons image:ButtonDown");
	//LoadGame->setProperty("DisabledImage", "set:Buttons image:ButtonDown");

	CEGUI::PushButton* QuitGame = static_cast<CEGUI::PushButton*>(createWidget("AlfiskoSkin/FrameWindow",
		glm::vec4(0.2, 0.6, 0.2, 0.05)
		, glm::vec4(0.0f), "QuitGame"));
	//QuitGame->setPosition(CEGUI::UVector2(CEGUI::UDim(0.2f, 0.0f), CEGUI::UDim(0.7f, 0.0f)));
	//QuitGame->setSize(CEGUI::USize(CEGUI::UDim(0.4f, 0.0f), CEGUI::UDim(0.2f, 0.0f)));
	QuitGame->setText("Quit Game");
	//QuitGame->setProperty("NormalImage", "set:Buttons image:ButtonUp");
	//QuitGame->setProperty("HoverImage", "set:Buttons image:ButtonDown");
	//QuitGame->setProperty("PushedImage", "set:Buttons image:ButtonDown");

	//mGUIsystem->setGUISheet(m_root);

}

void GUI::setFont(const std::string& fontFile) {
    CEGUI::FontManager::getSingleton().createFromFile(fontFile + ".font");
    m_context->setDefaultFont(fontFile);
}
