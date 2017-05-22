#pragma once

#include <iostream>
#include <Box2D\Box2D.h>
#include <glm\vec3.hpp>

class Entity2D;
class Mundo;

class Objetos
{
public:
	Objetos(const glm::vec3 &posicion, const glm::vec3 &rotacion, const glm::vec3 &escala, const int &identificacion );
	~Objetos();
	void destroyEntidades();
	glm::vec3 getPos();
	glm::vec3 getRot();
	glm::vec3 getEscala();
	int getID();
	virtual void setFisica(Mundo *world);

	bool getVivo();

protected:

	glm::vec3 pos;
	glm::vec3 rot;
	glm::vec3 scale;
	Entity2D *entity;
	int ID;
	//IMeshSceneNode *maya;
};

