#pragma once
#include <string>

class Estados
{
private:
	std::string nombreEstado;
	bool estadoActivo;
	bool primerEstado;
	std::string pathAnimacion;
	bool iniciado;
public:
	Estados();
	Estados(std::string nuevoEstado);
	~Estados();
	std::string getEstado();
	bool getEstadoActivo();
	void setEstadoActivo(bool activo);
	virtual void inicializarEstado();
	virtual void limpiarEstado();
	std::string getPathAnimacion();
	void asignarPath(std::string path);
	virtual void render(void * window);
	virtual void handler(void * event, void * window, void * manager);
	virtual void update();
	bool getIniciado();
	void setIniciado(bool);
};

