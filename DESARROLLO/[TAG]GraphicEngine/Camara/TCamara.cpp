#include "TCamara.h"
#include <iostream>

//Valores por defecto de la camara
const GLfloat YAW = -90.0f;
const GLfloat PITCH = 0.0f;
const GLfloat SPEED = 3.0f;
const GLfloat SENSITIVTY = 0.25f;
const GLfloat ZOOM = 45.0f;

TCamara::TCamara(glm::vec3 pos)
{
	Position = pos;
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

void TCamara::direccion(glm::vec3 v1, glm::vec3 v2)
{
	glm::vec3 dir = glm::normalize(v1 - v2);
}

glm::mat4 TCamara::GetViewMatrix()
{
	return glm::lookAt(this->Position, this->Position + this->Front, this->Up);
}

// Processes input received from any keyboard-like input system. Accepts input parameter in the form of camera defined ENUM (to abstract it from windowing systems)
void TCamara::procesarTeclado(Camera_Movement direction, GLfloat deltaTime)
{
	GLfloat velocity = this->MovementSpeed * deltaTime;
	if (direction == ADELANTE)
		this->Position += this->Front * velocity;
	if (direction == ATRAS)
		this->Position -= this->Front * velocity;
	if (direction == IZQ)
		this->Position -= this->Right * velocity;
	if (direction == DER)
		this->Position += this->Right * velocity;
}

// Processes input received from a mouse input system. Expects the offset value in both the x and y direction.
void TCamara::procesarMovimientoRaton(GLfloat xoffset, GLfloat yoffset, GLboolean constrainPitch = true)
{
	xoffset *= this->MouseSensitivity;
	yoffset *= this->MouseSensitivity;

	this->Yaw += xoffset;
	this->Pitch += yoffset;

	// Make sure that when pitch is out of bounds, screen doesn't get flipped
	if (constrainPitch)
	{
		if (this->Pitch > 89.0f)
			this->Pitch = 89.0f;
		if (this->Pitch < -89.0f)
			this->Pitch = -89.0f;
	}

	// Update Front, Right and Up Vectors using the updated Eular angles
	this->updateCameraVectors();
}

// Calcula el vector frontal de los ángulos Eular de la cámara (actualizados)
void TCamara::updateCameraVectors()
{
	// Calculate the new Front vector
	glm::vec3 front;
	front.x = cos(glm::radians(this->Yaw)) * cos(glm::radians(this->Pitch));
	front.y = sin(glm::radians(this->Pitch));
	front.z = sin(glm::radians(this->Yaw)) * cos(glm::radians(this->Pitch));
	this->Front = glm::normalize(front);
	// Also re-calculate the Right and Up vector
	this->Right = glm::normalize(glm::cross(this->Front, this->WorldUp));  // Normalize the vectors, because their length gets closer to 0 the more you look up or down which results in slower movement.
	this->Up = glm::normalize(glm::cross(this->Right, this->Front));
}

// Procesa entrada de la rueda del ratón. Sólo para desplazamiento vertical
/*void ProcessMouseScroll(GLfloat yoffset)
{
	if (this->Zoom >= 1.0f && this->Zoom <= 45.0f)
		this->Zoom -= yoffset;
	if (this->Zoom <= 1.0f)
		this->Zoom = 1.0f;
	if (this->Zoom >= 45.0f)
		this->Zoom = 45.0f;
}*/

GLfloat TCamara::getZoom() {
	return ZOOM;
}

void TCamara::beginDraw()
{
}

void TCamara::endDraw()
{
}
