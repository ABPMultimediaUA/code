#include "TLuz.h"
#include <iostream>

TLuz::TLuz(glm::vec3 pos, glm::vec3 orientacion)
{
	
}

TLuz::TLuz(glm::vec3 c)
{
	this->setIntensidad(c);
}


TLuz::~TLuz()
{
	std::cout << "TLuz Destroyed" << std::endl;
}

void TLuz::setIntensidad(glm::vec3 c)
{
	this->intensidad = c;
}

glm::vec3 TLuz::getIntensidad()
{
	return this->intensidad;
}

void TLuz::beginDraw()
{
}

void TLuz::beginDraw(unsigned int)
{
}

void TLuz::endDraw()
{
}
