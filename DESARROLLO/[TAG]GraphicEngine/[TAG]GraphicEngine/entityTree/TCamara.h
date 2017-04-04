#pragma once
#include "TEntidad.h"
#ifndef GLEW_STATIC
#define GLEW_STATIC
#include <GL/glew.h>
#endif
#ifndef GLFW_STATIC
#define GLFW_STATIC
#include <GLFW\glfw3.h>
#endif
#include <glm\vec3.hpp>
#include <glm\mat4x4.hpp>

class TCamara :
	public TEntidad
{
public:
	TCamara();
	TCamara(bool, float, float, float, float, float, float);
	~TCamara();
	void setPerspectiva(float, float, float, float, float, float);
	void setParalela(float, float, float, float, float, float);
	void setWindow(GLFWwindow*);
	glm::mat4 getViewMatrix();
	glm::mat4 getProjectionMatrix();
	glm::vec3 getPosition();
	void beginDraw() override;
	void beginDraw(unsigned int) override;
	void endDraw() override;
private:
	bool esPerspectiva;
	glm::vec3 p1, p2;
	void checkMouse();
	void chechKeys();
	inline bool isKeyPress(int);
	float yaw, pitch;
	glm::vec3 cameraPos, cameraFront, cameraUp;
	GLfloat cameraSpeed, mouseSensitive;
	GLFWwindow* window;
};

