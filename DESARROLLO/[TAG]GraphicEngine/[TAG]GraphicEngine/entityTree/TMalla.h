#pragma once
#include "TEntidad.h"
#include <string>
class TRecursoMalla;
class shader;
class TGestorRecursos;

class TMalla :
	public TEntidad
{
public:
	TMalla();
	TMalla(std::string);
	TMalla(std::string, TGestorRecursos&);
	~TMalla();
	void cargarMalla(std::string);
	void cargarMalla(std::string, TGestorRecursos&);
	void beginDraw() override;
	void beginDraw(unsigned int) override;
	void endDraw() override;
private:
	TRecursoMalla* malla;
};

