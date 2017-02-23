#pragma once
#include "TEntidad.h"
#include <stack>
#include "tools\glm\mat4x4.hpp"

class TTransform :
	public TEntidad
{
public:
	TTransform();
	~TTransform();
	void identidad();
	void cargar(glm::mat4);
	void trasponer();
	void trasladar(float, float, float);
	void escalar(float, float, float);
	void rotar(float, float, float, float);
	glm::mat4 multiMatriz(glm::mat4, glm::mat4);
	void multiVector(float, float, float);
	void apilar(glm::mat4);
	void desapilar();
	void beginDraw();
	void endDraw();

private:
	glm::mat4 matriz;
	static std::stack<glm::mat4> pilaMatrices;
	static glm::mat4 matrizActual;
};

