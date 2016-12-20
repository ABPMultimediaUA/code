/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   gameClock.h
 * Author: elcuc_000
 *
 * Created on 11 de diciembre de 2016, 3:46
 */

#ifndef GAMECLOCK_H
#define GAMECLOCK_H

class gameClock {
public:
    gameClock();
    gameClock(const gameClock& orig);
    virtual ~gameClock();
    void start();
    void stop();
    void reset();
    bool isRunning();
    unsigned long getTime();
    double timeElapsed();
    void setThen();
private:
    bool resetted;
    bool running;
    unsigned long beg;
    unsigned long end;
    unsigned long then;
    unsigned long now;
};

#endif /* GAMECLOCK_H */

