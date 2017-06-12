#version 330 core

struct Luces
{
	bool activa;
	bool esLocal;
	bool esFocal;
	vec3 cAmbiente;
	vec3 colorDS;
	vec3 posicion;
	vec3 vectorMedio;
	vec3 direcCono;
	float spotCosCutOff;
	float spotExponent;
	float atenuacionConstante;
	float atenuacionLinial;
	float atenuacionCuadratica;
};

const int LuMax = 30;
uniform Luces luz[LuMax];

uniform float Shininess;
uniform float Strength;
//uniform vec3 EyeDirection;

in vec4 Color;
in vec3 Normal;
in vec4 Position;

out vec4 FragColor;

void main()
{
	vec3 scatteredLight = vec3( 0.0 );
	vec3 reflectedLight = vec3( 0.0 );

	for ( int l = 0; l < LuMax; ++l )
	{
		if ( !luz[l].activa )
		{
				continue;
		}

		vec3 halfVector;
		vec3 direccionLuz = luz[l].posicion;
		float atenuacion = 1.0;

		if ( luz[l].esLocal )
		{
			direccionLuz = direccionLuz - vec3(Position);
			float distanciaLuz = length(direccionLuz);
			direccionLuz = direccionLuz / distanciaLuz;
			atenuacion = 1.0 / ( luz[l].atenuacionConstante + luz[l].atenuacionLinial * distanciaLuz + luz[l].atenuacionCuadratica * distanciaLuz * distanciaLuz );

			if ( luz[l].esFocal )
			{
				float spotCos = dot( direccionLuz, -luz[l].direcCono );

				if ( spotCos < luz[l].spotCosCutOff)
				{
					atenuacion = 0.0;
				}
				else
				{
					atenuacion *= pow( spotCos, luz[l].spotExponent );
				}

				//halfVector = normalize( direccionLuz + EyeDirection );
				halfVector = normalize( direccionLuz + vec3( 0, 0, 1 ) );
			}
			else
			{
				halfVector = luz[l].vectorMedio;
			}
		}

		float difusa = max( 0.0, dot( Normal, direccionLuz ) );
		float especular = max( 0.0, dot( Normal, halfVector ) );

		if( difusa == 0.0 )
		{
			especular = 0.0;
		}
		else
		{
			especular = pow( especular, Shininess) * Strength;
		}

		scatteredLight += luz[l].cAmbiente * atenuacion + luz[l].colorDS * difusa * atenuacion;
		reflectedLight += luz[l].colorDS * especular * atenuacion;
	}
	vec3 rgb = min( Color.rgb * scatteredLight + reflectedLight, vec4( 1.0 ) );

	FragColor = vec4( rgb, Color.a);
}
