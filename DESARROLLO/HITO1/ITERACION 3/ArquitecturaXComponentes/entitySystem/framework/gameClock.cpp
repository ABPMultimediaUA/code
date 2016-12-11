/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   gameClock.cpp
 * Author: elcuc_000
 * 
 * Created on 11 de diciembre de 2016, 3:46
 */

#include "gameClock.h"
#include <time.h>

#define CLOCKS_PER_MILISEC (CLOCKS_PER_SEC/1000)

gameClock::gameClock() {
    resetted = true;
    running = false;
    beg = 0;
    end = 0;
}

gameClock::gameClock(const gameClock& orig) {
}

gameClock::~gameClock() {
}

void gameClock::start() {
    if(!running) {
        if(resetted)
            beg = (unsigned long) clock();
        else
            beg -= end - (unsigned long) clock();
        running = true;
        resetted = false;
    }
}

void gameClock::stop() {
    if(running) {
        end = (unsigned long) clock();
        running = false;
    }
}

void gameClock::reset() {
    bool wereRunning = running;
    if(wereRunning)
        stop();
    resetted = true;
    beg = 0;
    end = 0;
    if(wereRunning)
        start();
}

bool gameClock::isRunning() {
    return running;
}

unsigned long gameClock::getTime() {
    if(running) {
        return ((unsigned long) clock() - beg) / CLOCKS_PER_MILISEC;
    }
    else {
        return end - beg;
    }
}

bool gameClock::isOver(unsigned long seconds) {
    return seconds >= getTime();
}

double gameClock::timeElapsed() {

}