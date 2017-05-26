#version 330 core

struct Material {
	sampler2D diffuse;
	sampler2D specular;
	sampler2D ambient;
	sampler2D normal;
	float shininess;
	float shininess_strength;
};

struct LuzDireccional {
    vec3 direction;

    vec3 ambient;
    vec3 diffuse;
    vec3 specular;
};

struct luzPuntual {
    vec3 position;

    //float constant;
    //float linear;
    //float quadratic;

    vec3 ambient;
    vec3 diffuse;
    vec3 specular;
};

struct LuzFocal {
    vec3 position;
    vec3 direction;
    float cutOff;
    float exponent;

    //float constant;
    //float linear;
    //float quadratic;

    vec3 ambient;
    vec3 diffuse;
    vec3 specular;
};

#define NUM_LUCES_PUNTUALES 3
#define NUM_LUCES_FOCALES 4

const float constant = 1.0;
const float linear = 0.0;
const float quadratic = 0.0;

uniform mat4 mv_matrix;
uniform LuzDireccional dirLight;
uniform luzPuntual pointLights[NUM_LUCES_PUNTUALES];
uniform LuzFocal spotLight[NUM_LUCES_FOCALES];
uniform Material material;
uniform bool texture_off = true;
uniform bool normal_off = true;

in vec3 FragPos;
in vec3 Normal;
in vec2 TexCoords;
in vec3 ViewSpace;
in vec3 Tangent;
in vec3 Bitangent;

out vec4 color;

// Funciones para el calculo del color segun el tipo de luz
vec3 CalcLuzDireccional(LuzDireccional light, Material mate, vec2 texCoo, vec3 normal, vec3 fragPos);
vec3 CalcLuzPuntual(luzPuntual light, Material mate, vec2 texCoo, vec3 normal, vec3 fragPos, mat4 mV, vec3 p);
vec3 CalcLuzFocal(LuzFocal light, Material mate, vec2 texCoo, vec3 normal, vec3 fragPos, mat4 mV, vec3 p);

void main()
{
	vec3 normalT = texture(material.normal, TexCoords).rgb;
		 normalT = normalT * 2.0 - vec3(1.0);

	mat3 TBN = mat3(normalize(Tangent), normalize(Bitangent), normalize(Normal));

	vec3 NT = normal_off ? Normal : TBN * normalT;
	NT = normalize(NT);

    vec3 result = CalcLuzDireccional(dirLight, material, TexCoords, NT, FragPos);

    for(int i = 0; i < NUM_LUCES_PUNTUALES; i++)
        result += CalcLuzPuntual(pointLights[i], material, TexCoords, NT, FragPos, mv_matrix, ViewSpace);

    for(int i = 0; i < NUM_LUCES_FOCALES; i++)
      result += CalcLuzFocal(spotLight[i], material, TexCoords, NT, FragPos, mv_matrix, ViewSpace);

    color = vec4(result, 1.0);
}

vec3 CalcLuzDireccional(LuzDireccional light, Material mate, vec2 texCoo, vec3 normal, vec3 fragPos)
{
    vec3 NT = normalize(normal);
	vec3 L = normalize(light.direction);
	vec3 V = normalize(fragPos);
	vec3 H = normalize(L + V);

	float diff = max(0.0, dot(NT, L));
	float spec = pow(max(0.0, dot(NT, H)), material.shininess) * material.shininess_strength;

	vec3 texture_ambient  = texture_off ? vec3(0.10) : texture(mate.ambient , texCoo).rgb;
	vec3 texture_diffuse  = texture_off ? vec3(0.64) : texture(mate.diffuse , texCoo).rgb;
	vec3 texture_specular = texture_off ? vec3(0.50) : texture(mate.specular, texCoo).rgb;

	vec3 ambient  = texture_ambient * light.ambient;
	vec3 diffuse  = texture_diffuse * light.diffuse  * diff;
	vec3 specular = texture_specular * light.specular * spec;

	return (ambient + diffuse + specular);
}

vec3 CalcLuzPuntual(luzPuntual light, Material mate, vec2 texCoo, vec3 normal, vec3 fragPos, mat4 mV, vec3 p)
{
    vec3 light_position = (mV * vec4(light.position, 1)).xyz;
	vec3 L1 = light_position - p;
	float d = length(L1);
		
	vec3 NT = normalize(normal);
	vec3 L = normalize(L1);
	vec3 V = normalize(fragPos);

	vec3 R = reflect(-L, NT);

	float diff = max(0.0, dot(NT, L));
	float spec = pow(max(0.0, dot(R, V)), material.shininess) * material.shininess_strength;
	
	vec3 texture_ambient  = texture_off ? vec3(0.10) : texture(mate.ambient , texCoo).rgb;
	vec3 texture_diffuse  = texture_off ? vec3(0.64) : texture(mate.diffuse , texCoo).rgb;
	vec3 texture_specular = texture_off ? vec3(0.50) : texture(mate.specular, texCoo).rgb;

	vec3 ambient  = texture_ambient * light.ambient;
	vec3 diffuse  = texture_diffuse * light.diffuse  * diff;
	vec3 specular = texture_specular * light.specular * spec;

	float attenuationAmount = 1.0 / (constant + (linear*d) + (quadratic*d*d));

	diffuse *= attenuationAmount;
	specular *= attenuationAmount;
	ambient *= attenuationAmount;
    return (ambient + diffuse + specular);
}

vec3 CalcLuzFocal(LuzFocal light, Material mate, vec2 texCoo, vec3 normal, vec3 fragPos, mat4 mV, vec3 p)
{
    vec3 light_position = (mV * vec4(light.position, 1)).xyz;
	vec3 L1 = light_position - p;
	float d = length(L1);
		
	vec3 NT = normalize(normal);
	vec3 L = normalize(L1);
	vec3 V = normalize(fragPos);

	vec3 D = normalize(light.direction);
	float spotEffect = dot(-L, D);

	if(spotEffect > light.cutOff) {
		spotEffect = pow(spotEffect, light.exponent);
	
		vec3 R = reflect(-L, NT);
	
		float diff = max(0.0, dot(NT, L));
		float spec = pow(max(0.0, dot(R, V)), material.shininess) * material.shininess_strength;
	
		vec3 texture_ambient  = texture_off ? vec3(0.10) : texture(mate.ambient , texCoo).rgb;
		vec3 texture_diffuse  = texture_off ? vec3(0.64) : texture(mate.diffuse , texCoo).rgb;
		vec3 texture_specular = texture_off ? vec3(0.50) : texture(mate.specular, texCoo).rgb;

		vec3 ambient  = texture_ambient * light.ambient;
		vec3 diffuse  = texture_diffuse * light.diffuse  * diff;
		vec3 specular = texture_specular * light.specular * spec;

		float attenuationAmount = spotEffect / (constant + (linear*d) + (quadratic*d*d));

		ambient  *= attenuationAmount;
		diffuse  *= attenuationAmount;
		specular *= attenuationAmount;
		return (ambient + diffuse + specular);
	}
	return vec3(0.0, 0.0, 0.0);
}
