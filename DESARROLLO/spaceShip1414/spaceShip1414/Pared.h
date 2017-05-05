#pragma once

#include <glm\vec3.hpp>
#include <glm\gtc\matrix_transform.hpp>
#include <glm\gtx\string_cast.hpp>
#include <glm\gtx\euler_angles.hpp>

class TTransform;
class TGraphicEngine;
class TCamara;
class TNodo;
class Entity3D;
class Mundo3D;
class MallaFisica;
class TGraphicEngine;
class Entity2D;
class Mundo;

class Pared

{
public:
	Pared(TGraphicEngine * motorApp,glm::vec3 tras, glm::vec3 r, glm::vec3 sca);
	~Pared();
	float getVelocity();
	float getYaw();
	float getPitch();
	TTransform* Rotation();
	TTransform* Scale();
	TTransform* Translation();
	void setVelocity(float);
	void setYaw(float);
	void setPitch(float);
	void setFisicas(Mundo3D *);
	void setFisicas(Mundo * m, glm::mat4 matrizCam, glm::mat4 matrizP);
	glm::vec3 getPos();
	glm::vec3 getRot();
	glm::vec3 getEscala();


private:
	float velocity;
	float yaw;
	float pitch;
	TTransform *rotation;
	TTransform *scale;
	TTransform *translation;
	glm::vec3 pos;
	glm::vec3 rot;
	glm::vec3 escala;
	TNodo* nodoMalla;
	Entity2D *entity;
	//Entity3D *entity;
	MallaFisica * fis;
	TGraphicEngine *motor;

};

