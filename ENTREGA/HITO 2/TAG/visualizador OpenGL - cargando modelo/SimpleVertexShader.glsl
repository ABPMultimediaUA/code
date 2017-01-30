#version 400 core

layout(location = 0) in vec3 vertexPosition_modelspace;
// Nota que “1” aquí es igual al “1” en glVertexAttribPointer
layout(location = 1) in vec3 vertexUV;

// Datos de salida, serán interpolados para cada fragmento.
out vec2 UV;
// Values that stay constant for the whole mesh.
uniform mat4 MVP;

void main(){
	
	// Output position of the vertex, in clip space : MVP * position
	gl_Position =  MVP * vec4(vertexPosition_modelspace,1);

  	 // UV of the vertex. No special space for this one.
	UV = vertexUV;

}