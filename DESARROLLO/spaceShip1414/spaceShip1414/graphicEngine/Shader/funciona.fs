#version 330 core

out vec4 color;

in vec3 FragPos;
in vec3 Normal;
in vec2 TexCoords;

struct Light {
	vec3 direction;
	vec3 ambient;
	vec3 diffuse;
	vec3 specular;
};

struct Material {
	sampler2D diffuse;
	sampler2D specular;
	sampler2D ambient;
	float shininess;
	float shininess_strength;
};

uniform mat4 mv_matrix;

uniform Light light;
uniform Material material;

void main()
{
		vec3 N = normalize(Normal);
		vec3 L = normalize(light.direction);
		vec3 V = normalize(FragPos);
		vec3 H = normalize(L + V);

		float diff = max(dot(N, L), 0);
		float spec = pow(max(dot(N, H), 0), material.shininess) * material.shininess_strength;

		vec3 ambient  = texture(material.ambient , TexCoords).rgb * light.ambient;
		vec3 diffuse  = texture(material.diffuse , TexCoords).rgb * light.diffuse  * diff;
		vec3 specular = texture(material.specular, TexCoords).rgb * light.specular * spec;

		color = vec4(ambient + diffuse + specular, 1.0);
}
