#include "TRecursoMalla.h"
#include "..\frameWork\mesh.h"
#include "..\frameWork\shader.h"
#include <assimp\Importer.hpp>
#include <assimp\scene.h>
#include <assimp\postprocess.h>
#include <iostream>
#include <vector>



/*GLint TextureFromFile(const char* path, std::string directory)
{
	//Generate texture ID and load texture data 
	std::string filename = std::string(path);
	filename = directory + '/' + filename;
	GLuint textureID;
	glGenTextures(1, &textureID);
	int width, height;
	unsigned char* image = SOIL_load_image(filename.c_str(), &width, &height, 0, SOIL_LOAD_RGB);
	// Assign texture to ID
	glBindTexture(GL_TEXTURE_2D, textureID);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, width, height, 0, GL_RGB, GL_UNSIGNED_BYTE, image);
	glGenerateMipmap(GL_TEXTURE_2D);

	// Parameters
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR_MIPMAP_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	glBindTexture(GL_TEXTURE_2D, 0);
	SOIL_free_image_data(image);
	return textureID;
}*/

TRecursoMalla::TRecursoMalla()
{
}

TRecursoMalla::TRecursoMalla(std::string path)
{
	this->cargarFichero(path);
}


TRecursoMalla::~TRecursoMalla()
{
}

bool TRecursoMalla::cargarFichero(std::string path)
{
	Assimp::Importer importer;
	const aiScene* scene = importer.ReadFile(path, aiProcess_TransformUVCoords | aiProcess_FlipUVs);
	if (!scene || scene->mFlags & AI_SCENE_FLAGS_INCOMPLETE || !scene->mRootNode)
	{
		std::cout << "Error cargar modelo codigo assimp: " << importer.GetErrorString() << std::endl;
		return false;
	}
	this->directorio = path.substr(0, path.find_last_of('/'));

	std::cout << scene->mNumMeshes << std::endl;
	aiMesh* aimesh = scene->mMeshes[scene->mRootNode->mMeshes[0]];

	std::vector<Vertex> vertices;
	for(GLuint i = 0; i < aimesh->mNumVertices; i++)
	{
		Vertex vertex;
		vertex.Position.x = aimesh->mVertices[i].x;
		vertex.Position.y = aimesh->mVertices[i].y;
		vertex.Position.z = aimesh->mVertices[i].z;
		vertex.Normal.x = aimesh->mNormals[i].x;
		vertex.Normal.y = aimesh->mNormals[i].y;
		vertex.Normal.z = aimesh->mNormals[i].z;
		if (aimesh->mTextureCoords[0])
		{
			glm::vec2 vec;
			vertex.TexCoords.x = aimesh->mTextureCoords[0][i].x;
			vertex.TexCoords.y = aimesh->mTextureCoords[0][i].y;
		}
		else
		{
			vertex.TexCoords = glm::vec2(0.0f, 0.0f);
		}
		vertices.push_back(vertex);
	}
	std::vector<GLuint> indices;
	for (GLuint i = 0; i < aimesh->mNumFaces; i++)
	{
		aiFace face = aimesh->mFaces[i];
		for (GLuint j = 0; j < face.mNumIndices; j++)
		{
			indices.push_back(face.mIndices[j]);
		}
	}
	std::vector<Texture> textures;
	/*if(aimesh->mMaterialIndex >= 0)
	{
		aiMaterial* material = scene->mMaterials[aimesh->mMaterialIndex];
		std::vector<Texture> diffuseMaps = this->loadMaterialTextures(material, aiTextureType_DIFFUSE, "texture_diffuse");
		textures.insert(textures.end(), diffuseMaps.begin(), diffuseMaps.end());
		std::vector<Texture> specularMaps = this->loadMaterialTextures(material, aiTextureType_SPECULAR, "texture_specular");
		textures.insert(textures.end(), specularMaps.begin(), specularMaps.end());
	}*/
	this->malla = new mesh(vertices, indices, textures);
	return true;
}

/*std::vector<Texture> TRecursoMalla::loadMaterialTextures(aiMaterial * mat, aiTextureType type, std::string typeName)
{
	std::vector<Texture> textures;
	for (GLuint i = 0; i < mat->GetTextureCount(type); i++)
	{
		aiString str;
		mat->GetTexture(type, i, &str);
		GLboolean skip = false;
		for (GLuint j = 0; j < textures_loaded.size(); j++)
		{
			if (std::strcmp(textures_loaded[j].path.C_Str(), str.C_Str()) == 0)
			{
				textures.push_back(textures_loaded[j]);
				skip = true;
				break;
			}
		}
		if (!skip)
		{
			Texture texture;
			texture.id = TextureFromFile(str.C_Str(), this->directorio);
			texture.type = typeName;
			texture.path = str;
			textures.push_back(texture);
			this->textures_loaded.push_back(texture);
		}
	}
	return textures;
}*/

void TRecursoMalla::draw()
{
	this->malla->Draw(*this->sombreado);
}

void TRecursoMalla::setShader(shader* s)
{
	this->sombreado = s;
}
