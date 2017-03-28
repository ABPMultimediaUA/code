#include "TMotorTAG.h"

TMotorTAG::TMotorTAG()
{
}


TMotorTAG::~TMotorTAG()
{
}

TNodo *TMotorTAG::crearNodo(TNodo *padre, TEntidad *ent)
{
	escena = new TNodo(ent);
	padre->addHijo(escena);
	return escena;
}

TTransform *TMotorTAG::crearTransform()
{
	TTransform *t = new TTransform();
	return t;
	
}

TCamara *TMotorTAG::crearCamara()
{
	TCamara *cam = new TCamara();
	return cam;
}

void TMotorTAG::registrarCamara(TNodo *nodoCamara)
{

}


TLuz *TMotorTAG::crearLuz(glm::vec3 pos, glm::vec3 orientacion)
{
	TLuz *luz = new TLuz(pos, orientacion);
	return luz;
}

void TMotorTAG::registrarLuz(TNodo *nodoLuz)
{

}



TMalla *TMotorTAG::crearMalla(std::string nombre)
{
	//TRecurso *recmalla = gestorRecursos->getRecurso(nombre);
	TMalla *malla = new TMalla(nombre); /*recmalla*/
	return malla;
}

void TMotorTAG::draw() 
{
		/*Inicializar la librería gráfica como sea necesario
		Inicializar las luces como se ha explicado
		Inicializar el viewport activo con la librería gráfica
		Inicializar la cámara como se ha explicado
		escena->draw(…)*/
}

