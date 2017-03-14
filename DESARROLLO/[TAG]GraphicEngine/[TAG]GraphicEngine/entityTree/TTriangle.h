#pragma once
#include "TEntidad.h"
class TRecursoTriangle;

class TTriangle :
	public TEntidad
{
public:
	TTriangle();
	~TTriangle();
	void beginDraw();
	void endDraw();
private:
	TRecursoTriangle *tri;
};

