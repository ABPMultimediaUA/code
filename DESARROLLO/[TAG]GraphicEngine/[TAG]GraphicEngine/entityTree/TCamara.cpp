#include "TCamara.h"
#include <iostream>
#include <glm\gtx\euler_angles.hpp>
#include <glm\gtx\matrix_cross_product.hpp>
#include <glm\gtc\matrix_transform.hpp>

TCamara::TCamara() : yaw{ 0 }, pitch{ 0 },
					 cameraPos{ 0.0f, 4.5f, 15.0f },
					 cameraFront{ 0.0f, 0.0f, -1.0f },
					 cameraUp{ 0.0f, 1.0f, 0.0f },
					 cameraSpeed{ 0.05f }, mouseSensitive{ 0.15f }
{
}

TCamara::TCamara(bool p, float x1, float y1, float z1, float x2, float y2, float z2)
{
	if (p) {
		this->setPerspectiva(x1, y1, z1, x2, y2, z2);
	}
	else {
		this->setParalela(x1, y1, z1, x2, y2, z2);
	}
}

TCamara::~TCamara()
{
	std::cout << "TCamara Detroyed" << std::endl;
}

void TCamara::setPerspectiva(float x1, float y1, float z1, float x2, float y2, float z2)
{
	this->esPerspectiva = true;
	this->p1 = glm::vec3(x1, y1, z1);
	this->p2 = glm::vec3(x2, y2, z2);
}

void TCamara::setParalela(float x1, float y1, float z1, float x2, float y2, float z2)
{
	this->esPerspectiva = false;
	this->p1 = glm::vec3(x1, y1, z1);
	this->p2 = glm::vec3(x2, y2, z2);
}

void TCamara::setWindow(GLFWwindow * ventana)
{
	this->window = ventana;
}

glm::mat4 TCamara::getViewMatrix()
{
	chechKeys();
	checkMouse();

	// obtener los parametros de visualizacion
	glm::mat4 Rot = glm::yawPitchRoll(glm::radians(yaw), glm::radians(pitch), 0.0f);
	cameraFront = glm::vec3(Rot * glm::vec4(0, 0, -1, 0));
	cameraUp = glm::vec3(Rot * glm::vec4(0, 1, 0, 0));

	// craer la matriz de vista
	return glm::lookAt(cameraPos, cameraPos + cameraFront, cameraUp);
}

glm::mat4 TCamara::getProjectionMatrix()
{
	int width, height;
	glfwGetWindowSize(window, &width, &height);

	return glm::perspective(45.0f, static_cast<float>(width) / static_cast<float>(height), 0.1f, 1000.0f);
}

glm::vec3 TCamara::getPosition()
{
	return cameraPos;
}

void TCamara::beginDraw()
{
}

void TCamara::beginDraw(unsigned int a)
{
}

void TCamara::endDraw()
{
}

void TCamara::checkMouse()
{
	double xpos, ypos;
	glfwGetCursorPos(window, &xpos, &ypos);

	int width, height;
	glfwGetWindowSize(window, &width, &height);
	glfwSetCursorPos(window, width / 2.0, height / 2.0);

	GLfloat xoffset = ((width / 2.0f) - static_cast<float>(xpos)) * mouseSensitive;
	GLfloat yoffset = ((height / 2.0f) - static_cast<float>(ypos)) * mouseSensitive;

	yaw += xoffset;
	pitch += yoffset;
}

void TCamara::chechKeys()
{
	if (isKeyPress(GLFW_KEY_W)) { cameraPos += cameraSpeed * cameraFront; }
	if (isKeyPress(GLFW_KEY_S)) { cameraPos -= cameraSpeed * cameraFront; }
	if (isKeyPress(GLFW_KEY_A)) { cameraPos -= glm::normalize(glm::cross(cameraFront, cameraUp)) * cameraSpeed; }
	if (isKeyPress(GLFW_KEY_D)) { cameraPos += glm::normalize(glm::cross(cameraFront, cameraUp)) * cameraSpeed; }
}

inline bool TCamara::isKeyPress(int key)
{
	return (glfwGetKey(window, key) == GLFW_PRESS);
}
