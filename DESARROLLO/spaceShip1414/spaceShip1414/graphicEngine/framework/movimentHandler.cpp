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
#include <math.h>
#include <glm\glm.hpp>

movimentHandler::movimentHandler() : activo{ false }, mouseSensitive{ 0.015f }
{
}


movimentHandler::~movimentHandler()
{
}

void movimentHandler::onKey(GLFWwindow* window, int key, int scancode, int action, int mods, double deltaTime, TGraphicEngine* motor)
{
	motor->CamaraActiva();
	double dt = motor->getDT();
	std::cout << "TIME: " << dt << std::endl;
//	jugador->setCamPos(motor->getPosicion(camara->getNodo()));
	motor->resetTransform(camara->getNodo(), 'r');
	camara->updateCam(motor,jugador->getPos());
	if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS) { glfwSetWindowShouldClose(window, GL_TRUE); }
	if (activo) {
		
		if (glfwGetKey(window, GLFW_KEY_B) == GLFW_PRESS) { this->activo = false; motor->cambiarCamaraActiva(activo); glfwSetInputMode(window, GLFW_CURSOR, GLFW_CURSOR_NORMAL);}

		if (glfwGetKey(window, GLFW_KEY_W) == GLFW_RELEASE
			|| glfwGetKey(window, GLFW_KEY_S) == GLFW_RELEASE || 
			glfwGetKey(window, GLFW_KEY_A) == GLFW_RELEASE 
			|| glfwGetKey(window, GLFW_KEY_D) == GLFW_RELEASE) {

			jugador->actualizarFisicas(-1,0.016,0);

		}

		if (glfwGetKey(window, GLFW_KEY_W) != GLFW_RELEASE ) {
			//jugador->setPos(jugador->getPos().x, jugador->getPos().y, jugador->getPos().z - jugador->getVelocity() * dt);
			//jugador->Translation()->trasladar(0.0, 0.0, -jugador->getVelocity() * dt);
			jugador->actualizarFisicas(3,dt, 0);



		}
		if (glfwGetKey(window, GLFW_KEY_S) != GLFW_RELEASE) {
			//jugador->setPos(jugador->getPos().x, jugador->getPos().y, jugador->getVelocity() * dt + jugador->getPos().z);
			//jugador->Translation()->trasladar(0.0, 0.0, jugador->getVelocity() * dt);
			jugador->actualizarFisicas(2,dt, 0);


		}
		if (glfwGetKey(window, GLFW_KEY_A) != GLFW_RELEASE) {
			//jugador->setPos(jugador->getPos().x - jugador->getVelocity() * dt, jugador->getPos().y, jugador->getPos().z);
			//jugador->Translation()->trasladar(-jugador->getVelocity() * dt, 0.0, 0.0);
			jugador->actualizarFisicas(1,dt, 0);



		}
		if (glfwGetKey(window, GLFW_KEY_D) != GLFW_RELEASE) {
			//jugador->setPos(jugador->getPos().x + jugador->getVelocity() * dt, jugador->getPos().y, jugador->getPos().z);
			//jugador->Translation()->trasladar(jugador->getVelocity() * dt, 0.0, 0.0);
			jugador->actualizarFisicas(0,dt, 0);
			

		}
		//El fantasma esta aqui
		//motor->resetTransform(jugador->getNodo(),'t');
		//motor->trasladar(jugador->getNodo(), -jugador->getPos().x, jugador->getPos().y, -jugador->getPos().z);
		
	//	camara->updateCam(motor, motor->getPosicion(camara->getNodo()), jugador->getPos(), jugador->getPosAnt());
		//jugador->Translation()->setMatriz(jugador->Translation()->multiplicarMatriz(motor->getView(), jugador->Translation()->getMatriz()));

	}

}

void movimentHandler::onMouse(GLFWwindow * window, double xpos, double ypos, TGraphicEngine* motor)
{

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



void movimentHandler::checkKeys(GLFWwindow * window, TGraphicEngine* motor)
{
	//jugador->setCamPos(motor->getPosicion(camara->getNodo()));
	motor->CamaraActiva();
	
		motor->resetTransform(camara->getNodo(), 'r');
		camara->updateCam(motor,jugador->getPos());
	
	if (glfwGetKey(window, GLFW_KEY_W) != GLFW_RELEASE) {
		//jugador->setPos(jugador->getPos().x, jugador->getPos().y, jugador->getPos().z - jugador->getVelocity() * dt);
		//jugador->Translation()->trasladar(0.0, 0.0, -jugador->getVelocity() * dt);
		jugador->actualizarFisicas(3, 0, 0);


	}
	if (glfwGetKey(window, GLFW_KEY_S) != GLFW_RELEASE) {
		//jugador->setPos(jugador->getPos().x, jugador->getPos().y, jugador->getVelocity() * dt + jugador->getPos().z);
		//jugador->Translation()->trasladar(0.0, 0.0, jugador->getVelocity() * dt);
		jugador->actualizarFisicas(2, 0,0);

	}
	if (glfwGetKey(window, GLFW_KEY_A) != GLFW_RELEASE) {
		//jugador->setPos(jugador->getPos().x - jugador->getVelocity() * dt, jugador->getPos().y, jugador->getPos().z);
		//jugador->Translation()->trasladar(-jugador->getVelocity() * dt, 0.0, 0.0);
		jugador->actualizarFisicas(1, 0, 0);

	}
	if (glfwGetKey(window, GLFW_KEY_D) != GLFW_RELEASE) {
		//jugador->setPos(jugador->getPos().x + jugador->getVelocity() * dt, jugador->getPos().y, jugador->getPos().z);
		//jugador->Translation()->trasladar(jugador->getVelocity() * dt, 0.0, 0.0);
		jugador->actualizarFisicas(0, 0, 0);

	}

	//motor->resetTransform(jugador->getNodo(), 't');
	//motor->trasladar(jugador->getNodo(), -jugador->getPos().x, jugador->getPos().y, -jugador->getPos().z);
	
}

