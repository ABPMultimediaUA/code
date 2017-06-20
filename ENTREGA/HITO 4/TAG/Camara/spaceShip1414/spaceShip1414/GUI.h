#pragma once
#ifndef GLEW_STATIC
#define GLEW_STATIC
#include <GL/glew.h>
#endif
#ifndef GLFW_STATIC
#define GLFW_STATIC
#include <GLFW\glfw3.h>
#endif
#include <CEGUI/CEGUI.h>
#include <CEGUI/RendererModules/OpenGL/GL3Renderer.h>
#include <glm/vec4.hpp>


class GUI {
	public:
		void init(const std::string& resourceDirectory);
		void destroy();

		void draw();

		void loadScheme(const std::string& schemeFile);
		void setFont(const std::string& fontFile);
		CEGUI::Window* createWidget(const std::string& type, const glm::vec4& destRectPerc, const glm::vec4& destRectPix, const std::string& name = "");
		static void setWidgetDestRect(CEGUI::Window* widget, const glm::vec4& destRectPerc, const glm::vec4& destRectPix);
		void createMenu();


		// Getters
		static CEGUI::OpenGL3Renderer* getRenderer() { return m_renderer; }
		const CEGUI::GUIContext* getContext() { return m_context; }
	private:
		static CEGUI::OpenGL3Renderer* m_renderer;
		CEGUI::WindowManager* wmgr = nullptr;
		CEGUI::GUIContext* m_context = nullptr;
		CEGUI::Window* m_root = nullptr; //WindowManager::getSingletonPtr()
		CEGUI::System* mGUIsystem = CEGUI::System::getSingletonPtr();
 };