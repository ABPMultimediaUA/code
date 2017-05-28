#pragma once
#include <glm\vec3.hpp>
class TGraphicEngine;
class Mundo;
class ActivadorCamara
{
public:
	ActivadorCamara(TGraphicEngine * motorApp, Mundo *mundo, int ident, glm::vec3 pos, glm::vec3 rot, glm::vec3 escala);
	~ActivadorCamara();
	int getID();
private:
	int id = -1;
};

