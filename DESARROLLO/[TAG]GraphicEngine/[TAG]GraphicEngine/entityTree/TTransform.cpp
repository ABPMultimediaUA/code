#include "TTransform.h"
#include <glm\vec3.hpp>
#include <glm\gtc\matrix_transform.hpp>
#include <iostream>

std::stack<glm::mat4> TTransform::pilaMatrices;
glm::mat4 TTransform::matrizActual;

TTransform::TTransform() : matriz(1.0f)
{
}


TTransform::~TTransform()
{
	std::cout << "TTransform destroyed" << std::endl;
}

glm::mat4 TTransform::identidad()
{
	return glm::mat4(1.0f);
}

void TTransform::cargar(glm::mat4 &m)
{
	this->matriz = m;
}

glm::mat4 TTransform::trasponer()
{
	return glm::transpose(matriz);
}

void TTransform::trasladar(float x, float y, float z)
{
	glm::translate(matriz, glm::vec3(x,y,z));
}

void TTransform::escalar(float x, float y, float z)
{
	glm::scale(matriz, glm::vec3(x, y, z));
}

void TTransform::rotar(float r, float x, float y, float z)
{
	glm::rotate(matriz, r, glm::vec3(x, y, z));
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

void TTransform::beginDraw(unsigned int a)
{
	apilar(matrizActual);
	multiplicarMatriz(matrizActual, matriz);
}

void TTransform::endDraw()
{
	desapilar();
}
