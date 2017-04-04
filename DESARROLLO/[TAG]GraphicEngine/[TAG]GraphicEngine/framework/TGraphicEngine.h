#pragma once
#include "openGLWindow.h"
#include <vector>
#include <glm\vec3.hpp>
#include "openGLShader.h"
//class openGLShader;
class TNodo;
class TGestorRecursos;
class TEntidad;
class TCamara;
class TTransform;
class TLuz;
class TMalla;

class TGraphicEngine : public openGLWindow
{
public:
	TGraphicEngine();
	~TGraphicEngine();
	TNodo* crearNodo(TNodo*, TEntidad*);
	TTransform* crearTransform();
	TCamara* crearCamara();
	TLuz* crearLuz();
	TMalla* crearMalla(std::string);
	TNodo* nodoRaiz();
	void setCamaraRegistro(TCamara*);
	void draw();
private:
	void onstart() override;
	void onrender(double) override;
	void luzDirectional(openGLShader&, double);
	void onkey(int, int, int, int) override;
	openGLShader dir_shader;
	glm::vec3 luz_direction;
	TNodo* escena;
	TGestorRecursos* gestorRecursos;
	TCamara* registro;
};

