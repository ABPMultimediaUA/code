#pragma once
#include "TRecurso.h"
/*#ifndef GL_STATIC
#define GL_STATIC
#include <GL/GL.h>
#endif*/
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

class TRecursoCamera :
	public TRecurso
{
public:
	TRecursoCamera();
	~TRecursoCamera();
	void setWindow(GLFWwindow*);
	glm::mat4 getViewMatrix();
	glm::mat4 getProjectionMatrix();
	glm::vec3 getPosition();
	bool cargarFichero(std::string);
	void draw();
private:
	void checkMouse();
	void chechKeys();
	inline bool isKeyPress(int);
	float yaw, pitch;
	glm::vec3 cameraPos, cameraFront, cameraUp;
	GLfloat cameraSpeed, mouseSensitive;
	GLFWwindow* window;
};

