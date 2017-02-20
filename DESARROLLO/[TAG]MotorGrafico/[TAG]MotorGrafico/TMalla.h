#pragma once
#include "TEntidad.h"

class TMalla :
	public TEntidad
{
public:
	TMalla();
	~TMalla();
	void cargarMalla();
	void beginDraw();
	void endDraw();
private:
};

