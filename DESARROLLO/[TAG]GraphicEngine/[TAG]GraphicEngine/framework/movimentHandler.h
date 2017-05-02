#pragma once
#ifndef GLEW_STATIC
#define GLEW_STATIC
#include <GL/glew.h>
#endif
#ifndef GLFW_STATIC
#define GLFW_STATIC
#include <GLFW\glfw3.h>
#endif
class TTransform;
class player;
class TGraphicEngine;
class movimentHandler
{
public:
	movimentHandler();
	~movimentHandler();
	void onKey(GLFWwindow*, int, int, int, int, double, TGraphicEngine*);
	void onMouse(GLFWwindow*, double, double, TGraphicEngine*);
	void setMouseSensitive(float);
	void setPlayer(player*);
private:
	//false = camara : true = player
	bool activo;
	float mouseSensitive;
	player *jugador;
};

