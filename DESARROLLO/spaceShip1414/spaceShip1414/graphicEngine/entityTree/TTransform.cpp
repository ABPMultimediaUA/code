#include "TTransform.h"
#include <glm\vec3.hpp>
#include <glm\gtc\matrix_transform.hpp>
#include <glm\gtx\string_cast.hpp>
#include <glm\gtx\euler_angles.hpp>
#include <iostream>
#include "..\framework\openGLShader.h"


std::stack<glm::mat4> TTransform::pilaMatrices;

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

glm::mat4 TTransform::trasponer(glm::mat4 &m)
{
	return glm::transpose(m);
}

glm::mat4 TTransform::invertir(glm::mat4 &m)
{
	return glm::inverse(m);
}

void TTransform::trasladar(float x, float y, float z)
{
	matriz = matriz*glm::translate(glm::mat4(1.0f), glm::vec3(x,y,z));
	//std::cout << "MatrizTrasladado: " << glm::to_string(matriz) << std::endl;
}

void TTransform::escalar(float x, float y, float z)
{
	matriz = matriz*glm::scale(glm::mat4(1.0f), glm::vec3(x, y, z));
}

void TTransform::rotar(float r, float x, float y, float z)
{
	matriz = matriz*glm::rotate(glm::mat4(1.0f), r, glm::vec3(x, y, z));
	std::cout << "MatrizRotacion: " << glm::to_string(matriz) << std::endl;
}

void TTransform::rotarYPR(float yaw, float pitch, float roll = 0.0f)
{
	matriz = matriz*glm::yawPitchRoll(glm::radians(yaw), glm::radians(pitch), roll);
}

glm::mat4 TTransform::multiplicarMatriz(const glm::mat4 &m1, const glm::mat4 &m2)
{
	glm::mat4 mul = m1 * m2;
	return mul;
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

void TTransform::beginDraw(openGLShader& shader, const glm::mat4& view, const glm::mat4& proyection)
{
	apilar(matrizActual);
	matrizActual = multiplicarMatriz(matrizActual, matriz);
}

void TTransform::endDraw()
{
	desapilar();
}

glm::mat4 TTransform::getMatriz()
{
	std::cout<< glm::to_string(matriz) << std::endl;
	return matriz;
}
