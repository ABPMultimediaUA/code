#include "TTransform.h"
#include <glm\vec3.hpp>
#include <glm\gtc\matrix_transform.hpp>
#include <iostream>

std::stack<glm::mat4> TTransform::pilaMatrices;
glm::mat4 TTransform::matrizActual;

TTransform::TTransform(){}


TTransform::~TTransform()
{
	std::cout << "TTransform destroyed" << std::endl;
}

glm::mat4 TTransform::identidad()
{
	return glm::mat4();
}

void TTransform::cargar(glm::mat4 &m)
{
	this->matriz = m;
}

glm::mat4 TTransform::trasponer(glm::mat4 &m)
{
	return glm::transpose(m);
}

void TTransform::trasladar(glm::mat4& m, float x, float y, float z)
{
	glm::translate(m, glm::vec3(x,y,z));
}

void TTransform::escalar(glm::mat4& m, float x, float y, float z)
{
	glm::scale(m, glm::vec3(x, y, z));
}

void TTransform::rotar(glm::mat4& m, float r, float x, float y, float z)
{
	glm::rotate(m, r, glm::vec3(x, y, z));
}

glm::mat4 TTransform::multiplicarMatriz(const glm::mat4 &m1, const glm::mat4 &m2)
{
	return m1 * m2;
}

glm::vec4 TTransform::multiplicarVector(const glm::mat4& m, float x, float y, float z)
{
	return m * glm::vec4(x,y,z,1.0);
}

void TTransform::apilar(glm::mat4 m)
{
	pilaMatrices.push(m);
}

void TTransform::desapilar()
{
	matrizActual = pilaMatrices.top();
	pilaMatrices.pop();
}

void TTransform::beginDraw()
{
	apilar(matrizActual);
	multiplicarMatriz(matrizActual,matriz);
}

void TTransform::beginDraw(unsigned int)
{
	apilar(matrizActual);
	multiplicarMatriz(matrizActual, matriz);
}

void TTransform::endDraw()
{
	desapilar();
}
