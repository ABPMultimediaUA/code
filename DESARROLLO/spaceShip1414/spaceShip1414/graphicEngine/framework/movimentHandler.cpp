#include "movimentHandler.h"
#include <iostream>
#include "../entityTree/TTransform.h"
#include "../../player.h"
#include "../../Camara.h"
#include "../TGraphicEngine.h"
#include "../entityTree/TCamara.h"


movimentHandler::movimentHandler() : activo{ false }, mouseSensitive{ 0.015f }
{
}


movimentHandler::~movimentHandler()
{
}

void movimentHandler::onKey(GLFWwindow* window, int key, int scancode, int action, int mods, double deltaTime, TGraphicEngine* motor)
{
	
	if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS) { glfwSetWindowShouldClose(window, GL_TRUE); }
	if (activo) {
		if (glfwGetKey(window, GLFW_KEY_L) == GLFW_PRESS) { this->activo = false; motor->cambiarCamaraActiva(activo); glfwSetInputMode(window, GLFW_CURSOR, GLFW_CURSOR_NORMAL);}
		if (glfwGetKey(window, GLFW_KEY_W) == GLFW_PRESS) { jugador->Translation()->trasladar(0, 0, -jugador->getVelocity()); }
		if (glfwGetKey(window, GLFW_KEY_S) == GLFW_PRESS) {	jugador->Translation()->trasladar(0, 0, jugador->getVelocity());  }
		if (glfwGetKey(window, GLFW_KEY_A) == GLFW_PRESS) { jugador->Translation()->trasladar(-jugador->getVelocity(), 0, 0); }
		if (glfwGetKey(window, GLFW_KEY_D) == GLFW_PRESS) { jugador->Translation()->trasladar(jugador->getVelocity(), 0, 0);  }


	}
	else {
		if (glfwGetKey(window, GLFW_KEY_L) == GLFW_PRESS) { this->activo = true; motor->cambiarCamaraActiva(activo); glfwSetInputMode(window, GLFW_CURSOR, GLFW_CURSOR_DISABLED);}
		if (glfwGetKey(window, GLFW_KEY_W) == GLFW_PRESS) { camara->Translation()->trasladar(0, 0, -camara->getVelocity()); }
		if (glfwGetKey(window, GLFW_KEY_S) == GLFW_PRESS) { camara->Translation()->trasladar(0, 0, camara->getVelocity()); }
		if (glfwGetKey(window, GLFW_KEY_A) == GLFW_PRESS) { camara->Translation()->trasladar(-camara->getVelocity(), 0, 0); }
		if (glfwGetKey(window, GLFW_KEY_D) == GLFW_PRESS) { camara->Translation()->trasladar(camara->getVelocity(), 0, 0); }
		

	}
}

void movimentHandler::onMouse(GLFWwindow * window, double xpos, double ypos)
{
	int width, height;
	glfwGetWindowSize(window, &width, &height);

	GLfloat xoffset = ((width / 2.0f) - static_cast<float>(xpos)) * mouseSensitive;
	GLfloat yoffset = ((height / 2.0f) - static_cast<float>(ypos)) * mouseSensitive;
	if (activo) {
		jugador->setYaw(jugador->getYaw() + xoffset );
		jugador->setPitch( yoffset);
		jugador->Rotation()->rotarYPR(jugador->getYaw(), jugador->getPitch(), 0.0f);
	}
	else {
		glfwSetCursorPos(window, width / 2.0, height / 2.0);
	}
}

void movimentHandler::setMouseSensitive(float mS)
{
	mouseSensitive = mS;
}

void movimentHandler::setPlayer(player * j)
{
	jugador = j; 
	activo = true;
}

void movimentHandler::setCamara(Camara * cam)
{
	camara = cam;
	activo = true;
}
