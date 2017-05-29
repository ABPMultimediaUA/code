#include "TLuz.h"
#include <iostream>
#include "..\framework\openGLShader.h"
#include <glm\gtc\matrix_inverse.hpp>
#include <glm\gtc\type_ptr.hpp>
#include <glm\mat3x3.hpp>
#include <glm\vec4.hpp>
#include <glm\gtx\matrix_decompose.hpp>

unsigned int TLuz::foco = 0;
unsigned int TLuz::punto = 0;

TLuz::TLuz(float ax, float ay, float az, float dix, float diy, float diz, float sx, float sy, float sz, char t, float dirx, float diry, float dirz, bool a, float sE, float sCO) : 
difuse{ dix, diy, diz }, ambient{ ax, ay , az }, specular{ sx, sy , sz }, 
direccion{ dirx, diry, dirz }, tipo{ t }, activa{ a }, spotExponent{ sE }, spotCutOff{ sCO }
{
	switch (t)
	{
		case 'p':
			idLuz = punto;
			punto++;
			break;
		case 'f':
			idLuz = foco;
			foco++;
			break;
	}
}

TLuz::~TLuz()
{
	std::cout << "TLuz Destroyed" << std::endl;
}

void TLuz::setDireccion(float x, float y, float z)
{
	this->direccion.x = x;
	this->direccion.y = y;
	this->direccion.z = z;
}

glm::vec3 TLuz::getDireccion()
{
	return direccion;
}

void TLuz::setDifuse(float x, float y, float z)
{
	this->difuse.x = x;
	this->difuse.y = y;
	this->difuse.z = z;
}

glm::vec3 TLuz::getDifuse()
{
	return difuse;
}

void TLuz::setAmbient(float x, float y, float z)
{
	this->ambient.x = x;
	this->ambient.y = y;
	this->ambient.z = z;
}

glm::vec3 TLuz::getAmbient()
{
	return ambient;
}

void TLuz::setSpecular(float x, float y, float z)
{
	this->specular.x = x;
	this->specular.y = y;
	this->specular.z = z;
}

glm::vec3 TLuz::getSpecular()
{
	return specular;
}

char TLuz::getTipo()
{
	return tipo;
}

void TLuz::setSpotCutOff(float sCO)
{
	this->spotCutOff = sCO;
}

float TLuz::getSpotCutOff()
{
	return spotCutOff;
}

void TLuz::setSpotExponent(float sE)
{
	this->spotExponent = sE;
}

float TLuz::getSpotExponent()
{
	return spotExponent;
}

void TLuz::beginDraw()
{
}

void TLuz::beginDraw(openGLShader& shader, const glm::mat4& view, const glm::mat4& proyection, double dt)
{
	//esto se hace en el renderLuz por el sistema de registro de luces.
}

void TLuz::endDraw()
{
}

void TLuz::activar()
{
	activa = true;
}

void TLuz::desactivar()
{
	activa = false;
}

bool TLuz::getActiva()
{
	return activa;
}

void TLuz::renderLuz(const glm::mat4& model, openGLShader& shader, const glm::mat4& view, const glm::mat4& proyection)
{
	glm::mat4 MV = view * model;
	glm::mat4 MVP = proyection * MV;
	glm::mat3 N = glm::inverseTranspose(glm::mat3(MV));

	glUniformMatrix4fv(shader.getUniformLocation("mvp_matrix"), 1, GL_FALSE, glm::value_ptr(MVP));
	glUniformMatrix4fv(shader.getUniformLocation("mv_matrix"), 1, GL_FALSE, glm::value_ptr(MV));
	glUniformMatrix3fv(shader.getUniformLocation("n_matrix"), 1, GL_FALSE, glm::value_ptr(N));

	//tipo de luces
	glm::vec3 pos = descomponerMatriz(model);

	switch (tipo)
	{
		case 'd': 
			luzDireccional(MV, shader); 
			break;
		case 'p': 
			luzPuntual(pos, shader);
			break;
		case 'f': 
			luzFocal(pos, shader, MV); 
			break;
	}
	
	//glUniform1i(shader.getUniformLocation("texture_off"), texture ? GL_TRUE : GL_FALSE);
	//glUniform1i(shader.getUniformLocation("normal_off"), normal ? GL_TRUE : GL_FALSE);
}

void TLuz::luzDireccional(const glm::mat4 & MV, openGLShader& shader)
{
	glm::vec3 lightDirEyeSpace = glm::vec3(MV * glm::vec4(this->direccion, 0));
	glUniform3fv(shader.getUniformLocation("dirLight.direction"), 1, glm::value_ptr(lightDirEyeSpace));
	glUniform3fv(shader.getUniformLocation("dirLight.ambient"), 1, glm::value_ptr(ambient));
	glUniform3fv(shader.getUniformLocation("dirLight.diffuse"), 1, glm::value_ptr(difuse));
	glUniform3fv(shader.getUniformLocation("dirLight.specular"), 1, glm::value_ptr(specular));
}

void TLuz::luzFocal(const glm::vec3 & pos, openGLShader & shader, const glm::mat4 & MV)
{
	std::string variable = "spotLight[" + std::to_string(idLuz) + "].position";
	glUniform3fv(shader.getUniformLocation(variable), 1, glm::value_ptr(pos));
	std::cout << variable << " ";
	glm::vec3 spotPos(pos.x, 0, pos.z);
	glm::vec3 spotDir = glm::normalize(glm::vec3(MV * glm::vec4(spotPos - pos, 0)));
	variable = "spotLight[" + std::to_string(idLuz) + "].direction";
	std::cout << variable << " ";
	glUniform3fv(shader.getUniformLocation(variable), 1, glm::value_ptr(spotDir));
	variable = "spotLight[" + std::to_string(idLuz) + "].exponent";
	std::cout << variable << " ";
	glUniform1f(shader.getUniformLocation(variable), spotExponent);
	variable = "spotLight[" + std::to_string(idLuz) + "].cutOff";
	std::cout << variable << " ";
	glUniform1f(shader.getUniformLocation(variable), spotCutOff);
	variable = "spotLight[" + std::to_string(idLuz) + "].ambient";
	std::cout << variable << " ";
	glUniform3fv(shader.getUniformLocation(variable), 1, glm::value_ptr(ambient));
	variable = "spotLight[" + std::to_string(idLuz) + "].diffuse";
	std::cout << variable << " ";
	glUniform3fv(shader.getUniformLocation(variable), 1, glm::value_ptr(difuse));
	variable = "spotLight[" + std::to_string(idLuz) + "].specular";
	std::cout << variable << std::endl;
	glUniform3fv(shader.getUniformLocation(variable), 1, glm::value_ptr(specular));
}

void TLuz::luzPuntual(const glm::vec3 & pos, openGLShader & shader)
{
	std::string variable = "pointLights[" + std::to_string(idLuz) + "].position";
	glUniform3fv(shader.getUniformLocation(variable), 1, glm::value_ptr(pos));
	variable = "pointLights[" + std::to_string(idLuz) + "].ambient";
	glUniform3fv(shader.getUniformLocation(variable), 1, glm::value_ptr(ambient));
	variable = "pointLights[" + std::to_string(idLuz) + "].diffuse";
	glUniform3fv(shader.getUniformLocation(variable), 1, glm::value_ptr(difuse));
	variable = "pointLights[" + std::to_string(idLuz) + "].specular";
	glUniform3fv(shader.getUniformLocation(variable), 1, glm::value_ptr(specular));
}

glm::vec3 TLuz::descomponerMatriz(const glm::mat4 & model)
{
	glm::mat4 transform = model;
	glm::vec3 scale;
	glm::quat rotation;
	glm::vec3 translation;
	glm::vec3 skew;
	glm::vec4 perspective;
	glm::decompose(transform, scale, rotation, translation, skew, perspective);
	rotation = glm::conjugate(rotation);
	glm::vec3 rotEulerAngle = glm::eulerAngles(rotation);

	return translation * rotEulerAngle;
}