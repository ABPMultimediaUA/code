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
#include "SFML\Graphics.hpp"

movimentHandler::movimentHandler() : activo{ false }, mouseSensitive{ 0.015f }
{
}


movimentHandler::~movimentHandler()
{
}

void movimentHandler::onKey(GLFWwindow* window, int key, int scancode, int action, int mods, double deltaTime, TGraphicEngine* motor)
{
	motor->CamaraActiva();
	//tecla = -1;
	double dt = motor->getDT();
	std::cout << "TIME: " << dt << std::endl;
//	jugador->setCamPos(motor->getPosicion(camara->getNodo()));
//	motor->resetTransform(camara->getNodo(), 'r');
	//camara->updateCam(motor,jugador->getPos());
	if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS) { glfwSetWindowShouldClose(window, GL_TRUE); }
	if (activo) {
		
	//	if (glfwGetKey(window, GLFW_KEY_B) == GLFW_PRESS) { this->activo = false; motor->cambiarCamaraActiva(activo); glfwSetInputMode(window, GLFW_CURSOR, GLFW_CURSOR_NORMAL);}

		//if (glfwGetKey(window, GLFW_KEY_W) == GLFW_RELEASE
		//	|| glfwGetKey(window, GLFW_KEY_S) == GLFW_RELEASE || 
		//	glfwGetKey(window, GLFW_KEY_A) == GLFW_RELEASE 
		//	|| glfwGetKey(window, GLFW_KEY_D) == GLFW_RELEASE) {

		//	//jugador->actualizarFisicas(-1,0.016,0);
		//	std::cout << "CACA -1" << std::endl;
		//	tecla = -1;
		//	//motor->resetTransform(jugador->getNodo(), 'r');
		//}

		if ((key == GLFW_KEY_W || key == GLFW_KEY_A || key == GLFW_KEY_S || key == GLFW_KEY_D) && action == GLFW_RELEASE) {
			//std::cout << "CACA -1" << std::endl;
			//tecla = -1;
		}

		//if (glfwGetKey(window, GLFW_KEY_W) == GLFW_REPEAT) {
			
		if(key == GLFW_KEY_W && (action == GLFW_PRESS || action == GLFW_REPEAT)){
			//std::cout << "CACA 3" << std::endl;

			//jugador->actualizarFisicas(3,dt, 0);
			//tecla = TECLA_W;
		/*	motor->resetTransform(jugador->getNodo(), 'r');
			motor->rotarYPR(jugador->getNodo(), 180, 0.0, 0.0f);*/
		}
		if (key == GLFW_KEY_S && (action == GLFW_PRESS || action == GLFW_REPEAT)) {
			//std::cout << "CACA 2" << std::endl;

			//jugador->actualizarFisicas(2,dt, 0);
			//tecla = TECLA_S;
			//motor->resetTransform(jugador->getNodo(), 'r');
			//motor->rotarYPR(jugador->getNodo(), 0, 0.0, 0.0f);

		}
		if (key == GLFW_KEY_A && (action == GLFW_PRESS || action == GLFW_REPEAT)) {
			//std::cout << "CACA 1" << std::endl;

			//jugador->actualizarFisicas(1,dt, 0);
		//	tecla = TECLA_A;
			//motor->resetTransform(jugador->getNodo(), 'r');
			//motor->rotarYPR(jugador->getNodo(), -90, 0.0, 0.0f);
		}
		if (key == GLFW_KEY_D && (action == GLFW_PRESS || action == GLFW_REPEAT)) {
			//std::cout << "CACA 0" << std::endl;

			//jugador->actualizarFisicas(0,dt, 0);
		//	tecla = TECLA_D;
			//motor->resetTransform(jugador->getNodo(), 'r');
			//motor->rotarYPR(jugador->getNodo(), 90, 0.0, 0.0f);

		}
		if (glfwGetKey(window, GLFW_KEY_N) != GLFW_RELEASE) {

			//jugador->actualizarFisicas(3,dt, 0);
			motor->changeState(1);
			/*	motor->resetTransform(jugador->getNodo(), 'r');
			motor->rotarYPR(jugador->getNodo(), 180, 0.0, 0.0f);*/
		}

		//if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
		//{
		//	std::cout << "Jump PLayer" << std::endl;
		//}

	}

}

void movimentHandler::onMouse(GLFWwindow * window, double xpos, double ypos, TGraphicEngine* motor)
{

	int width, height;
	glfwGetWindowSize(window, &width, &height);

	//float anguloRaton;

	//glm::mat4 projection = motor->getProjection();
	//projection = glm::inverse(projection);
	//float x = (2.0f*xpos) / (float)width - 1.0f;
	//float y = 1.0f - (2.0f*ypos) / (float)height;
	//float z = 1.0f;

	//glm::vec3 ray_nds = glm::vec3(x, y, z);
	//glm::vec4 ray_clip = glm::vec4(ray_nds.x, ray_nds.y, -1.0, 1.0);
	//glm::vec4 ray_eye = glm::inverse(motor->getProjection()) * ray_clip;
	//ray_eye = glm::vec4(ray_eye.x,ray_eye.y,-1.0,0.0);
	//glm::vec3 ray_wor = glm::vec3(glm::inverse(camara->getTCamara()->getView())*ray_eye);
	//ray_wor = glm::normalize(ray_wor);
	////anguloRaton = -atan2f(2 * xpos / width - 1, 1 - 2 * ypos / height) * 180 / 3.14;
	//std::cout << " angulo: " << ray_wor.x<<" "<<ray_wor.y<<" "<<ray_wor.z << std::endl;
	//jugador->translation(motor, ray_nds.x, ray_nds.y, ray_nds.z);
	/*motor->look(jugador->getNodo(), jugador->getPos(),ray_wor,glm::vec3(0,1
		,0));*/
	//glm::vec4 worldCoordinates = projection * glm::vec4(2.0 * xpos / width - 1.0, 2.0 * ypos / height - 1.0, 45.0f, 1.0);
	

	//
	//std::cout <<" angulo: "<< anguloRaton<< std::endl;
	////anguloRaton = -atan2f(xpos - width / 2, ypos - height / 2) * 180 / 3.14;

	//jugador->setYaw(anguloRaton);
	//motor->resetTransform(jugador->getNodo(),'r');
	////std::cout << jugador->getYaw() << std::endl;
	////
	//motor->rotarYPR(jugador->getNodo() ,jugador->getYaw(), 0.0, 0.0f);
	//if (glfwGetMouseButton(window, GLFW_MOUSE_BUTTON_RIGHT)) {

		//if (xpos > offsetRango) {

		//	angle += 5.0f;
		//	//	jugador->rotationYPR(motor, 5, 0.0f, 0.0f);


		//}

		//else if (xpos < offsetRango) {
		//	angle -= 5.0f;
		//	//jugador->rotationYPR(motor, -5, 0.0f, 0.0f);

		//}
		//camara->setYaw(angle);
		//	//anguloRaton = angle;
		//offsetRango = xpos;
		////	motor->getPosicion(camara->getNodo());
	
		//	double dt = motor->getDT();
		//jugador->setYaw(anguloRaton);
		//glm::vec3 eye;
		//	//eye.x = rho*sin((phi * 180) / 3.14)*cos((theta*180)/3.14);
		//	//eye.y = rho*sin((phi * 180) / 3.14)*sin((theta * 180) / 3.14);
		//	//eye.z = rho*cos((phi * 180) / 3.14);
		//	//
		//eye.x = jugador->getPos().x + rho*cos(angle*0.016);
		//eye.y = 0;
		//eye.z = jugador->getPos().z + rho*sin(angle*0.016);

		//	std::cout << "CACA: " << glm::to_string(motor->getPosicion(camara->getNodo())) << std::endl;

		//camara->updateCam(motor, eye, jugador->getPos());
		//	jugador->setYaw(angle*0.016);

		//	jugador->setCamPos(motor->getPosicion(camara->getNodo()));
		//camara->rotationYPR(motor, (180 + jugador->getYaw()) * dt, 0, 0);

	//}


	//	jugador->setYaw(anguloRaton);
	//camara->setYaw(anguloRaton);
	//	motor->resetTransform(camara->getNodo(), 'r');
	//motor->rotarYPR(camara->getNodo(), -camara->getYaw(), 0.0f, 0.0f);
	//std::cout << camara->getYaw() << std::endl;
	/*	motor->resetTransform(jugador->getNodo(),'r');
	motor->rotarYPR(jugador->getNodo(), -jugador->getYaw(), 0.0f, 0.0f);
	*/
	//glm::vec3 posCam(jugador->getPos().x, jugador->getPos().y - 15.0f, jugador->getPos().z - 15.0f);
	//glm::vec3 eye(jugador->getPos());
	//glm::vec3 up(0, 1, 0);

	//glm::lookAt(posCam, eye, up);
	//camara->rotationYPR(motor, -camara->getYaw() * motor->getDT(), 0.0f, 0.0f);


	//glm::vec3 pos;
	//pos.x = (2.0f * xpos) / width - 1.0f;
	//pos.y = 1.0f - (2.0f * ypos) / height;
	//pos.z = 1.0f;
	//glm::vec3  ray = glm::vec3(pos.x,pos.y,pos.z);
	//glm::vec4 ray_clip = glm::vec4(ray.x,ray.y, -1.0, 1.0);
	//glm::vec4 ray_eye = glm::inverse(motor->getProjection()) * ray_clip;
	//glm::vec3 ray_wor = glm::vec3((glm::inverse(motor->getView()) * ray_eye).x, (glm::inverse(motor->getView()) * ray_eye).y, (glm::inverse(motor->getView()) * ray_eye).x);
	//ray_wor = glm::normalize(ray_wor);

	//anguloRaton = -atan2f(ray_wor.x, ray_wor.z);
	////std::cout << " ANGLE: " << anguloRaton << std::endl;
	////jugador->Rotation()->rotar(anguloRaton,0.0f,1.0f,0.0f);
	//jugador->rotationYPR(motor, anguloRaton, 0, 0);
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



void movimentHandler::checkKeys(GLFWwindow * window, TGraphicEngine* motor)
{
	//jugador->setCamPos(motor->getPosicion(camara->getNodo()));
	motor->CamaraActiva();
	if (!sf::Keyboard::isKeyPressed(sf::Keyboard::W) ||
		!sf::Keyboard::isKeyPressed(sf::Keyboard::A) ||
		!sf::Keyboard::isKeyPressed(sf::Keyboard::D) ||
		!sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
		tecla = -1;
	}

	if (jugador->getImpulso() == false) {


		if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
		{
			std::cout << "W" << std::endl;
			tecla = TECLA_W;
		}

		
		else if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
		{
			std::cout << "A" << std::endl;
			tecla = TECLA_A;
		}


		else if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
		{
			std::cout << "S" << std::endl;
			tecla = TECLA_S;
		}

		else if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
		{
			std::cout << "D" << std::endl;
			tecla = TECLA_D;
		}

		else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num1))
		{
			std::cout << "1" << std::endl;
			tecla = TECLA_1;
			jugador->cambiarAnimacion('a');
		}
		else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num2))
		{
			std::cout << "2" << std::endl;
			tecla = TECLA_2;
			jugador->cambiarAnimacion('c');
		}

	

		jugador->actualizarFisicas(tecla, 0, 0);


	}

	else
	{
		jugador->disminuirTem();
		if (jugador->getTemporizador() == 0.0f) {
			jugador->setImpulso(false);

		}

		jugador->actualizarPosicion();
	}
	motor->resetTransform(camara->getNodo(), 'r');
	camara->updateCam(motor, jugador->getPos(), tecla);
	//motor->resetTransform(jugador->getNodo(), 't');
	//motor->trasladar(jugador->getNodo(), jugador->getPos().x, jugador->getPos().y, jugador->getPos().z);
	
}
