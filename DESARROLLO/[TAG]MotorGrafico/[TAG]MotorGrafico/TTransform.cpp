#include "TTransform.h"
#include "tools\glm\vec3.hpp"
#include "tools\glm\gtc\matrix_transform.hpp"


TTransform::TTransform()
{

}


TTransform::~TTransform()
{
}

void TTransform::identidad()
{
}

void TTransform::cargar(glm::mat4)
{
}

void TTransform::trasponer()
{
	glm::transpose(this->matriz);
}

void TTransform::trasladar(float x, float y, float z)
{
}

void TTransform::escalar(float x, float y, float z)
{
}

void TTransform::rotar(float x, float y, float z, float r)
{
}

glm::mat4 TTransform::multiMatriz(glm::mat4 m1, glm::mat4 m2)
{
	return glm::matrixCompMult(m1, m2);
}

void TTransform::multiVector(float x, float y, float z)
{
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
	multiMatriz(matrizActual,matriz);
}

void TTransform::endDraw()
{
	desapilar();
}
