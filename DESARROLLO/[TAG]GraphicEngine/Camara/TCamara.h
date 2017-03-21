#pragma once
#include "TEntidad.h"
#include <GL\glew.h>
#include <glm\geometric.hpp>
#include <glm\vec3.hpp>
#include <glm\glm.hpp>
#include <glm\gtc\matrix_transform.hpp>
#include <glm\gtc\type_ptr.hpp>

enum Camera_Movement {
	ADELANTE,
	ATRAS,
	IZQ,
	DER
};

class TCamara :
	public TEntidad

{
public:
	TCamara(glm::vec3);
	TCamara(bool, float, float, float, float, float, float);
	~TCamara();
	void setPerspectiva(float, float, float, float, float, float);
	void setParalela(float, float, float, float, float, float);
	void direccion(glm::vec3, glm::vec3);
	glm::mat4 GetViewMatrix();
	void procesarTeclado(Camera_Movement, GLfloat);
	void procesarMovimientoRaton(GLfloat, GLfloat, GLboolean);
	//void procesarScrollRaton(GLfloat);
	GLfloat getZoom();
	//void keyboard(unsigned char, int, int);
	void beginDraw();
	void endDraw();
private:
	bool esPerspectiva;
	glm::vec3 p1, p2, dir;
	// Camera Attributes
	glm::vec3 Position;
	glm::vec3 Front;
	glm::vec3 Up;
	glm::vec3 Right;
	glm::vec3 WorldUp;
	// Eular Angles
	GLfloat Yaw;
	GLfloat Pitch;
	// Camera options
	GLfloat MovementSpeed;
	GLfloat MouseSensitivity;
	GLfloat Zoom;
	void updateCameraVectors();
};

