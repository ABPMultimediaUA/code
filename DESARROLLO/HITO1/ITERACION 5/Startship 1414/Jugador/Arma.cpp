/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Arma.cpp
 * Author: David
 * 
 * Created on 23 de enero de 2017, 17:04
 */

#include "Arma.h"

Arma::Arma() {
}

//Arma::Arma(const Arma& orig) {
//}

Arma::~Arma() {
}

int Arma::getNivelCargador(){
    return nivelCargador;
}

int Arma::getNivelDamage() {
    return nivelDamage;
}

int Arma::getNivelMunicion() {
    return nivelMunicion;
}

float Arma::getTiempoDisparo() {
    return tiempoDisparo;
}

//total de balas que tiene el arma
int Arma::getCapacidadDeMun() {
    return capacidadDeMunicion;
}

//total de un cargador individual dependiendo del nivels
int Arma::getCargador() {
    return cargadorNiveles[nivelCargador];
}

float Arma::getDamage() {
    return damageNiveles[nivelDamage];
}

//devuelve la municion del cargador cuando se cambia
int Arma::getMunicionActual() {
    return municionActual;
}




void Arma::subirNivelCargador() {
    
    if(nivelCargador < 4){
        nivelCargador++;
    }
    
}

void Arma::subirNivelDamage() {
    
    if(nivelDamage < 4){
        nivelDamage++;
    }
 
}

void Arma::subirNivelMunicion() {
    
     if(nivelMunicion < 4){
        nivelMunicion++;
        
    }

}

void Arma::setCapacidadDeMun(int cap) {
    capacidadDeMunicion = cap;
}

void Arma::setMunicionAcutal(int newMun) {
    municionActual = newMun;
}

