#include "TTransform.h"
#include "tools\glm\glm.hpp"
#include <iostream>


TTransform::TTransform()
{

}


TTransform::~TTransform()
{
	std::cout << "Deleted Tranformation Entity" << std::endl;
}

void TTransform::identidad()
{
	if (this->matriz != nullptr)
	{
		delete this->matriz;
		this->matriz = new glm::mat4;
	} 
	else
	{
		this->matriz = new glm::mat4;
	}
}

void TTransform::cargar(glm::mat4 m)
{
	*this->matriz = m;
}

void TTransform::trasponer()
{
}

void TTransform::trasladar(float, float, float)
{
}

void TTransform::rotar(float, float, float, float)
{
}

void TTransform::beginDraw()
{
}

void TTransform::endDraw()
{
}
