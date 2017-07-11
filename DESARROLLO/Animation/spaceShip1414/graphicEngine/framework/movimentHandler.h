#pragma once
#ifndef GLEW_STATIC
#define GLEW_STATIC
#include <GL/glew.h>
#endif
#ifndef GLFW_STATIC
#define GLFW_STATIC
#include <GLFW\glfw3.h>
#endif
#include <glm\vec3.hpp>

enum {
	TECLA_D,
	TECLA_A,
	TECLA_S,
	TECLA_W,
	TECLA_1,
	TECLA_2,
	TECLA_3,
};


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
	void onKey(GLFWwindow* window, int key, int scancode, int action, int mods, double deltaTime, TGraphicEngine* motor);
	void onMouse(GLFWwindow*, double, double, TGraphicEngine* motor);
	void setMouseSensitive(float);
	void setPlayer(player*);
	void setCamara(Camara * cam);
	void checkKeys(GLFWwindow *, TGraphicEngine*);
private:
	//false = camara : true = player
	bool activo;
	bool moverJugador;
	float mouseSensitive;
	player *jugador;
	Camara *camara;
	glm::vec3 front;
	float offsetRango = 0.0f;
	float angle = 180.0f;
	int tecla = -1;
};

