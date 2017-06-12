#version 330 core

layout (location = 0) in vec3 position;
layout (location = 1) in vec2 texture;
layout (location = 2) in vec3 normal;
layout (location = 3) in vec3 tangent;
layout (location = 4) in vec3 bitangent;

uniform mat4 mvp_matrix;
uniform mat4 mv_matrix;
uniform mat3 n_matrix;
uniform mat4 model_matrix;
uniform mat4 shadow_matrix;

out vec3 FragPos;
out vec3 Normal;
out vec2 TexCoords;
out vec3 ViewSpace;
out vec3 Tangent;
out vec3 Bitangent;
out vec4 Shadow;

void main(void)
{
	Normal = n_matrix * normal;
	TexCoords = texture;
	ViewSpace = (mv_matrix * vec4(position, 1.0)).xyz;
	FragPos = -ViewSpace;
	Tangent = n_matrix * tangent;
	Bitangent = n_matrix * bitangent;
	Shadow = shadow_matrix * (model_matrix * vec4(position, 1.0));


	gl_Position = mvp_matrix * vec4(position, 1.0);
}
