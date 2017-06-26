#pragma once
#ifndef GLEW_STATIC
#define GLEW_STATIC
#include <GL/glew.h>
#endif
#ifndef GLFW_STATIC
#define GLFW_STATIC
#include <GLFW\glfw3.h>
#endif
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <vector>
#include <glm\vec3.hpp>
#include <glm\mat4x4.hpp>
#include "framework\openGLShader.h"
#include "..\GUI.h"

class TNodo;
class TGestorRecursos;
class TEntidad;
class TCamara;
class TTransform;
class TLuz;
class TMalla;
class TAnimacion;
class movimentHandler;
class player;
class Camara;
class Mundo3D;
class Mundo;
class Escenario;
class GUI;

class TGraphicEngine
{
public:
	TGraphicEngine();
	~TGraphicEngine();
	TNodo* crearNodo(TNodo*, TEntidad*);
	TTransform* crearTransform();
	TCamara* crearCamara(bool, float, float, float, float, float, float, bool a = false);
	TCamara* crearCamaraS(bool, float, float, float, float, float, float, bool a = false);
	TCamara* crearCamara(bool, float, float, float, float, bool a = false);
	TCamara* crearCamaraS(bool, float, float, float, float, bool a = false);
	TCamara* crearCamara(float fovy, float aspect, float nearr, float farr);
	TLuz* crearLuz(bool estaActiva = false, bool local = false, bool foco = false, float fAmbient[] = NULL, float color[] = NULL, float dicLuz[] = NULL, float dicCono[] = NULL, float sCosCutOff = 0.f, float sExponet = 0.f, float ateCos = 0.f, float ateLin = 0.f, float ateCua = 0.f);
	TMalla* crearMalla(std::string);
	TAnimacion* crearAnimacion(std::string, unsigned int);
	TNodo* nodoRaiz();
	GLFWwindow* getGLFWwindow();
	bool init(std::string, int width = 1024, int height = 720, bool full_screen = false);
	void run();
	void info();
	void addRegistroLuz(TNodo*);
	void addRegistroCamara(TNodo*);
	movimentHandler* getMovimentHandler();
	void setPlayerMove(player*);
	double getLastTime();
	void setLastTime(double);
	void cambiarCamaraActiva(char m, void * dirCam);

	void cambiarLuzActiva(char m, void * dirLuz);

	TNodo * addAnimacion(std::string path = "", unsigned int frames = 25, TNodo * nodoPadre = nullptr);
	void cargarNuevaAnimacion(TNodo * padre, std::string path, unsigned int frames);
	void cargarNuevaMalla(TNodo * padre, std::string path);
	TNodo * addMalla(std::string path = "", TNodo * nodoPadre = nullptr);
	TNodo * addCamara(char tipo = 0, bool per = false, bool act = false, TNodo * nodoPadre = nullptr, float x = 45.0f, float y = 0.1f, float z = 1000.0f, float a = 0.0f, float b = 10.0f, float c = 10.0f);
	TNodo * addCamaraLibre(bool activa = false);
	TNodo * addCamaraParalelaFija(bool activa = false);
	TNodo * addCamaraParalelaSeguidora(bool activa = false, TNodo * nodoPadre = nullptr);
	TNodo * addCamaraPerspectivaFija(bool activa = false);
	TNodo * addCamaraPerspectivaSeguidora(bool activa = false, TNodo * nodoPadre = nullptr);
	TNodo * addLuz(TNodo * nodoPadre = nullptr);
	void trasladar(TNodo *, float, float, float);
	void rotar(TNodo *, float, float, float, float);
	void rotarYPR(TNodo *, float, float, float);
	void escalar(TNodo *, float, float, float);
	void resetTransform(TNodo *, char);
	glm::vec3 getPosicion(TNodo *);
	glm::vec3 getRotacion(TNodo *);
	glm::vec3 getEscalado(TNodo *);
	TNodo * getPadreX(TNodo *, char p = 0);
	void look(TNodo * nodo, glm::vec3 eye, glm::vec3 tar, glm::vec3 mat);
	glm::mat4 getInverseProjectionCamaraActive();
	
	void setCamaraMove(Camara * c);
	glm::mat4 getView();
	glm::mat4 getProjection();

	void drawBox(Mundo * world, double x, double y, int w, int h);
	void drawGround(Mundo * world);
	double getDT();
	int getIDCamera();
	void run(Mundo * world, Escenario*);
	void CamaraActiva();
private:
	glm::vec3 descomponerMatriz(TNodo *, char);
	void onstart();
	void onstop();
	void draw(double);
	//void onkey(int, int, int, int);
	//void onmouse(double, double);
	void onresize(int, int);
	void camaraActivada();
	void luzActivada();
	//glm::mat4 getMatrizView();
	//glm::mat4 getModelLuz();
	static void error_callback(int, const char*);
	static void close_callback(GLFWwindow*);
	static void key_callback(GLFWwindow*, int, int, int, int);
	static void resize_callback(GLFWwindow*, int, int);
	static void mouse_callback(GLFWwindow*, double, double);
	inline static TGraphicEngine* getTGraphicEngineApp(GLFWwindow*);

	openGLShader shader;
	TNodo* escena;
	TGestorRecursos* gestorRecursos;
	TCamara* camaraActiva;
	TLuz* luzActiva;
	std::vector<TNodo*> registroCamaras;
	std::vector<TNodo*> registroLuces;
	GLFWwindow* window;
	float aspect_ratio;
	movimentHandler* move;
	double lastTime;
	double deltaTime;
	double XMIN = 0;
	double XMAX = 100;
	double YMIN;
	double YMAX;
	Mundo * wo;
	GUI m_gui;
	Escenario * maps;
	Camara * cam;
};

