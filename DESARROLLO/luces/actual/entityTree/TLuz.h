#pragma once
#include "TEntidad.h"
#include <glm\vec3.hpp>

class TLuz :
	public TEntidad
{
public:
	TLuz(float ax = 0.1f, float ay = 0.1f, float az = 0.1f, float dix = 1, float diy = 1, float diz = 1, float sx = 0.8f, float sy = 0.8f, float sz = 0.8f, char t = 'd', float dirx = 0, float diry = 4, float dirz = 3, bool a = true, float sE = 0.1f, float sCO = 0.8f);
	~TLuz();
	void setDireccion(float, float, float);
	glm::vec3 getDireccion();
	void setDifuse(float, float, float);
	glm::vec3 getDifuse();
	void setAmbient(float, float, float);
	glm::vec3 getAmbient();
	void setSpecular(float, float, float);
	glm::vec3 getSpecular();
	char getTipo();
	void setSpotCutOff(float);
	float getSpotCutOff();
	void setSpotExponent(float);
	float getSpotExponent();
	void beginDraw() override;
	void beginDraw(openGLShader&, const glm::mat4&, const glm::mat4&, double) override;
	void endDraw() override;
	void activar();
	void desactivar();
	bool getActiva();
	void renderLuz(const glm::mat4&, openGLShader&, const glm::mat4&, const glm::mat4&);
private:
	void luzDireccional(const glm::mat4&, openGLShader&);
	void luzFocal(const glm::vec3&, openGLShader&, const glm::mat4&);
	void luzPuntual(const glm::vec3&, openGLShader&);
	glm::vec3 descomponerMatriz(const glm::mat4&);

	glm::vec3 ambient, difuse, specular, direccion;
	float spotCutOff, spotExponent;
	// d -> direccional & p -> puntual & f ->focal
	char tipo;
	bool activa;
	unsigned int idLuz;
	static unsigned int foco;
	static unsigned int punto;
};

