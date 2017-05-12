#pragma once
class TTransform;
class TGraphicEngine;
class TNodo;
class TCamara;
class player;

class Camara
{
public:
	
	Camara(TGraphicEngine * motorApp, char tipo, bool activa = false, player* jugador = nullptr);
	~Camara();
	float getVelocity();
	float getYaw();
	float getPitch();
	void rotation(TGraphicEngine *, float, float, float, float);
	void rotationYPR(TGraphicEngine *, float, float, float);
	void scale(TGraphicEngine *, float, float, float);
	void translation(TGraphicEngine *, float, float, float);
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
};

