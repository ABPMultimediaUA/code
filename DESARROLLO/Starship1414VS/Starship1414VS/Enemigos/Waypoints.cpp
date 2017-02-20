/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   Waypoints.cpp
 * Author: Hector
 *
 * Created on 24 de enero de 2017, 18:00
 */

#include "Waypoints.h"




Waypoints::Waypoints() {

}

Waypoints::Waypoints(const Waypoints& orig) {
}

Waypoints::~Waypoints() {

    for (int i = 0; i < puntos.size(); i++) {
        delete[] pesos[i];
    }

    delete[] pesos;
}

void Waypoints::MuestraPuntos() {
    std::cout << "-<-<-<-<-<-<-<-<-<-<-<-<" << std::endl;
    for (int i = 0; i < puntos.size(); i++) {

        std::cout << puntos[i].nombre << " " << puntos.size() << std::endl;
    }

    std::cout << "-<-<-<-<-<-<-<-<-<-<-<-<" << std::endl;
}

void Waypoints::creaPuntos(std::string nombre, vector3df posicion) {
    Way.nombre = nombre;
    Way.pos = posicion;
	Way.lugar = puntos.size();

    puntos.push_back(Way);
 

}

void Waypoints::creaPesos(Entity2D *entity) {
    pesos = new float*[puntos.size()];
    float weightX = 0;
    float weightZ = 0;
    float weight = 0;

    for (int i = 0; i < puntos.size(); i++) {
        pesos[i] = new float[puntos.size()];
    }
    for (int i = 0; i < puntos.size(); i++) {

        for (int j = 0; j < puntos.size(); j++) {
            pesos[i][j] = 0;

            if (puntos[i].nombre != puntos[j].nombre) {
				
				//si nos devuelve f = 0 significa que ha chocado contra algo que no es una pared
				//o contra nada entonces se le asigna el valor de la distancia
				//sino, (choca contra una pared) se le pondria -1 (no llega a ese waypoint)
				//se deberia limiar el uso de raycast usando un filtro para el peso que si
				//supera X valor (tamDelMapa / 4 por ejemplo) no haga el raycast y se le asigne
				// -1
				float f = -1;
				weightX = pow((puntos[j].pos.X - puntos[i].pos.X), 2);
				weightZ = pow(puntos[j].pos.Z - puntos[i].pos.Z, 2);
				weight = weightX + weightZ;
				weight = sqrt(weight);
				/*std::cout << "///////////////////////" << std::endl;

				std::cout << "PESO ANTES DEL FILTRO: " << weight << std::endl;
				std::cout << "///////////////////////" << std::endl;*/



				if(weight <=tamDelMapa * 0.4 ) {
					 f = entity->rayCasting(b2Vec2(puntos[i].pos.X, puntos[i].pos.Z), b2Vec2(puntos[j].pos.X, puntos[j].pos.Z));

					 if(f != 0.0f) {
						 weight = -1;
					 }

				}

				else {
					weight = -1;
				}

                std::cout<<"///////////////////////"<<std::endl;
                std::cout<<puntos[i].nombre<<std::endl;
                std::cout<<"I: "<<i<<"J: "<<j<<std::endl;
                std::cout<<puntos[j].nombre<<std::endl;
				
                std::cout << "F = " << f << std::endl;
              
                std::cout<<"PESO: "<<weight<<std::endl;
                pesos[i][j] = weight;

            }
        }
    }

}

void Waypoints::mostrarPesos() {
    for (int i = 0; i < puntos.size(); i++) {
        for (int j = 0; j < puntos.size(); j++) {
            std::cout << pesos[i][j] << " ";
            if (puntos.size() - 1 == j) {
                std::cout << std::endl;
            }
        }
    }
}


void Waypoints::setTamDelMapa(int tam) {
	tamDelMapa = tam;
}


float** Waypoints::getMatriz() {
	return pesos;
}


std::vector<struct Waypoints::Nodo> Waypoints::getNodos() {
	return puntos;
}

struct Waypoints::Nodo Waypoints::getNodoX(int x) {

	return puntos.at(x);

}
