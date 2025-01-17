#version 330 core

out vec4 color;

in vec3 N1;
in vec3 V1;

uniform mat4 mv_matrix;

struct Light {
	vec3 direction;
	vec3 ambient;
	vec3 diffuse;
	vec3 specular;
};

struct Material {
	vec3 ambient;
	vec3 diffuse;
	vec3 emissive;
	vec3 specular;
	float shininess;
	float shininess_strength;
};

uniform Light light;
uniform Material material;

//in vec2 texture_coord;

//uniform sampler2D texture_ambient;
//uniform sampler2D texture_diffuse;
//uniform sampler2D texture_specular;

//uniform bool enable_ambient = false;
//uniform bool enable_diffuse = false;
//uniform bool enable_specular = false;

void main()
{
		vec3 N = normalize(N1);
		vec3 L = normalize(light.direction);
		vec3 V = normalize(V1);
		vec3 H = normalize(L + V);

		float diff = max(dot(N, L), 0);
		float spec = pow(max(dot(N, H), 0), material.shininess) * material.shininess_strength;

		vec3 emissive = material.emissive;
		vec3 ambient  = material.ambient  * light.ambient;
		vec3 diffuse  = material.diffuse  * light.diffuse  * diff;
		vec3 specular = material.specular * light.specular * spec;

		color = vec4(emissive + ambient + diffuse + specular, 1.0);

		//vec4 tex_amb  = texture(texture_ambient,  texture_coord);
		//vec4 tex_diff = texture(texture_diffuse,  texture_coord);
		//vec4 tex_spec = texture(texture_specular, texture_coord);

		//vec4 fambi = vec4(ambient, 1)  * tex_amb;
		//vec4 fdiff = vec4(diffuse, 1)  * tex_diff;
		//vec4 fspec = vec4(specular, 1) * tex_spec;

		//color = fambi + fdiff + fspec;
} 
