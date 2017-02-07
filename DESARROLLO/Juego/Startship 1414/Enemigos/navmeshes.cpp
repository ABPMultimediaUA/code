/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   navmeshes.cpp
 * Author: User
 *
 * Created on 6 de febrero de 2017, 17:11
 */

#include "navmeshes.h"

navmeshes::navmeshes(int grid, Escenario* esce) {

    tamGrid = grid;
    tam = esce->getTam();

    matriz = new int* [tam];

    for (int i = 0; i < tam; i++) {
        matriz[i] = new int[tam];
    }

    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {

            matriz[i][j] = 0;
        }
    }

}

navmeshes::navmeshes(const navmeshes& orig) {
}

navmeshes::~navmeshes() {

    for (int i = 0; i < tam; i++) {
        delete[] matriz[i];
    }

    delete[] matriz;
}

void navmeshes::muestraGrafo() {
    std::cout << "//////////////////" << std::endl;

    FILE* fp = fopen("matriz.txt", "wb");


    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            std::cout << matriz[i][j] << ", ";
            char Cadena[10];
            sprintf(Cadena, "%d", matriz[i][j]);
            fprintf(fp, Cadena);
            fprintf(fp, " ");

        }
        fprintf(fp, "\n");
        std::cout << ";" << std::endl;
    }
    std::cout << "//////////////////" << std::endl;
}

void navmeshes::setColisiones(std::list<Pared*> paredes) {

    std::cout << "MOSTRANDO POSICION Y ESCALA" << std::endl;
    std::cout << "//////////////////" << std::endl;

    for (std::list<Pared*>::iterator it = paredes.begin(); it != paredes.end(); it++) {
        if ((*it) != NULL) {
            //            std::cout<<"POSICION"<<std::endl;
            //            std::cout<<"X: "<<(*it)->getPosicion().X<<std::endl;
            //            std::cout<<"Y: "<<(*it)->getPosicion().Y<<std::endl;
            //            std::cout<<"Z: "<<(*it)->getPosicion().Z<<std::endl;
            //            std::cout<<"//////////////////"<<std::endl;
            //            std::cout<<"//////////////////"<<std::endl;
            //            std::cout<<"ROTACION"<<std::endl;
            //            std::cout<<"X: "<<(*it)->getRotacion().X<<std::endl;
            //            std::cout<<"Y: "<<(*it)->getRotacion().Y<<std::endl;
            //            std::cout<<"Z: "<<(*it)->getRotacion().Z<<std::endl;
            //            std::cout<<"//////////////////"<<std::endl;
            //            std::cout<<"//////////////////"<<std::endl;
            //            std::cout<<"ESCALA"<<std::endl;
            //            std::cout<<"X: "<<(*it)->getEscala().X<<std::endl;
            //            std::cout<<"Y: "<<(*it)->getEscala().Y<<std::endl;
            //            std::cout<<"Z: "<<(*it)->getEscala().Z<<std::endl;
            //            std::cout<<"//////////////////"<<std::endl;
            //            std::cout<<"//////////////////"<<std::endl;
            int x = (*it)->getPosicion().X, z = (*it)->getPosicion().Z;
            //            std::cout << " X inicial" << x << std::endl;
            if (x < 0) {//SI LA X ES NEGATIVA
                x += tam;
            }
            if (z < 0) {//SI LA Z ES NEGATIVA
                z += tam;
            }

            int escala = (*it)->getEscala().X;

            //SI EL OBJETO ESTA ROTADO
            if ((*it)->getRotacion().Y == 90) {//HAY QUE AUMENTAR LAS FILAS Y LAS COLUMNAS SE MANTIENEN
                int inicioX = (x - escala * 5);
                //                std::cout << " X " << x << "- escala" << escala << "*5 = " << inicioX << std::endl;
                int finX = (x + escala * 5) - 1;
                //                std::cout << "FIN x " << finX << std::endl;
                //                std::cout << "///////////////////////////////////////////////" << std::endl;
                for (inicioX; inicioX <= finX; inicioX++) {
                    matriz[inicioX][z] = 1;
                }
            } else {//SI EL OBJETO NO ESTA ROTADO, SE AUMENTAN LAS COLUMNAS Y SE MANTIENEN LAS FILAS

            }
        }
    }

}

