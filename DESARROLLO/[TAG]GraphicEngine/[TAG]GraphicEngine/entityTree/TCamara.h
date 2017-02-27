#pragma once
#include "TEntidad.h"
#include <glm\vec3.hpp>

class TCamara :
	public TEntidad
{
public:
	TCamara();
	TCamara(bool, float, float, float, float, float, float);
	~TCamara();
	void setPerspectiva(float, float, float, float, float, float);
	void setParalela(float, float, float, float, float, float);
	void beginDraw();
	void endDraw();
private:
	bool esPerspectiva;
	glm::vec3 p1, p2;
};

