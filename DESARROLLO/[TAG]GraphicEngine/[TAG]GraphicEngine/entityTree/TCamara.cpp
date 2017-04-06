#include "TCamara.h"
#include <iostream>
#include <glm\gtx\euler_angles.hpp>
#include <glm\gtx\matrix_cross_product.hpp>
#include <glm\gtc\matrix_transform.hpp>
#include <glm\gtc\matrix_inverse.hpp>
#include "..\framework\openGLShader.h"

TCamara::TCamara()
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

void TCamara::setPerspectiva(float xu, float yu, float zu, float xf, float yf, float zf)
{
	this->esPerspectiva = true;
	this->front = glm::vec3(xf, yf, zf);
	this->up = glm::vec3(xu, yu, zu);
}

void TCamara::setParalela(float xu, float yu, float zu, float xf, float yf, float zf)
{
	this->esPerspectiva = false;
	this->front = glm::vec3(xf, yf, zf);
	this->up = glm::vec3(xu, yu, zu);
}

void TCamara::setWindow(GLFWwindow * ventana)
{
	this->window = ventana;
}

void TCamara::setView(glm::mat4 v)
{
	this->view = glm::inverse(v);
}

glm::mat4 TCamara::getView()
{
	return view;
}

/*glm::mat4 TCamara::getViewMatrix()
{
	chechKeys();
	checkMouse();

	// obtener los parametros de visualizacion
	front = glm::vec3(r * glm::vec4(front.x, front.y, front.z, 0));
	up = glm::vec3(r * glm::vec4(up.x, up.y, up.z, 0));

	// craer la matriz de vista
	return glm::lookAt(cameraPos, cameraPos + cameraFront, cameraUp);
}*/

glm::mat4 TCamara::getProjectionMatrix()
{
	int width, height;
	glfwGetWindowSize(window, &width, &height);

	return glm::perspective(up.x, static_cast<float>(width) / static_cast<float>(height), up.y, up.z);
}

void TCamara::beginDraw()
{
}

void TCamara::beginDraw(openGLShader& shader, const glm::mat4& view, const glm::mat4& proyection)
{
}

void TCamara::endDraw()
{
}

void TCamara::activar()
{
	activa = true;
}

void TCamara::desactivar()
{
	activa = false;
}

bool TCamara::getActiva()
{
	return activa;
}

//void TCamara::checkMouse()
//{
//	double xpos, ypos;
//	glfwGetCursorPos(window, &xpos, &ypos);
//
//	int width, height;
//	glfwGetWindowSize(window, &width, &height);
//	glfwSetCursorPos(window, width / 2.0, height / 2.0);
//
//	GLfloat xoffset = ((width / 2.0f) - static_cast<float>(xpos)) * mouseSensitive;
//	GLfloat yoffset = ((height / 2.0f) - static_cast<float>(ypos)) * mouseSensitive;
//
//	yaw += xoffset;
//	pitch += yoffset;
//}
//
//void TCamara::chechKeys()
//{
//	if (isKeyPress(GLFW_KEY_W)) { cameraPos += cameraSpeed * front; }
//	if (isKeyPress(GLFW_KEY_S)) { cameraPos -= cameraSpeed * front; }
//	if (isKeyPress(GLFW_KEY_A)) { cameraPos -= glm::normalize(glm::cross(front, up)) * cameraSpeed; }
//	if (isKeyPress(GLFW_KEY_D)) { cameraPos += glm::normalize(glm::cross(front, up)) * cameraSpeed; }
//}

/*inline bool TCamara::isKeyPress(int key)
{
	return (glfwGetKey(window, key) == GLFW_PRESS);
}*/
