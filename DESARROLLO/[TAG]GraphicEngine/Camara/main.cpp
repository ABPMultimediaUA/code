#include <iostream>
#include <string>
#include <cmath>
#include "entityTree\TNodo.h"
#include "entityTree\TTransform.h"
#include "entityTree\TCamara.h"
#include "entityTree\TLuz.h"
#include "entityTree\TMalla.h"
#include "entityTree\TTriangle.h"

#include <vector>

#ifndef GLEW_STATIC
#define GLEW_STATIC
#include <GL/glew.h>
#endif
#include <GLFW\glfw3.h>
#include <glm\glm.hpp>
#include <glm\gtc\matrix_transform.hpp>
#include <glm\gtc\type_ptr.hpp>

#include "framework\shader.h"
#include "entityTree\TCamara.h"

void key_callback(GLFWwindow* window, int key, int scancode, int action, int mode);

//variables constante para las dimenciones de la ventana
const GLuint WIDTH = 800, HEIGHT = 600;

// Camera
TCamara *camara = new TCamara(glm::vec3(0.0f, 0.0f, 3.0f));
/*glm::vec3 cameraPos = glm::vec3(0.0f, 0.0f, 3.0f);
glm::vec3 cameraFront = glm::vec3(0.0f, 0.0f, -1.0f);
glm::vec3 cameraUp = glm::vec3(0.0f, 1.0f, 0.0f);
GLfloat yaw = -90.0f;	// Yaw is initialized to -90.0 degrees since a yaw of 0.0 results in a direction vector pointing to the right (due to how Eular angles work) so we initially rotate a bit to the left.
GLfloat pitch = 0.0f;*/
GLfloat lastX = WIDTH / 2.0;
GLfloat lastY = HEIGHT / 2.0;
//GLfloat fov = 45.0f;
bool keys[1024];
GLfloat lastX = 400, lastY = 300;
bool firstMouse = true;
GLfloat deltaTime = 0.0f;
GLfloat lastFrame = 0.0f;

int main() {
	//Inicio de GLFW para cargar una ventana
	glfwInit();
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 4);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
	glfwWindowHint(GLFW_RESIZABLE, GL_FALSE);

	//Se crea una ventana
	GLFWwindow* window = glfwCreateWindow(WIDTH, HEIGHT, "SpaceShip 1414", nullptr, nullptr);
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
	glEnable(GL_DEPTH_TEST);

	shader shaderB("Shader/basicoVertexShader.vs", "Shader/basicoFragmentShader.frag");
	shader coordShader("Shader/coord.vs", "Shader/coord.frag");

	//cargar arbol
	TNodo origen(nullptr);
	std::vector<TNodo*> nodos;
	nodos.push_back(new TNodo(new TTransform()));
	nodos.push_back(new TNodo(new TTransform()));
	nodos.push_back(new TNodo(new TMalla("../models/Nanosuit/nanosuit.obj", &shaderB)));
	//nodos.push_back(new TNodo(new TMalla("../models/Nanosuit/nanosuit.obj")));
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

	//bucle del juego
	while (!glfwWindowShouldClose(window))
	{
		//para los eventos
		glfwPollEvents();

		//Render
		//limpia el buffer
		glClearColor(0.5f, 0.8f, 0.4f, 1.0f);
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

		shaderB.Use();
		//dibujo el triangulo
		origen.draw();
		std::cout << "Nodos Fin draw" << std::endl;

		// Crear transformationes de camara
		glm::mat4 view;
		view = camara->GetViewMatrix();
		GLfloat zoom = camara->getZoom;
		glm::mat4 projection = glm::perspective(zoom, (GLfloat)WIDTH / (GLfloat)HEIGHT, 0.1f, 100.0f);
		// Get the uniform locations
		GLint modelLoc = glGetUniformLocation(coordShader.getProgram, "model");
		GLint viewLoc = glGetUniformLocation(coordShader.getProgram, "view");
		GLint projLoc = glGetUniformLocation(coordShader.getProgram, "projection");
		// Pass the matrices to the shader
		glUniformMatrix4fv(viewLoc, 1, GL_FALSE, glm::value_ptr(view));
		glUniformMatrix4fv(projLoc, 1, GL_FALSE, glm::value_ptr(projection));

		//Pinta el buffer en pantalla
		glfwSwapBuffers(window);
	}

	//Para cerrar todo lo relacionado con GLFW

	origen.~TNodo();
	nodos.erase(nodos.begin(), nodos.end());
	std::cout << nodos.size() << std::endl;
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

//Mover camara basandose en la entrada de teclado
void Do_Movement()
{
	if (keys[GLFW_KEY_W])
		camara->procesarTeclado(ADELANTE, deltaTime);
	if (keys[GLFW_KEY_S])
		camara->procesarTeclado(ATRAS, deltaTime);
	if (keys[GLFW_KEY_A])
		camara->procesarTeclado(IZQ, deltaTime);
	if (keys[GLFW_KEY_D])
		camara->procesarTeclado(DER, deltaTime);
}

void mouse_callback(GLFWwindow* window, double xpos, double ypos)
{
	if (firstMouse)
	{
		lastX = xpos;
		lastY = ypos;
		firstMouse = false;
	}

	GLfloat xoffset = xpos - lastX;
	GLfloat yoffset = lastY - ypos;  // Reversed since y-coordinates go from bottom to left

	lastX = xpos;
	lastY = ypos;

	camara->procesarMovimientoRaton(xoffset, yoffset, true);
}


/*void scroll_callback(GLFWwindow* window, double xoffset, double yoffset)
{
	camara.ProcessMouseScroll(yoffset);
}*/