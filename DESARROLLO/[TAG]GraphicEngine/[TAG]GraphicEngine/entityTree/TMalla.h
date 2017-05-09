#pragma once
#include "TEntidad.h"
#include <string>
#include <vector>
class TRecursoMalla;
class TRecursoTextura;
class TGestorRecursos;

class TMalla :
	public TEntidad
{
public:
	TMalla();
	TMalla(std::string);
	TMalla(std::string, TGestorRecursos*);
	~TMalla();
	void cargarMalla(std::string);
	void cargarMalla(std::string, TGestorRecursos*);
	void beginDraw() override;
	void beginDraw(openGLShader&, const glm::mat4&, const glm::mat4&) override;
	void endDraw() override;
private:
	TRecursoMalla* malla;
	std::vector<TRecursoTextura*> recursos;
};

