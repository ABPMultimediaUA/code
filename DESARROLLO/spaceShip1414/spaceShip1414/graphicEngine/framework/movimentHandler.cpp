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
		if (glfwGetKey(window, GLFW_KEY_B) == GLFW_PRESS) { this->activo = false; motor->cambiarCamaraActiva(activo); glfwSetInputMode(window, GLFW_CURSOR, GLFW_CURSOR_NORMAL);}

		if (glfwGetKey(window, GLFW_KEY_W) == GLFW_RELEASE
			|| glfwGetKey(window, GLFW_KEY_S) == GLFW_RELEASE || 
			glfwGetKey(window, GLFW_KEY_A) == GLFW_RELEASE 
			|| glfwGetKey(window, GLFW_KEY_D) == GLFW_RELEASE) {

			jugador->actualizarFisicas(-1,dt);

		}

		if (glfwGetKey(window, GLFW_KEY_W) != GLFW_RELEASE ) {
			//jugador->setPos(jugador->getPos().x, jugador->getPos().y, jugador->getPos().z - jugador->getVelocity() * dt);
			//jugador->Translation()->trasladar(0.0, 0.0, -jugador->getVelocity() * dt);
			jugador->actualizarFisicas(3,dt);
			

		}
		if (glfwGetKey(window, GLFW_KEY_S) != GLFW_RELEASE) {
			//jugador->setPos(jugador->getPos().x, jugador->getPos().y, jugador->getVelocity() * dt + jugador->getPos().z);
			//jugador->Translation()->trasladar(0.0, 0.0, jugador->getVelocity() * dt);
			jugador->actualizarFisicas(2,dt);

		}
		if (glfwGetKey(window, GLFW_KEY_A) != GLFW_RELEASE) {
			//jugador->setPos(jugador->getPos().x - jugador->getVelocity() * dt, jugador->getPos().y, jugador->getPos().z);
			//jugador->Translation()->trasladar(-jugador->getVelocity() * dt, 0.0, 0.0);
			jugador->actualizarFisicas(1,dt);

		}
		if (glfwGetKey(window, GLFW_KEY_D) != GLFW_RELEASE) {
			//jugador->setPos(jugador->getPos().x + jugador->getVelocity() * dt, jugador->getPos().y, jugador->getPos().z);
			//jugador->Translation()->trasladar(jugador->getVelocity() * dt, 0.0, 0.0);
			jugador->actualizarFisicas(0,dt);

		}

		jugador->Translation()->resetMatriz();
		jugador->Translation()->trasladar(jugador->getPos().x, jugador->getPos().y, -jugador->getPos().z);
		//jugador->Translation()->setMatriz(jugador->Translation()->multiplicarMatriz(motor->getView(), jugador->Translation()->getMatriz()));
			


	}
	else {
	
		if (glfwGetKey(window, GLFW_KEY_B) == GLFW_PRESS) { this->activo = true; motor->cambiarCamaraActiva(activo); glfwSetInputMode(window, GLFW_CURSOR, GLFW_CURSOR_DISABLED);}
		if (glfwGetKey(window, GLFW_KEY_I) == GLFW_PRESS) { camara->Translation()->trasladar(0,camara->getVelocity(), 0); }
		if (glfwGetKey(window, GLFW_KEY_K) == GLFW_PRESS) { camara->Translation()->trasladar(0, -camara->getVelocity(),0); }
		if (glfwGetKey(window, GLFW_KEY_J) == GLFW_PRESS) { camara->Translation()->trasladar(-camara->getVelocity(), 0, 0); }
		if (glfwGetKey(window, GLFW_KEY_L) == GLFW_PRESS) { camara->Translation()->trasladar(camara->getVelocity(), 0, 0); }
		if (glfwGetKey(window, GLFW_KEY_C) == GLFW_PRESS) { camara->Translation()->trasladar(0, 0, camara->getVelocity()); }
		if (glfwGetKey(window, GLFW_KEY_W) == GLFW_PRESS) {
			jugador->setPos(jugador->getPos().x, jugador->getPos().y, jugador->getPos().z + jugador->getVelocity() * dt);
			jugador->Translation()->trasladar(0.0, 0.0, jugador->getVelocity() * dt);
			//camara->Translation()->trasladar(0.0, 0.0, jugador->getVelocity() * dt);

		}
		if (glfwGetKey(window, GLFW_KEY_S) == GLFW_PRESS) {
			jugador->setPos(jugador->getPos().x, jugador->getPos().y, jugador->getVelocity() * dt - jugador->getPos().z);
			jugador->Translation()->trasladar(0.0, 0.0, -jugador->getVelocity() * dt);
			//camara->Translation()->trasladar(0.0, 0.0, -jugador->getVelocity() * dt);
		}
		if (glfwGetKey(window, GLFW_KEY_A) == GLFW_PRESS) {
			jugador->setPos(jugador->getPos().x - jugador->getVelocity() * dt, jugador->getPos().y, jugador->getPos().z);
			jugador->Translation()->trasladar(-jugador->getVelocity() * dt, 0.0, 0.0);
			//camara->Translation()->trasladar(-jugador->getVelocity() * dt, 0.0, 0.0);
		}
		if (glfwGetKey(window, GLFW_KEY_D) == GLFW_PRESS) {
			jugador->setPos(jugador->getPos().x + jugador->getVelocity() * dt, jugador->getPos().y, jugador->getPos().z);
			jugador->Translation()->trasladar(jugador->getVelocity() * dt, 0.0, 0.0);
			//camara->Translation()->trasladar(jugador->getVelocity() * dt, 0.0, 0.0);
		}
		
		motor->getCamaraActiva()->chechKeys();

	}
}

void movimentHandler::onMouse(GLFWwindow * window, double xpos, double ypos, TGraphicEngine* motor)
{
	int width, height;
	glfwGetWindowSize(window, &width, &height);

	float anguloRaton;
	glm::vec3 pos;
		anguloRaton = -atan2f(xpos - width/2, ypos - height / 2) * 180 / 3.14;
		
		jugador->setYaw(anguloRaton);
		jugador->Rotation()->resetMatriz();
		std::cout << jugador->getYaw() << std::endl;

		jugador->Rotation()->rotarYPR(-jugador->getYaw(),0.0,0.0f);
		
	//pos.x = (2.0f * xpos) / width - 1.0f;
	//pos.y = 1.0f - (2.0f * ypos) / height;
	//pos.z = 1.0f;
	//glm::vec3  ray = glm::vec3(pos.x,pos.y,pos.z);
	//glm::vec4 ray_clip = glm::vec4(ray.x,ray.y, -1.0, 1.0);
	//glm::vec4 ray_eye = glm::inverse(motor->getCamaraActiva()->getProjectionMatrix()) * ray_clip;
	//glm::vec3 ray_wor = glm::vec3((glm::inverse(motor->getCamaraActiva()->getView()) * ray_eye).x, (glm::inverse(motor->getCamaraActiva()->getView()) * ray_eye).y, (glm::inverse(motor->getCamaraActiva()->getView()) * ray_eye).x);
	//ray_wor = glm::normalize(ray_wor);

	//anguloRaton = -atan2f(ray_wor.x, ray_wor.z);
	//std::cout << " ANGLE: " << anguloRaton << std::endl;
	//jugador->Rotation()->rotar(anguloRaton,0.0f,1.0f,0.0f);

	// don't forget to normalise the vector at some point


	//glm::vec4 newPos(pos.x, pos.y, );
	////GLfloat xoffset = (static_cast<float>(xpos) * mouseSensitive-(width / 2.0f));
	////GLfloat yoffset = (static_cast<float>(ypos) * mouseSensitive - (width / 2.0f));
	//////if (activo) {
	//
	//	anguloRaton = -atan2f(posRaton.x - width/2, posRaton.y - height / 2) * 180 / 3.14;
	////	std::cout <<xpos<<" "<< width << " " <<ypos<<" "<< height

	//		

	//	jugador->Rotation()->rotar((anguloRaton + 90) * motor->getDT(), 0.0f, 1.0f, 0.0f);

		//jugador->setYaw(jugador->getYaw() + xoffset);
		//jugador->setPitch(jugador->getPitch() + yoffset);
		//jugador->Translation()->rotarYPR(jugador->getYaw(), 0.0f, 0.0f);

		/*
		front.x = cos(glm::radians(jugador->getYaw())) * cos(glm::radians(jugador->getPitch()));
		front.y = sin(glm::radians(jugador->getYaw()));
		front.z = sin(glm::radians(jugador->getYaw())) * cos(glm::radians(jugador->getPitch()));
		front = glm::normalize(front);

		jugador->setRot(0.0f, jugador->getYaw(), 0.0f);*/
	//}
	//else {
	//	glfwSetCursorPos(window, width / 2.0, height / 2.0);
	//}
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



void movimentHandler::checkKeys(GLFWwindow * window)
{
	if (glfwGetKey(window, GLFW_KEY_W) != GLFW_RELEASE) {
		//jugador->setPos(jugador->getPos().x, jugador->getPos().y, jugador->getPos().z - jugador->getVelocity() * dt);
		//jugador->Translation()->trasladar(0.0, 0.0, -jugador->getVelocity() * dt);
		jugador->actualizarFisicas(3, 0);


	}
	if (glfwGetKey(window, GLFW_KEY_S) != GLFW_RELEASE) {
		//jugador->setPos(jugador->getPos().x, jugador->getPos().y, jugador->getVelocity() * dt + jugador->getPos().z);
		//jugador->Translation()->trasladar(0.0, 0.0, jugador->getVelocity() * dt);
		jugador->actualizarFisicas(2, 0);

	}
	if (glfwGetKey(window, GLFW_KEY_A) != GLFW_RELEASE) {
		//jugador->setPos(jugador->getPos().x - jugador->getVelocity() * dt, jugador->getPos().y, jugador->getPos().z);
		//jugador->Translation()->trasladar(-jugador->getVelocity() * dt, 0.0, 0.0);
		jugador->actualizarFisicas(1, 0);

	}
	if (glfwGetKey(window, GLFW_KEY_D) != GLFW_RELEASE) {
		//jugador->setPos(jugador->getPos().x + jugador->getVelocity() * dt, jugador->getPos().y, jugador->getPos().z);
		//jugador->Translation()->trasladar(jugador->getVelocity() * dt, 0.0, 0.0);
		jugador->actualizarFisicas(0, 0);

	}

		jugador->Translation()->resetMatriz();
		jugador->Translation()->trasladar(jugador->getPos().x, jugador->getPos().y, -jugador->getPos().z);
}