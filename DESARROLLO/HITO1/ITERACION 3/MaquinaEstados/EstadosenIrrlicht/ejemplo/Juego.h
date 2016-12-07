/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Juego.h
 * Author: Iván
 *
 * Created on 7 de diciembre de 2016, 21:32
 */

#ifndef JUEGO_H
#define JUEGO_H

class Estado;

class Juego {
public:
    Juego();
    Juego(const Juego& orig);
    virtual ~Juego();
    Estado* actual; 
    Estado* jugando;
    Estado* pausa;
private:

};

#endif /* JUEGO_H */

