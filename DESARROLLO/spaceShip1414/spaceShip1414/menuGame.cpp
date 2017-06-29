#include "menuGame.h"


menuGame::menuGame() : m_gui()
{

}

menuGame::~menuGame()
{
}

void menuGame::init()
{
	m_gui.init("GUI");
	m_gui.loadScheme("TaharezLook.scheme");
	m_gui.loadScheme("AlfiskoSkin.scheme");
	m_gui.setFont("DejaVuSans-10");
	

	CEGUI::PushButton* botonJugar = static_cast<CEGUI::PushButton*>(m_gui.createWidget("AlfiskoSkin/Button", glm::vec4(0.45f, 0.3f, 0.11f, 0.08f), glm::vec4(0.0f), "botonJugar"));
	botonJugar->setText("JUGAR");

	CEGUI::PushButton* botonConfig = static_cast<CEGUI::PushButton*>(m_gui.createWidget("AlfiskoSkin/Button", glm::vec4(0.45f, 0.4f, 0.11f, 0.08f), glm::vec4(0.0f), "botonConfig"));
	botonConfig->setText("AJUSTES");

	CEGUI::PushButton* botonCreditos = static_cast<CEGUI::PushButton*>(m_gui.createWidget("AlfiskoSkin/Button", glm::vec4(0.45f, 0.5f, 0.11f, 0.08f), glm::vec4(0.0f), "botonCreditos"));
	botonConfig->setText("CREDITOS");

	CEGUI::PushButton* botonSalir = static_cast<CEGUI::PushButton*>(m_gui.createWidget("AlfiskoSkin/Button", glm::vec4(0.45f, 0.60f, 0.11f, 0.08f), glm::vec4(0.0f), "botonSalir"));
	botonSalir->setText("SALIR");

	CEGUI::FrameWindow * pr = static_cast<CEGUI::FrameWindow*>(m_gui.createWidget("TaharezLook/FrameWindow", glm::vec4(0.8f, 0.05, 0.1f, 0.1f), glm::vec4(0.0f), "pr"));
	pr->setText("Version:");
}

void menuGame::draw()
{
	m_gui.draw();
}
