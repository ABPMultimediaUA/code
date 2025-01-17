#version 330 core

layout (location = 0) in vec3 position;
//layout (location = 1) in vec2 texture;
layout (location = 2) in vec3 normal;

uniform mat4 mvp_matrix;
uniform mat4 mv_matrix;
uniform mat3 n_matrix;

out vec3 N1;
out vec3 V1;
//out vec3 P;

//out vec2 texture_coord;

void main(void)
{
	// texture_coord = texture;

	// Calculate view-space coordinate
	vec4 P = mv_matrix * vec4(position, 1.0);

	// Calculate normal in view-space
	N1 = n_matrix * normal;

	// Calculate view vector
	V1 = -P.xyz;

	// Calculate the clip-space position of each vertex
	gl_Position = mvp_matrix * vec4(position, 1.0);
}
