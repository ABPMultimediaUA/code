#version 400 core

// Valores interpolados de los vertex shaders
in vec3 fragmentColor;

// datos de salida
out vec3 color;

void main(){
    // Color de salida = color especificado en el vertex shader,
    // Interpolado entre los 3 vértices alrededor
    color = fragmentColor;
}