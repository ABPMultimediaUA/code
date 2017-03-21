#include "TRecursoMaterial.h"
#include <iostream>


TRecursoMaterial::TRecursoMaterial(GLenum TT, std::string& n)
{
	this->m_textureTarget = TT;
	this->setNombre(n);
}


TRecursoMaterial::~TRecursoMaterial()
{
}

bool TRecursoMaterial::cargarFichero(const std::string& n)
{
	try {
		m_image.read(n);
		m_image.write(&m_blob, "RGBA");
	}
	catch (Magick::Error& Error) {
		std::cout << "Error loading texture '" << n << "': " << Error.what() << std::endl;
		return false;
	}

	glGenTextures(1, &m_textureObj);
	glBindTexture(m_textureTarget, m_textureObj);
	glTexImage2D(m_textureTarget, 0, GL_RGBA, m_image.columns(), m_image.rows(), 0, GL_RGBA, GL_UNSIGNED_BYTE, m_blob.data());
	glTexParameterf(m_textureTarget, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameterf(m_textureTarget, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	glBindTexture(m_textureTarget, 0);

	return true;
}

void TRecursoMaterial::draw()
{
}

void TRecursoMaterial::enlazar(GLenum TU)
{
	glActiveTexture(TU);
	glBindTexture(m_textureTarget, m_textureObj);
}
