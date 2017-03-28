#pragma once
#ifndef GLEW_STATIC
#define GLEW_STATIC
#include <GL/glew.h>
#endif
#ifndef GLFW_STATIC
#define GLFW_STATIC
#include <GLFW\glfw3.h>
#endif
#include <string>
#include <algorithm>
class openGLWindow
{
public:
	openGLWindow();
	~openGLWindow();
	bool init(std::string, int width = 1024, int height = 720, bool full_screen = false);
	void run();
	void info();
	GLFWwindow* getGLFWwindow();
private:
	static void error_callback(int, const char*);
	static void close_callback(GLFWwindow*);
	static void key_callback(GLFWwindow*, int, int, int, int);
	static void resize_callback(GLFWwindow*, int, int);
	static void mouse_callback(GLFWwindow*, double, double);
	inline static openGLWindow* getOpenGLWinApp(GLFWwindow*);
protected:
	virtual void onstart() { };

	virtual void onstop() { };

	virtual void onkey(int key, int scancode, int action, int mods) { };

	virtual void onrender(double time) = 0;

	virtual void onmouse(double xpos, double ypos) { };

	virtual void onresize(int width, int height) {
		aspect_ratio = std::max(0.0f, width / (float)height);
		glViewport(0, 0, width, height);
	};
	GLFWwindow* window;
	float aspect_ratio;
};

