#pragma once
#include "TEntidad.h"

class TCamara :
	public TEntidad
{
public:
	TCamara();
	~TCamara();
	void setPerspectiva(float, float, float, float, float, float, float, float);
	void setParalela(float, float, float, float, float, float, float, float);
	void beginDraw();
	void endDraw();
private:
	bool esPerspectiva;
	float cderecha, cizquierda, carriba, cabajo, lderecha, lizquierda, larriba, labajo;
};

