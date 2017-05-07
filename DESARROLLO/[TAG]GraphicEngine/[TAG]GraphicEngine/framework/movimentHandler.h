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
class TNodo;
class movimentHandler
{
public:
	movimentHandler();
	~movimentHandler();
	void onKey(GLFWwindow*, int, int, int, int, double, TGraphicEngine*);
	void onMouse(GLFWwindow*, double, double, TGraphicEngine*);
	void setMouseSensitive(float);
	void setPlayer(player*);
	void setCamara(TNodo*);
private:
	//false = camara : true = player
	bool activo;
	bool first;
	float mouseSensitive;
	player *jugador;
	TNodo *camara;
	float yaw;
	float pitch;
};

