#pragma once
#include <glm\vec3.hpp>

class TTransform;
class TGraphicEngine;
class TCamara;
class TNodo;
//class Entity3D;
//class Mundo3D;
class Entity2D;
class Mundo;
class MallaFisica;

class player
{
public:
	//player(TGraphicEngine*, Mundo3D*);
	player(TGraphicEngine*, Mundo*);
	~player();
	float getVelocity();
	float getYaw();
	float getPitch();
	TTransform* Rotation();
	TTransform* Scale();
	TTransform* Translation();
	void setVelocity(float);
	void setYaw(float);
	void setPitch(float);
	glm::vec3 getPos();
	glm::vec3 getRot();
	glm::vec3 getScale();
	void setPos(float x, float y, float z);
	void setRot(float x, float y, float z);
	void setScale(float x, float y, float z);
	void actualizarFisicas(int n, double delta);
	TNodo * getNodoTrans();

private:
	float velocity;
	float yaw;
	float pitch;
	TTransform *rotation;
	TTransform *scale;
	TTransform *translation;
	glm::vec3 pos;
	glm::vec3 rot;
	glm::vec3 escale;
	//Entity3D *entity;
	Entity2D *entity;
	TNodo *nodoTransfTM;
	MallaFisica * fis;
};

