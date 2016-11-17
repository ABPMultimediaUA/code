/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CAppReceiver.h
 * Author: User
 *
 * Created on 16 de noviembre de 2016, 16:30
 */

#ifndef CAPPRECEIVER_H
#define CAPPRECEIVER_H
#include <irrlicht.h>

using namespace irr;

using namespace core;
using namespace scene;
using namespace video;
using namespace io;
using namespace gui;

class CAppReceiver : public IEventReceiver { 
    
private:
    bool KeyDown[KEY_KEY_CODES_COUNT]; 
    
public:
    CAppReceiver();
    virtual bool OnEvent(const SEvent &event);
    virtual bool isKeyDown(EKEY_CODE keyCode) const;
    virtual bool isKeyUp(EKEY_CODE keyCode) const;
    
    
};


#endif /* CAPPRECEIVER_H */
