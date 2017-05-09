#include "movimentHandler.h"
#include "../entityTree/TTransform.h"
#include "../player.h"
#include "TGraphicEngine.h"
#include <math.h>
#include <glm/gtx/string_cast.hpp>
#include <iostream>
#include <glm\mat4x4.hpp>
#include <glm\gtc\matrix_transform.hpp>
#include <glm\gtx\euler_angles.hpp>
#include <glm/gtx/matrix_decompose.hpp>

movimentHandler::movimentHandler() : activo{ false }, mouseSensitive{ 0.015f }, first{ true }, yaw{ 0 }, pitch{ 0 }
{
}


movimentHandler::~movimentHandler()
{
}

void movimentHandler::onKey(GLFWwindow* window, int key, int scancode, int action, int mods, double deltaTime, TGraphicEngine* motor)
{
		if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS) { glfwSetWindowShouldClose(window, GL_TRUE); }
	if (activo) {
		if (first)
		{
			glfwSetInputMode(window, GLFW_CURSOR, GLFW_CURSOR_NORMAL);
			first = false;
		}
		if (glfwGetKey(window, GLFW_KEY_L) == GLFW_PRESS) { first = true; this->activo = false; motor->cambiarCamaraActiva(0); glfwSetInputMode(window, GLFW_CURSOR, GLFW_CURSOR_NORMAL);}
		if (glfwGetKey(window, GLFW_KEY_W) == GLFW_PRESS) { jugador->translation(motor, 0, 0, -jugador->getVelocity()); }
		if (glfwGetKey(window, GLFW_KEY_S) == GLFW_PRESS) { jugador->translation(motor,0, 0, jugador->getVelocity()); }
		if (glfwGetKey(window, GLFW_KEY_A) == GLFW_PRESS) { jugador->translation(motor,-jugador->getVelocity(), 0, 0); }
		if (glfwGetKey(window, GLFW_KEY_D) == GLFW_PRESS) { jugador->translation(motor,jugador->getVelocity(), 0, 0); }
	}
	else {
		if (first) 
		{
			int width, height;
			glfwGetWindowSize(window, &width, &height);
			glfwSetCursorPos(window, width / 2.0, height / 2.0);
			glfwSetInputMode(window, GLFW_CURSOR, GLFW_CURSOR_DISABLED);
			first = false;
		}
		if (glfwGetKey(window, GLFW_KEY_L) == GLFW_PRESS) { first = true; activo = true; motor->cambiarCamaraActiva(1); glfwSetInputMode(window, GLFW_CURSOR, GLFW_CURSOR_DISABLED); }
		if (glfwGetKey(window, GLFW_KEY_W) == GLFW_PRESS) { motor->trasladar(camara,  0,    0, -1.0f); }
		if (glfwGetKey(window, GLFW_KEY_S) == GLFW_PRESS) { motor->trasladar(camara,  0,    0,  1.0f); }
		if (glfwGetKey(window, GLFW_KEY_A) == GLFW_PRESS) { motor->trasladar(camara, -1.0f, 0,     0); }
		if (glfwGetKey(window, GLFW_KEY_D) == GLFW_PRESS) { motor->trasladar(camara,  1.0f, 0,     0); }
	}
}

void movimentHandler::onMouse(GLFWwindow * window, double xpos, double ypos, TGraphicEngine* motor)
{
	int width, height;
	glfwGetWindowSize(window, &width, &height);

	GLfloat xoffset;
	GLfloat yoffset;

	if (activo) 
	{
		xoffset = (static_cast<float>(xpos) - (width / 2.0f));
		yoffset = (static_cast<float>(ypos) - (height / 2.0f));
		
		float angulo = -atan2f(xoffset, yoffset);
		/*jugador->setYaw(xoffset);
		jugador->setPitch(yoffset);
		jugador->Rotation()->rotarYPR(0.0f,jugador->getYaw(),jugador->getPitch());*/
		std::cout << "angulo" << angulo << std::endl;
		/*glm::mat4 anguloM(1.0f);
		anguloM
			anguloM = anguloM;*/
		//motor->resetTransform(jugador->getNodo(), 'r');
		jugador->rotation(motor, angulo, 0, 1, 0);
	}
	else 
	{
		double xxpos, yypos;
		glfwGetCursorPos(window, &xxpos, &yypos);

		xoffset = ((width / 2.0f) - static_cast<float>(xxpos)) * mouseSensitive;
		yoffset = ((height / 2.0f) - static_cast<float>(yypos)) * mouseSensitive;

		motor->resetTransform(camara, 2);
		motor->rotarYPR(camara, xoffset, yoffset, 0.0f);
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

void movimentHandler::setCamara(TNodo * c)
{
	camara = c;
}
