/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   TNodo.h
 * Author: elcuc_000
 *
 * Created on 6 de febrero de 2017, 23:40
 */

#ifndef TNODO_H
#define TNODO_H

class TEntidad;

class TNodo {
public:
    TNodo();
    TNodo(const TNodo& orig);
    TNodo(TNodo*);
    virtual ~TNodo();
    int addHijo(TNodo*);
    int removeHijo(TNodo*);
    bool setEntidad(TEntidad*);
    TNodo* getPadre();
    void draw();
private:
    TEntidad *entidad;
    std::vector<TNodo*> hijos;
    TNodo *padre;
};

#endif /* TNODO_H */

