#pragma once
#include "TEntidad.h"
#include <string>
class TRecursoMalla;
class shader;

class TMalla :
	public TEntidad
{
public:
	TMalla();
	TMalla(std::string);
	TMalla(std::string path, shader* s);
	~TMalla();
	void cargarMalla(std::string);
	void beginDraw();
	void endDraw();
private:
	TRecursoMalla* malla;
};

