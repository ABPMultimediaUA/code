#pragma once
/*
* To change this license header, choose License Headers in Project Properties.
* To change this template file, choose Tools | Templates
* and open the template in the editor.
*/

/*
* File:   Puerta.h
* Author: David
*
* Created on 15 de diciembre de 2016, 20:03
*/

#include <glm\vec3.hpp>
#include <glm\gtc\matrix_transform.hpp>
#include <glm\gtx\string_cast.hpp>
#include <glm\gtx\euler_angles.hpp>


#ifndef PUERTA_H
#define PUERTA_H

class TTransform;
class TGraphicEngine;
class TNodo;
class Entity2D;
class Mundo;
class MaquinaEstados;
class Estados;


class Puerta {
public:

	

	Puerta(TGraphicEngine * motorApp, int ident, glm::vec3 posicion, glm::vec3 rotacion, glm::vec3 escala, std::string llave, std::string tipo, std::string model);
	Puerta(const Puerta& orig);
	virtual ~Puerta();
	TTransform* Rotation();
	TTransform* Scale();
	TTransform* Translation();
	glm::vec3 getPosicion();
	glm::vec3 getRotacion();
	glm::vec3 getEscala();
	bool getAbierta();
	bool getTotalAbierta();

	void setDetectado(bool x,int ident);
	void setFisica(Mundo *world, int ident);
	TNodo * getNodo();
	void setAbierta();
	void setCerrada();
	void abrirPuerta();
	void cerrarPuerta();
	void Update();
	void UpdateEstado();
	bool getDetectado();
	std::string getEstado();
	std::string getLlaveAsociada();

private:
	int id;
	int desfase;
	glm::vec3 pos;
	glm::vec3 posIni;
	glm::vec3 rot;
	glm::vec3 escal;
	Entity2D *entity;
	TTransform *rotation;
	TTransform *scale;
	TTransform *translation;
	TNodo* nodoMalla;

	bool abierta=false;
	int estadoActual;
	float limiteApX;
	float limiteApZ;
	bool abrir;
	bool detectado;
	int idDetect;
	MaquinaEstados* Maquina;
	Estados* ABIERTA;
	Estados* CERRADA;
	Estados* BLOQUEADA;
	Estados* BLOQLLAVE;
	std::string llaveAsociada;
	std::string t_puerta;
	TGraphicEngine * motor;
};

#endif /* PUERTA_H */

