#pragma once
#include <vector>
#include <glm\mat4x4.hpp>
class TEntidad;
class openGLShader;

class TNodo
{
public:
	TNodo();
	TNodo(TEntidad*);
	TNodo(TNodo*, TEntidad*);
	~TNodo();
	bool addHijo(TNodo*);
	void setPadre(TNodo*);
	int removeHijo(TNodo*);
	bool setEntidad(TEntidad*);
	TEntidad* getEntidad();
	TNodo* getPadre();
	int getID();
	void draw();
	void draw(openGLShader&, const glm::mat4&, const glm::mat4&);
private:
	static int id;
	TEntidad* entidad;
	std::vector<TNodo*> hijos;
	TNodo* padre;
	int idN;
};
