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
	~TMalla();
	void cargarMalla(std::string);
	void beginDraw() override;
	void beginDraw(unsigned int) override;
	void endDraw() override;
private:
	TRecursoMalla* malla;
};

