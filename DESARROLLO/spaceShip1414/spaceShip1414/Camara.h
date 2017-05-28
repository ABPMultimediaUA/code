#pragma once
#include <glm\vec3.hpp>
class TTransform;
class TGraphicEngine;
class TNodo;
class TCamara;
class player;

class Camara
{
public:
	
	Camara(TGraphicEngine * motorApp, char tipo, bool activa = false, player* jugador = nullptr);
	Camara(TGraphicEngine * motorApp, bool activa, glm::vec3 pos, glm::vec3 rot, glm::vec3 escala);
	~Camara();
	float getVelocity();
	float getYaw();
	float getPitch();
	void rotation(TGraphicEngine *, float, float, float, float);
	void rotationYPR(TGraphicEngine *, float, float, float);
	void scale(TGraphicEngine *, float, float, float);
	void translation(TGraphicEngine *, float, float, float);
	float anguloEntreDosVectores(glm::vec3 u, glm::vec3 v);
	void updateCam(TGraphicEngine * motorApp, glm::vec3 posPers);

	void setVelocity(float);
	void setYaw(float);
	void setPitch(float);
	TCamara* getTCamara();
	TNodo* getNodo();
private:
	float velocity;
	float yaw;
	float pitch;
	TNodo * nodo;
	bool activa;
	glm::vec3 p;
	glm::vec3 r;
};

