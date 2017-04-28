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
class TCamara;
class Camara;
class movimentHandler
{
public:
	movimentHandler();
	~movimentHandler();
	void onKey(GLFWwindow*, int, int, int, int, double, TGraphicEngine*);
	void onMouse(GLFWwindow*, double, double);
	void setMouseSensitive(float);
	void setPlayer(player*);
	void setCamara(Camara * cam);
private:
	//false = camara : true = player
	bool activo;
	bool moverJugador;
	float mouseSensitive;
	player *jugador;
	Camara *camara;
};

