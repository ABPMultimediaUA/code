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
    matriz2 = new float* [tam/grid];

    for (int i = 0; i < tam; i++) {
        matriz[i] = new int[tam];
    }
    
    for (int i = 0; i < tam/grid; i++) {
        matriz2[i] = new float[tam/grid];
    }

    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {

            matriz[i][j] = 0;
        }
    }
    
    for (int i = 0; i < tam/grid; i++) {
        for (int j = 0; j < tam/grid; j++) {

            matriz2[i][j] = 0;
        }
    }

}

navmeshes::navmeshes(const navmeshes& orig) {
}

navmeshes::~navmeshes() {

    for (int i = 0; i < tam; i++) {
        delete[] matriz[i];
    }
    
      for (int i = 0; i < tam/tamGrid; i++) {
        delete[] matriz2[i];
    }
    
    //delete[] matriz;
    delete[] matriz2;
}

void navmeshes::muestraGrafo() {
    std::cout << "//////////////////" << std::endl;
/*
    FILE* fp = fopen("matriz.txt", "wb");


    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            //            std::cout << matriz[i][j] << ", ";
            char Cadena[10];
            sprintf(Cadena, "%d", matriz[i][j]);
            fprintf(fp, Cadena);
            fprintf(fp, " ");

        }
        fprintf(fp, "\n");
        //        std::cout << ";" << std::endl;
    }
    */
    
    for (int i = 0; i < tam/tamGrid; i++) {
        for (int j = 0; j < tam/tamGrid; j++) {
             std::cout << matriz2[i][j] << ", ";
             if(j==(tam/tamGrid)-1)
             {
                 std::cout<<""<<std::endl;
             }
        }
        //fprintf(fp, "\n");
        //        std::cout << ";" << std::endl;
    }
    
    std::cout << "//////////////////" << std::endl;
}

void navmeshes::setColisiones(std::list<Pared*> paredes) {

    std::cout << "MOSTRANDO POSICION Y ESCALA" << std::endl;
    std::cout << "//////////////////" << std::endl;
    for (std::list<Pared*>::iterator it = paredes.begin(); it != paredes.end(); it++) {
                        std::cout<<"POSICION"<<std::endl;
                        std::cout<<"X: "<<(*it)->getPosicion().X<<std::endl;
                       std::cout<<"Y: "<<(*it)->getPosicion().Y<<std::endl;
                        std::cout<<"Z: "<<(*it)->getPosicion().Z<<std::endl;
                        if((*it)->getPosicion().X<0)
                        {
                            float diferencia = abs(250+(*it)->getPosicion().X-1);
                            std::cout<<"Negativo X"<<diferencia<<std::endl;
                            float posMatriz=ceil(diferencia/tamGrid);
                            std::cout<<"Pos Matriz "<<posMatriz<<std::endl;
                            float diferencia2 = 250+(*it)->getPosicion().Z;
                            std::cout<<"Negativo Y"<<diferencia2<<std::endl;
                            float posMatriz2=ceil(diferencia2/tamGrid);
                            std::cout<<"Pos Matriz "<<posMatriz2<<std::endl;
                            std::cout<<"Limite "<<tam/tamGrid<<std::endl;
                            std::cout<<"Escala X "<<(*it)->getEscala().X<<" Escala Y "<<(*it)->getEscala().Y<<" Escala Z "<<(*it)->getEscala().Z<<std::endl;
                            int x=abs(posMatriz);
                            int y=abs(posMatriz2);
                            matriz2[x][y]=1;
                        }
                        else
                        {
                            float diferencia = 250+(*it)->getPosicion().X-1;
                            std::cout<<"Positivo X"<<diferencia<<std::endl;
                            float posMatriz=ceil(diferencia/tamGrid);
                            std::cout<<"Pos Matriz "<<posMatriz<<std::endl;
                            float diferencia2 = 250+(*it)->getPosicion().Z;
                            std::cout<<"Positivo Y"<<diferencia2<<std::endl;
                            float posMatriz2=ceil(diferencia2/tamGrid);
                            std::cout<<"Pos Matriz "<<posMatriz2<<std::endl;
                            std::cout<<"Escala X "<<(*it)->getEscala().X<<" Escala Y "<<(*it)->getEscala().Y<<" Escala Z "<<(*it)->getEscala().Z<<std::endl;
                            int x=abs(posMatriz)-1;
                            int y=abs(posMatriz2);
                            matriz2[x][y]=1;
                            
                        }
    }
    
/*
    for (std::list<Pared*>::iterator it = paredes.begin(); it != paredes.end(); it++) {
        if ((*it) != NULL &&  (*it)->getEscala().Y == 2.0f) {
                        std::cout<<"POSICION"<<std::endl;
                        std::cout<<"X: "<<(*it)->getPosicion().X<<std::endl;
                       std::cout<<"Y: "<<(*it)->getPosicion().Y<<std::endl;
                        std::cout<<"Z: "<<(*it)->getPosicion().Z<<std::endl;
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
            int x = (*it)->getPosicion().X + tam*0.5, z = (*it)->getPosicion().Z + tam*0.5;
            
            if(x == 500)
                x--;
            if(z == 500)
                z--;
            
            //            if (x < 0) {//SI LA X ES NEGATIVA
            //                x += tam;
            //            }
            //
            //            if (z < 0) {//SI LA Z ES NEGATIVA
            //                z += tam;}


            int escala = (*it)->getEscala().X;

            //SI EL OBJETO ESTA ROTADO
            if ((*it)->getRotacion().Y == 90) {//HAY QUE AUMENTAR LAS FILAS Z Y LAS COLUMNAS X SE MANTIENEN
//                std::cout << " fila z " << z << std::endl;
//                std::cout << " columna x " << x << std::endl;
//                std::cout << "  " << std::endl;
                
                int inicioZ = z - escala * 5;

                int finZ = (z + escala * 5);

                for (inicioZ; inicioZ < finZ; inicioZ++) {
                   // matriz[inicioZ][x] = 1;
                    matriz2[inicioZ/tamGrid][x/tamGrid]=1;
                }
                
            } else {//SI EL OBJETO NO ESTA ROTADO, SE AUMENTAN LAS COLUMNAS Y SE MANTIENEN LAS FILAS
                
                int inicioX = x - escala * 5;

                int finX = (x + escala * 5);
                
                for (inicioX; inicioX < finX; inicioX++) {
                   // matriz[z][inicioX] = 1;
                    matriz2[z/tamGrid][inicioX/tamGrid]=1;

                }
            }
        }
    }*/

}

float** navmeshes::getMatriz()
{
    return matriz2;
}