#pragma once
#include "TEntidad.h"
#include <stack>
#include <glm\mat4x4.hpp>

class TTransform :
	public TEntidad
{
public:
	TTransform();
	~TTransform();
	glm::mat4 identidad();
	void cargar(glm::mat4&);
	glm::mat4 trasponer(glm::mat4&);
	void trasladar(glm::mat4&, float, float, float);
	void escalar(glm::mat4&, float, float, float);
	void rotar(glm::mat4&, float, float, float, float);
	glm::mat4 multiplicarMatriz(const glm::mat4&, const  glm::mat4&);
	glm::vec4 multiplicarVector(const glm::mat4&, float, float, float);
	void apilar(glm::mat4);
	void desapilar();
	void beginDraw();
	void beginDraw(unsigned int);
	void endDraw();

private:
	glm::mat4 matriz;
	static std::stack<glm::mat4> pilaMatrices;
	static glm::mat4 matrizActual;
};

