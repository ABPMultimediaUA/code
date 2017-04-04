#include "TGraphicEngine.h"
#include <iostream>
#include <glm\gtc\matrix_inverse.hpp>
#include <glm\gtc\matrix_transform.hpp>
#include <glm\gtc\type_ptr.hpp>
#include "..\resourceManager\TGestorRecursos.h"
#include "..\entityTree\TEntidad.h"
#include "..\entityTree\TNodo.h"
#include "..\entityTree\TTransform.h"
#include "..\entityTree\TCamara.h"
#include "..\entityTree\TLuz.h"
#include "..\entityTree\TMalla.h"


TGraphicEngine::TGraphicEngine() : luz_direction{ 0, 10, 10 }, dir_shader()
{
	escena = new TNodo(nullptr);
	gestorRecursos = new TGestorRecursos();
}

TGraphicEngine::~TGraphicEngine()
{
	std::cout << "Facade Destroted" << std::endl;
}

TNodo * TGraphicEngine::crearNodo(TNodo* padre, TEntidad* entidad)
{
	return new TNodo(padre, entidad);
}

TTransform * TGraphicEngine::crearTransform()
{
	return new TTransform();
}

TCamara * TGraphicEngine::crearCamara()
{
	return new TCamara();
}

TLuz * TGraphicEngine::crearLuz()
{
	return new TLuz();
}

TMalla * TGraphicEngine::crearMalla(std::string fichero)
{
	return new TMalla(fichero, gestorRecursos);
}

TNodo * TGraphicEngine::nodoRaiz()
{
	return escena;
}

void TGraphicEngine::setCamaraRegistro(TCamara *c)
{
	registro = c;
}

void TGraphicEngine::draw()
{
}

void TGraphicEngine::onstart()
{
	glEnable(GL_DEPTH_TEST);
	glClearColor(0.0f, 0.5f, 0.5f, 1.0f);

	registro->setWindow(this->window);
	dir_shader.compile("Shader/directional.vertex_shader", "Shader/directional.fragment_shader");
	//model.init("model/test.assbin");

	// ocultar el cursor y ubicarlo en el centro de la ventana
	glfwSetInputMode(this->window, GLFW_CURSOR, GLFW_CURSOR_DISABLED);
	glfwSetCursorPos(this->window, 1280 / 2, 720 / 2);
}

void TGraphicEngine::onrender(double time)
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	luzDirectional(dir_shader, time);
}

void TGraphicEngine::luzDirectional(openGLShader & shader, double time)
{
	shader.use();

	glm::mat4 Model;

	glm::mat4 MV = registro->getViewMatrix() * Model;
	glm::mat4 MVP = registro->getProjectionMatrix() * MV;
	glm::mat3 N = glm::inverseTranspose(glm::mat3(MV));

	glUniformMatrix4fv(shader.getUniformLocation("mvp_matrix"), 1, GL_FALSE, glm::value_ptr(MVP));
	glUniformMatrix4fv(shader.getUniformLocation("mv_matrix"), 1, GL_FALSE, glm::value_ptr(MV));
	glUniformMatrix3fv(shader.getUniformLocation("n_matrix"), 1, GL_FALSE, glm::value_ptr(N));

	// direccion de la luz
	glm::vec3 lightDirEyeSpace = glm::vec3(MV * glm::vec4(luz_direction, 0));

	glUniform3fv(shader.getUniformLocation("light.direction"), 1, glm::value_ptr(lightDirEyeSpace));
	glUniform3fv(shader.getUniformLocation("light.ambient"), 1, glm::value_ptr(glm::vec3(0.1f)));
	glUniform3fv(shader.getUniformLocation("light.diffuse"), 1, glm::value_ptr(glm::vec3(1.0f)));
	glUniform3fv(shader.getUniformLocation("light.specular"), 1, glm::value_ptr(glm::vec3(1.0f)));

	this->escena->draw(shader.getProgram());

	shader.unUse();
}

void TGraphicEngine::onkey(int key, int scancode, int action, int mods)
{
	if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS) { glfwSetWindowShouldClose(window, GL_TRUE); }
	if (key == GLFW_KEY_LEFT) { luz_direction.x += 0.1f; }
	if (key == GLFW_KEY_RIGHT) { luz_direction.x -= 0.1f; }
	if (key == GLFW_KEY_UP) { luz_direction.y += 0.1f; }
	if (key == GLFW_KEY_DOWN) { luz_direction.y -= 0.1f; }

}