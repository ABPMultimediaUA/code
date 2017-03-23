#include "openGLWindow.h"
#include <glm/glm.hpp>
#include <iostream>

openGLWindow::openGLWindow() : aspect_ratio{}, window{}
{
}


openGLWindow::~openGLWindow()
{
}

bool openGLWindow::init(std::string title, int width, int height, bool full_screen)
{
	aspect_ratio = static_cast<float>(width) / static_cast<float>(height);

	glfwSetErrorCallback(error_callback);

	if (!glfwInit()) return false;

	window = glfwCreateWindow(width, height, title.c_str(), full_screen ? glfwGetPrimaryMonitor() : NULL, NULL);
	if (!window)
	{
		glfwTerminate();
		return false;
	}

	glfwMakeContextCurrent(window);
	glfwSwapInterval(1);

	glfwSetKeyCallback(window, key_callback);
	glfwSetWindowCloseCallback(window, close_callback);
	glfwSetFramebufferSizeCallback(window, resize_callback);
	glfwSetCursorPosCallback(window, mouse_callback);

	if (glewInit() != GLEW_OK) {
		glfwTerminate();
		return false;
	}

	glfwSetWindowUserPointer(window, this);

	return true;
}

void openGLWindow::run()
{
	onstart();
	glfwSetTime(0.0);

	while (!glfwWindowShouldClose(window))
	{
		double seconds = glfwGetTime();
		onrender(seconds);

		glfwSwapBuffers(window);
		glfwPollEvents();
	}

	glfwDestroyWindow(window);
	glfwTerminate();
}

void openGLWindow::info()
{
	std::cout << "Vendor: " << glGetString(GL_VENDOR) << std::endl;
	std::cout << "Renderer: " << glGetString(GL_RENDERER) << std::endl;
	std::cout << "OpenGL Version: " << glGetString(GL_VERSION) << std::endl;
	std::cout << "GLSL: " << glGetString(GL_SHADING_LANGUAGE_VERSION) << std::endl << std::endl;
}

GLFWwindow * openGLWindow::getGLFWwindow()
{
	return window;
}

void openGLWindow::error_callback(int error, const char * description)
{
	std::cerr << "Error: " << error << ", " << description << std::endl << std::endl;
}

void openGLWindow::close_callback(GLFWwindow * window)
{
	openGLWindow* win_app = getOpenGLWinApp(window);
	win_app->onstop();
}

void openGLWindow::key_callback(GLFWwindow * window, int key, int scancode, int action, int mods)
{
	openGLWindow* win_app = getOpenGLWinApp(window);
	win_app->onkey(key, scancode, action, mods);
}

void openGLWindow::resize_callback(GLFWwindow * window, int width, int height)
{
	openGLWindow* win_app = getOpenGLWinApp(window);
	win_app->onresize(width, height);
}

void openGLWindow::mouse_callback(GLFWwindow * window, double xpos, double ypos)
{
	openGLWindow* win_app = getOpenGLWinApp(window);
	win_app->onmouse(xpos, ypos);
}

inline openGLWindow * openGLWindow::getOpenGLWinApp(GLFWwindow * window)
{
	return static_cast<openGLWindow*>(glfwGetWindowUserPointer(window));
}
