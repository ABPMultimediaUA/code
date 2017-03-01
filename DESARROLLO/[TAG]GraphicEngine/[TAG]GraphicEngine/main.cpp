#include <iostream>
#include "entityTree\TNodo.h"
#include "entityTree\TTransform.h"
#include "entityTree\TCamara.h"
#include "entityTree\TLuz.h"
#include "entityTree\TMalla.h"
#include <vector>
#define GLEW_STATIC
#include <GL\glew.h>
#include <GLFW\glfw3.h>



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
	glfwInit();
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 4);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
	glfwWindowHint(GLFW_RESIZABLE, GL_FALSE);
	GLFWwindow* window = glfwCreateWindow(800,600,"SpaceShip 1414", nullptr, nullptr);
	if (window == nullptr) {
		std::cerr << "Error al crear ventana GFLW" << std::endl;
		glfwTerminate();
		return -1;
	}
	glfwMakeContextCurrent(window);
	glewExperimental = GL_TRUE;
	if (glewInit() != GLEW_OK) {
		std::cerr << "Error al inicializar GLEW" << std::endl;
		return -1;
	}
	int width, height;
	glfwGetFramebufferSize(window, &width, &height);
	glViewport(0, 0, width, height);
	while (!glfwWindowShouldClose(window))
	{
		glfwPollEvents();
		glClearColor(0.2f,0.3f,0.3f,1.0f);
		glClear(GL_COLOR_BUFFER_BIT);
		glfwSwapBuffers(window);
	}
	glfwTerminate();
	return 0;
}