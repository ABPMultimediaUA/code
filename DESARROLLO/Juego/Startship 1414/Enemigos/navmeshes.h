/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   navmeshes.h
 * Author: User
 *
 * Created on 6 de febrero de 2017, 17:11
 */

#ifndef NAVMESHES_H
#define NAVMESHES_H

#include <math.h>
#include <stdlib.h>
#include "../Escenario/Escenario.h"

class navmeshes {
    
public:
    
    navmeshes(int grid, Escenario* esce);
    navmeshes(const navmeshes& orig);
    virtual ~navmeshes();
    void muestraGrafo();
    void setColisiones(std::list<Pared*> paredes);
    float** getMatriz();
private:

    int **matriz;
    float **matriz2;
    int tamGrid;
    int tam;
    
};

#endif /* NAVMESHES_H */

