#include "TRecursoCamera.h"
#include <glm\gtx\euler_angles.hpp>
#include <glm\gtx\matrix_cross_product.hpp>
#include <glm\gtc\matrix_transform.hpp>


TRecursoCamera::TRecursoCamera() : yaw{ 0 }, pitch{ 0 },
								   cameraPos{ 0.0f, 4.5f, 15.0f },
								   cameraFront{ 0.0f, 0.0f, -1.0f },
								   cameraUp{ 0.0f, 1.0f, 0.0f },
								   cameraSpeed{ 0.05f }, mouseSensitive{ 0.15f }
{
}


TRecursoCamera::~TRecursoCamera()
{
}

void TRecursoCamera::setWindow(GLFWwindow * ventana)
{
	this->window = ventana;
}

glm::mat4 TRecursoCamera::getViewMatrix()
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

glm::mat4 TRecursoCamera::getProjectionMatrix()
{
	int width, height;
	glfwGetWindowSize(window, &width, &height);

	return glm::perspective(45.0f, static_cast<float>(width) / static_cast<float>(height), 0.1f, 1000.0f);
}

glm::vec3 TRecursoCamera::getPosition()
{
	return cameraPos;
}

bool TRecursoCamera::cargarFichero(std::string s)
{
	return false;
}

void TRecursoCamera::draw()
{
}

void TRecursoCamera::checkMouse()
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

void TRecursoCamera::chechKeys()
{
	if (isKeyPress(GLFW_KEY_W)) { cameraPos += cameraSpeed * cameraFront;										}
	if (isKeyPress(GLFW_KEY_S)) { cameraPos -= cameraSpeed * cameraFront;										}
	if (isKeyPress(GLFW_KEY_A)) { cameraPos -= glm::normalize(glm::cross(cameraFront, cameraUp)) * cameraSpeed; }
	if (isKeyPress(GLFW_KEY_D)) { cameraPos += glm::normalize(glm::cross(cameraFront, cameraUp)) * cameraSpeed; }
}

inline bool TRecursoCamera::isKeyPress(int key)
{
	return (glfwGetKey(window, key) == GLFW_PRESS);
}
