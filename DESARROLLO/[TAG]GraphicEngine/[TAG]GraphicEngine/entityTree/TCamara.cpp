#include "TCamara.h"
#include <iostream>

TCamara::TCamara()
{
}

TCamara::TCamara(bool p, float x1, float y1, float z1, float x2, float y2, float z2)
{
	if (p) {
		this->setPerspectiva(x1, y1, z1, x2, y2, z2);
	}
	else {
		this->setParalela(x1, y1, z1, x2, y2, z2);
	}
}

TCamara::~TCamara()
{
	std::cout << "TCamara Detroyed" << std::endl;
}

void TCamara::setPerspectiva(float x1, float y1, float z1, float x2, float y2, float z2)
{
	this->esPerspectiva = true;
	this->p1 = glm::vec3(x1, y1, z1);
	this->p2 = glm::vec3(x2, y2, z2);
}

void TCamara::setParalela(float x1, float y1, float z1, float x2, float y2, float z2)
{
	this->esPerspectiva = false;
	this->p1 = glm::vec3(x1, y1, z1);
	this->p2 = glm::vec3(x2, y2, z2);
}

void TCamara::beginDraw()
{
}

void TCamara::beginDraw(unsigned int)
{
}

void TCamara::endDraw()
{
}
