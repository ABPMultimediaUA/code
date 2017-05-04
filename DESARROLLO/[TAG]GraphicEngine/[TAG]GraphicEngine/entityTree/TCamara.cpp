#include "TCamara.h"
#include <iostream>
#include <glm\gtx\euler_angles.hpp>
#include <glm\gtx\matrix_cross_product.hpp>
#include <glm\gtc\matrix_transform.hpp>
#include <glm\gtc\matrix_inverse.hpp>
#include <glm/gtx/quaternion.hpp>
#include <glm/gtc/type_ptr.hpp>
#include "..\framework\openGLShader.h"

TCamara::TCamara(float fovy, float aspect, float near, float far) : yaw{ 0 }, pitch{ 0 },
cameraPos{ 0.0f, 4.5f, 15.0f },
cameraFront{ 0.0f, 0.0f, -1.0f },
cameraUp{ 0.0f, 1.0f, 0.0f },
cameraSpeed{ 0.05f }, mouseSensitive{ 0.15f }, 
tipo{ 0 }, activa{ false }, esPerspectiva{ true }, 
front{ fovy, aspect, 0 }, up{ near, far, 0 }
{
}

TCamara::TCamara(bool p, float left, float right, float bottom, float top, float near, float far) : tipo{ 1 }
{
	if (p) {
		this->setPerspectiva(left, right, bottom, top, near, far);
	}
	else {
		this->setParalela(left, right, bottom, top, near, far);
	}
}

TCamara::TCamara(bool pe, float fovy, float aspect, float near, float far) : tipo{ 1 }, esPerspectiva{ pe }, front{ fovy, aspect, 0 }, up{ near, far, 0}
{}

TCamara::~TCamara()
{
	std::cout << "TCamara Detroyed" << std::endl;
}

void TCamara::setPerspectiva(float left, float right, float bottom, float top, float near, float far)
{
	this->esPerspectiva = true;
	this->front = glm::vec3(left, right, near);
	this->up = glm::vec3(bottom, top, far);
}

void TCamara::setParalela(float left, float right, float bottom, float top, float near, float far)
{
	this->esPerspectiva = false;
	this->front = glm::vec3(left, right, near);
	this->up = glm::vec3(bottom, top, far);
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
	if (tipo!=0) {
		return view;
	}
	else {
		chechKeys();
		checkMouse();

		// obtener los parametros de visualizacion
		glm::mat4 Rot = glm::yawPitchRoll(glm::radians(yaw), glm::radians(pitch), 0.0f);
		cameraFront = glm::vec3(Rot * glm::vec4(0, 0, -1, 0));
		cameraUp = glm::vec3(Rot * glm::vec4(0, 1, 0, 0));

		// craer la matriz de vista
		return glm::lookAt(cameraPos, cameraPos + cameraFront, cameraUp);
	}
}

glm::mat4 TCamara::getProjectionMatrix()
{
	if (tipo!=0) {
		if (esPerspectiva) {
			return glm::perspective(front.x, front.y, up.x, up.y);
			//return glm::frustum(front.x, front.y, up.x, up.y, front.z, up.z);
		}
		else {
			return glm::ortho(front.x, front.y, up.x, up.y, front.z, up.z);
		}
	}
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

char TCamara::getTipo()
{
	return tipo;
}

void TCamara::setTipo(char t)
{
	this->tipo = t;
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
	if (isKeyPress(GLFW_KEY_W)) { cameraPos += cameraSpeed * front; }
	if (isKeyPress(GLFW_KEY_S)) { cameraPos -= cameraSpeed * front; }
	if (isKeyPress(GLFW_KEY_A)) { cameraPos -= up * cameraSpeed; }
	if (isKeyPress(GLFW_KEY_D)) { cameraPos += up * cameraSpeed; }
}

inline bool TCamara::isKeyPress(int key)
{
	return (glfwGetKey(window, key) == GLFW_PRESS);
}