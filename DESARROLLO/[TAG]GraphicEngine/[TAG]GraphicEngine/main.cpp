#include <iostream>
#include "entityTree\TNodo.h"
#include "entityTree\TTransform.h"
#include "entityTree\TCamara.h"
#include "entityTree\TLuz.h"
#include "entityTree\TMalla.h"
#include "resourceManager\TRecursoTriangle.h"
#include <vector>
#define GLEW_STATIC
#include <GL\glew.h>
#include <GLFW\glfw3.h>


void key_callback(GLFWwindow* window, int key, int scancode, int action, int mode);

//variables constante para las dimenciones de la ventana
const GLuint WIDTH = 800, HEIGHT = 600;

int main() {

	TNodo origen(nullptr);
	std::vector<TNodo*> nodos;
	nodos.push_back(new TNodo(new TTransform()));
	nodos.push_back(new TNodo(new TTransform()));
	nodos.push_back(new TNodo(new TMalla()));
	nodos.push_back(new TNodo(new TLuz()));
	nodos.push_back(new TNodo(new TTransform()));
	nodos.push_back(new TNodo(new TCamara()));
	std::cout << "Nodos Creados correctamente" << std::endl;
	origen.addHijo(nodos.at(1));
	nodos.at(1)->addHijo(nodos.at(0));
	nodos.at(0)->addHijo(nodos.at(2));
	nodos.at(1)->addHijo(nodos.at(3));
	origen.addHijo(nodos.at(4));
	nodos.at(4)->addHijo(nodos.at(5));
	std::cout << "Nodos Enlazados correctamente" << std::endl;
	origen.draw();
	std::cout << "Nodos Fin draw" << std::endl;
	origen.~TNodo();
	nodos.erase(nodos.begin(),nodos.end());
	std::cout << nodos.size() << std::endl;

	//Inicio de GLFW para cargar una ventana
	glfwInit();
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 4);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
	glfwWindowHint(GLFW_RESIZABLE, GL_FALSE);

	//Se crea una ventana
	GLFWwindow* window = glfwCreateWindow(WIDTH,HEIGHT,"SpaceShip 1414", nullptr, nullptr);
	if (window == nullptr) {
		std::cerr << "Error al crear ventana GFLW" << std::endl;
		glfwTerminate();
		return -1;
	}
	glfwMakeContextCurrent(window);

	//Callback de GLFW para teclado
	glfwSetKeyCallback(window, key_callback);

	//funcion para que GLEW use lo mas nuevo en su codigo
	glewExperimental = GL_TRUE;
	if (glewInit() != GLEW_OK) {
		std::cerr << "Error al inicializar GLEW" << std::endl;
		return -1;
	}
	//define las dimenciones del viewport
	int width, height;
	glfwGetFramebufferSize(window, &width, &height);
	glViewport(0, 0, width, height);

	//cargar recurso triangulo
	TRecursoTriangle tri;

	//bucle del juego
	while (!glfwWindowShouldClose(window))
	{
		//para los eventos
		glfwPollEvents();

		//Render
		//limpia el buffer
		glClearColor(0.5f,0.8f,0.4f,1.0f);
		glClear(GL_COLOR_BUFFER_BIT);
		
		//dibujo el triangulo
		tri.draw();

		//Pinta el buffer en pantalla
		glfwSwapBuffers(window);
	}

	//Para cerrar todo lo relacionado con GLFW
	tri.borrarCuadrado();
	glfwTerminate();
	return 0;
}

void key_callback(GLFWwindow* window, int key, int scancode, int action, int mode)
{
	if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS)
	{
		glfwSetWindowShouldClose(window, GL_TRUE);
	}
	if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS)
	{
		std::cout << "Se ha pulsado la tecla espacio" << std::endl;
	}
}