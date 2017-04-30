#include "movimentHandler.h"
#include <iostream>
#include <glm\gtc\matrix_transform.hpp>
#include <glm\gtx\string_cast.hpp>
#include <glm\gtx\euler_angles.hpp>
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

	double dt = motor->getDT();
	std::cout << "TIME: " << dt << std::endl;

	if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS) { glfwSetWindowShouldClose(window, GL_TRUE); }
	if (activo) {
		if (glfwGetKey(window, GLFW_KEY_L) == GLFW_PRESS) { this->activo = false; motor->cambiarCamaraActiva(activo); glfwSetInputMode(window, GLFW_CURSOR, GLFW_CURSOR_NORMAL);}
		if (glfwGetKey(window, GLFW_KEY_W) == GLFW_PRESS) {
			jugador->setPos(jugador->getPos().x, jugador->getPos().y, jugador->getPos().z + jugador->getVelocity() * dt);
			jugador->Translation()->trasladar(0.0, 0.0, jugador->getVelocity() * dt);
		}
		if (glfwGetKey(window, GLFW_KEY_S) == GLFW_PRESS) {
			jugador->setPos(jugador->getPos().x, jugador->getPos().y, jugador->getVelocity() * dt - jugador->getPos().z);
			jugador->Translation()->trasladar(0.0, 0.0, -jugador->getVelocity() * dt);
		}
		if (glfwGetKey(window, GLFW_KEY_A) == GLFW_PRESS) {
			jugador->setPos(jugador->getPos().x - jugador->getVelocity() * dt, jugador->getPos().y, jugador->getPos().z);
			jugador->Translation()->trasladar(-jugador->getVelocity() * dt, 0.0, 0.0);
		}
		if (glfwGetKey(window, GLFW_KEY_D) == GLFW_PRESS) {
			jugador->setPos(jugador->getPos().x + jugador->getVelocity() * dt, jugador->getPos().y, jugador->getPos().z);
			jugador->Translation()->trasladar(jugador->getVelocity() * dt, 0.0, 0.0);
		}


	}
	else {
		if (glfwGetKey(window, GLFW_KEY_L) == GLFW_PRESS) { this->activo = true; motor->cambiarCamaraActiva(activo); glfwSetInputMode(window, GLFW_CURSOR, GLFW_CURSOR_DISABLED);}
		if (glfwGetKey(window, GLFW_KEY_W) == GLFW_PRESS) { camara->getTransformacion()->trasladar(0,camara->getVelocity(), 0); }
		if (glfwGetKey(window, GLFW_KEY_S) == GLFW_PRESS) { camara->getTransformacion()->trasladar(0, -camara->getVelocity(),0); }
		if (glfwGetKey(window, GLFW_KEY_A) == GLFW_PRESS) { camara->getTransformacion()->trasladar(-camara->getVelocity(), 0, 0); }
		if (glfwGetKey(window, GLFW_KEY_D) == GLFW_PRESS) { camara->getTransformacion()->trasladar(camara->getVelocity(), 0, 0); }
		if (glfwGetKey(window, GLFW_KEY_C) == GLFW_PRESS) { camara->getTransformacion()->trasladar(0, 0, camara->getVelocity()); }
		

	}
}

void movimentHandler::onMouse(GLFWwindow * window, double xpos, double ypos)
{
	int width, height;
	glfwGetWindowSize(window, &width, &height);

	GLfloat xoffset = ((width / 2.0f) - static_cast<float>(xpos)) * mouseSensitive;
	GLfloat yoffset = ((height / 2.0f) - static_cast<float>(ypos)) * mouseSensitive;
	if (activo) {
		jugador->setYaw(jugador->getYaw() + xoffset);
		jugador->setPitch(jugador->getPitch() + xoffset);
		jugador->Translation()->rotarYPR(jugador->getYaw(), 0.0f, 0.0f);


		front.x = cos(glm::radians(jugador->getYaw())) * cos(glm::radians(jugador->getPitch()));
		front.y = sin(glm::radians(jugador->getYaw()));
		front.z = sin(glm::radians(jugador->getYaw())) * cos(glm::radians(jugador->getPitch()));
		front = glm::normalize(front);

		jugador->setRot(0.0f, jugador->getYaw(), 0.0f);
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
