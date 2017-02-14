#pragma once
#include "tools\glm\fwd.hpp"
#include "TEntidad.h"

class TTransform : public TEntidad
{
public:
	TTransform();
	~TTransform();
	void identidad();
	void cargar(glm::mat4);
	void trasponer();
	void trasladar(float, float, float);
	void rotar(float, float, float, float);
	void beginDraw();
	void endDraw();
private:
	glm::mat4* matriz;
};

