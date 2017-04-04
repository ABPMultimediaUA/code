#pragma once
#include <glm\mat4x4.hpp>
class TEntidad
{
public:
	virtual void beginDraw() = 0;
	virtual void beginDraw(unsigned int) = 0;
	virtual void endDraw() = 0;
protected:
	static glm::mat4 matrizActual;
};

