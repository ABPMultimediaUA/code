#include "movimentHandler.h"
#include <iostream>
#include "../entityTree/TTransform.h"
#include "../player.h"
#include "TGraphicEngine.h"
#include <math.h>
#include <glm/gtx/string_cast.hpp>

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
		if (glfwGetKey(window, GLFW_KEY_L) == GLFW_PRESS) { this->activo = false; motor->cambiarCamaraActiva(0); glfwSetInputMode(window, GLFW_CURSOR, GLFW_CURSOR_NORMAL);}
		/*if (glfwGetKey(window, GLFW_KEY_W) == GLFW_PRESS) { jugador->Translation(0, 0, -jugador->getVelocity()); }
		if (glfwGetKey(window, GLFW_KEY_S) == GLFW_PRESS) {	jugador->Translation(0, 0, jugador->getVelocity());  }
		if (glfwGetKey(window, GLFW_KEY_A) == GLFW_PRESS) { jugador->Translation(-jugador->getVelocity(), 0, 0); }
		if (glfwGetKey(window, GLFW_KEY_D) == GLFW_PRESS) { jugador->Translation(jugador->getVelocity(), 0, 0);  }*/
		if (glfwGetKey(window, GLFW_KEY_W) == GLFW_PRESS) { jugador->Translation()->trasladar(0, 0, -jugador->getVelocity()); }
		if (glfwGetKey(window, GLFW_KEY_S) == GLFW_PRESS) { jugador->Translation()->trasladar(0, 0, jugador->getVelocity()); }
		if (glfwGetKey(window, GLFW_KEY_A) == GLFW_PRESS) { jugador->Translation()->trasladar(-jugador->getVelocity(), 0, 0); }
		if (glfwGetKey(window, GLFW_KEY_D) == GLFW_PRESS) { jugador->Translation()->trasladar(jugador->getVelocity(), 0, 0); }
	}
	else {
		if (glfwGetKey(window, GLFW_KEY_L) == GLFW_PRESS) { this->activo = true; motor->cambiarCamaraActiva(1); glfwSetInputMode(window, GLFW_CURSOR, GLFW_CURSOR_DISABLED);}
	}
}

void movimentHandler::onMouse(GLFWwindow * window, double xpos, double ypos)
{
	int width, height;
	glfwGetWindowSize(window, &width, &height);

	GLfloat xoffset = ((width / 2.0f) - static_cast<float>(xpos));
	GLfloat yoffset = ((height / 2.0f) - static_cast<float>(ypos));

	if (activo) {
		float angulo = -atan2f(xoffset - jugador->Translation()->getPosition().x, yoffset - jugador->Translation()->getPosition().y)*180/3.14;
		std::cout << "Angulo: " << angulo/1000 << " Rotation: "<< glm::to_string(jugador->Translation()->getRotation()) << std::endl;
		/*jugador->setYaw(xoffset);
		jugador->setPitch(yoffset);
		jugador->Rotation()->rotarYPR(0.0f,jugador->getYaw(),jugador->getPitch());*/
		jugador->Rotation()->rotar(angulo/1000,0,1,0);
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
