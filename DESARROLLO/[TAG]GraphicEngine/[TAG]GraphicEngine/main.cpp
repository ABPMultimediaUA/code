#include <iostream>
#include <vector>
#include "framework\openGLShader.h"
#include "framework\openGLWindow.h"
#include <glm\gtc\matrix_inverse.hpp>
#include <glm\gtc\matrix_transform.hpp>
#include <glm\gtc\type_ptr.hpp>
#include "entityTree\TNodo.h"
#include "entityTree\TTransform.h"
#include "entityTree\TCamara.h"
#include "entityTree\TLuz.h"
#include "entityTree\TMalla.h"
#include "resourceManager\TGestorRecursos.h"
#include "resourceManager\TRecursoCamera.h"

//variables constante para las dimenciones de la ventana
const GLuint WIDTH = 1920, HEIGHT = 1024;

class MotorGrafico : public openGLWindow
{
public:
	MotorGrafico();
	~MotorGrafico();

private:
	void onstart() override;
	void onrender(double) override;
	void luzDirectional(openGLShader&, double);
	void onkey(int, int, int, int) override;
	void cargarArbolEscena();
	void vaciarArbolEscena();
	openGLShader dir_shader;
	TRecursoCamera camera;
	glm::vec3 luz_direction;
	TNodo origen;
	std::vector<TNodo*> nodos;
	TGestorRecursos gestor;

};

MotorGrafico::MotorGrafico() : luz_direction{ 0, 10, 10 }, origen(nullptr), gestor()
{
}

MotorGrafico::~MotorGrafico()
{
	vaciarArbolEscena();
}

void MotorGrafico::onstart()
{
	glEnable(GL_DEPTH_TEST);
	glClearColor(0.0f, 0.5f, 0.5f, 1.0f);

	camera.setWindow(this->window);
	dir_shader.compile("Shader/directional.vertex_shader", "Shader/directional.fragment_shader");
	//model.init("model/test.assbin");
	cargarArbolEscena();

	// ocultar el cursor y ubicarlo en el centro de la ventana
	glfwSetInputMode(this->window, GLFW_CURSOR, GLFW_CURSOR_DISABLED);
	glfwSetCursorPos(this->window, 1280 / 2, 720 / 2);
}

void MotorGrafico::onrender(double time)
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	luzDirectional(dir_shader, time);
}

void MotorGrafico::luzDirectional(openGLShader & shader, double time)
{
	shader.use();

	glm::mat4 Model;

	glm::mat4 MV = camera.getViewMatrix() * Model;
	glm::mat4 MVP = camera.getProjectionMatrix() * MV;
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

	this->origen.draw(shader.getProgram());

	shader.unUse();
}

void MotorGrafico::onkey(int key, int scancode, int action, int mods)
{
	if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS) { glfwSetWindowShouldClose(window, GL_TRUE); }
	if (key == GLFW_KEY_LEFT)							{ luz_direction.x += 0.1f; }
	if (key == GLFW_KEY_RIGHT)							{ luz_direction.x -= 0.1f; }
	if (key == GLFW_KEY_UP)								{ luz_direction.y += 0.1f; }
	if (key == GLFW_KEY_DOWN)							{ luz_direction.y -= 0.1f; }
		
}

void MotorGrafico::cargarArbolEscena()
{
	this->nodos.push_back(new TNodo(new TTransform()));
	this->nodos.push_back(new TNodo(new TTransform()));
	this->nodos.push_back(new TNodo(new TMalla("models/Nanosuit/nanosuit.obj", gestor)));
	this->nodos.push_back(new TNodo(new TLuz()));
	this->nodos.push_back(new TNodo(new TTransform()));
	this->nodos.push_back(new TNodo(new TCamara()));
	std::cout << "Nodos Creados correctamente" << std::endl;
	this->origen.addHijo(this->nodos.at(1));
	this->nodos.at(1)->addHijo(this->nodos.at(0));
	this->nodos.at(0)->addHijo(this->nodos.at(2));
	this->nodos.at(1)->addHijo(this->nodos.at(3));
	this->origen.addHijo(this->nodos.at(4));
	nodos.at(4)->addHijo(nodos.at(5));
	std::cout << "Nodos Enlazados correctamente" << std::endl;
}

void MotorGrafico::vaciarArbolEscena()
{
	this->nodos.erase(nodos.begin(), nodos.end());
}

int main() {
	MotorGrafico motorApp;

	if (motorApp.init("Motor Grafico SpaceShip 1414", WIDTH, HEIGHT)) 
	{
		motorApp.info();
		motorApp.run();
	}
	return 0;
}