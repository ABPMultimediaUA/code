/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   camara.cpp
 * Author: elcuc_000
 * 
 * Created on 3 de diciembre de 2016, 1:24
 */

#include "camara.h"

camara::camara() {
}

camara::camara(const camara& orig) : gameEntity(orig) {
}

camara::camara(int _id) : gameEntity(_id) {
}

camara::~camara() {
}

