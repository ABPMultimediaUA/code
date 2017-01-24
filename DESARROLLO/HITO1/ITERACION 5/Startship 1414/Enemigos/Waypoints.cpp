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
     
    for(int i=0; i<puntos.size(); i++)
    {
        delete[] pesos[i];
    }
    
    delete[] pesos;
}

void Waypoints::MuestraPuntos()
{
    std::cout<<"-<-<-<-<-<-<-<-<-<-<-<-<"<<std::endl;
    for(int i=0; i<puntos.size(); i++)
    {
        
       std::cout<<puntos[i].nombre<<" "<<puntos.size()<<std::endl;
    }
      
    std::cout<<"-<-<-<-<-<-<-<-<-<-<-<-<"<<std::endl;
}

void Waypoints::creaPuntos(std::string nombre, vector3df posicion)
{
     Way.nombre=nombre;
    Way.pos=posicion;
    
    puntos.push_back(Way);
}

void Waypoints::creaPesos()
{
    pesos= new float*[puntos.size()];
    float weightX=0;
    float weightZ=0;
    float weight=0;
    
    for(int i=0; i<puntos.size(); i++)
    {
        pesos[i] = new float[puntos.size()];
    }
    for(int i=0; i<puntos.size(); i++)
    {
     
       for(int j=0; j<puntos.size(); j++)
       {   
            pesos[i][j]=0;
           if(puntos[i].nombre!=puntos[j].nombre)
           {
               
               weightX=pow((puntos[j].pos.X-puntos[i].pos.X),2);
               weightZ=pow(puntos[j].pos.Z-puntos[i].pos.Z,2);
               weight=weightX+weightZ;
               weight=sqrt(weight);
               pesos[i][j]=weight;
               
            }
       }
    }
    
}

void Waypoints::mostrarPesos()
{
    for(int i=0; i<puntos.size(); i++)
    {
        for(int j=0; j<puntos.size(); j++)
        {
            std::cout<<pesos[i][j]<<" ";
            if(puntos.size()-1==j)
            {
                std::cout<<std::endl;
            }
        }
    }
}
