#pragma once
#include <glm\vec3.hpp>

class TTransform;
class TGraphicEngine;
class TCamara;
class TNodo;
class Entity2D;
class Mundo;
class Bala;
class MaquinaEstados;
class Estados;

class player
{
public:
	player(TGraphicEngine*, Mundo*);
	~player();
	float getVelocity();
	float getYaw();
	float getPitch();
	void rotation(TGraphicEngine *, float, float, float, float);
	void rotationYPR(TGraphicEngine *, float, float, float);
	void scale(TGraphicEngine *, float, float, float);
	void translation(TGraphicEngine *, float, float, float);
	void setVelocity(float);
	void setYaw(float);
	void setPitch(float);
	glm::vec3 getPos();
	glm::vec3 getRot();
	glm::vec3 getScale();
	glm::vec3 getPosAnt();
	int getDireccion();
	void setPos(float x, float y, float z);
	void setRot(float x, float y, float z);
	void setScale(float x, float y, float z);
	void cambiarAnimacion(char c);
	void actualizarFisicas(int n, double delta, float);
	void setCamPos(glm::vec3);
	TNodo * getNodo();

	void asignarVectorDirector(glm::vec3 u, float angle);
	void actualizarPosicion();

	void iniciarTiempoImpulso();

	void disminuirTem();

	void initEstados();
	void deleteEstados();

	float getTemporizador();
	void setImpulso(bool x);
	void destruirAnimacion(TNodo * n);
	void nuevaAnimacion();
	bool getImpulso();

private:
	float velocity;
	float yaw;
	float pitch;
	float temporizador;
	float anguloCamara;
	glm::vec3 pos;
	glm::vec3 rot;
	glm::vec3 escale;
	glm::vec3 posCam;
	glm::vec3 posAnterior;
	glm::vec3 vecDir, vecA, vecS, vecD;
	Entity2D *entity;
	TNodo *nodo, *animation;
	TGraphicEngine * engine;
	int dir;
	bool impulso = false;
	MaquinaEstados* MaquinaEstadosAnimation;
	Estados* andar, *correr, *reposo, *disparar;


};


