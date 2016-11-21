/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   gameEntity.h
 * Author: JaumeLloret
 *
 * Created on 21 de noviembre de 2016, 18:39
 */

#ifndef GAMEENTITY_H
#define GAMEENTITY_H

class gameEntity {
public:
    gameEntity();
    gameEntity(const gameEntity& orig);
    gameEntity(int _id);
    virtual ~gameEntity();
    int getID();
private:
    int *id;
};

#endif /* GAMEENTITY_H */

