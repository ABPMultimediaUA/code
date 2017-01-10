/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CAppReceiver.cpp
 * Author: User
 * 
 * Created on 16 de noviembre de 2016, 16:30
 */


#include <irrlicht.h>
#include "CAppReceiver.h"

using namespace irr;

using namespace core;
using namespace scene;
using namespace video;
using namespace io;
using namespace gui;



   CAppReceiver::CAppReceiver(){
       for(int i = 0; i < KEY_KEY_CODES_COUNT; i++){
           KeyDown[i] = false;
       }
           
   }

    bool CAppReceiver::OnEvent(const SEvent& event){
       switch(event.EventType){
           case irr::EET_KEY_INPUT_EVENT:
           {
              KeyDown[event.KeyInput.Key] = event.KeyInput.PressedDown; 
           }
           default:
               break;
       }
       return false;
   }

        
    bool CAppReceiver::isKeyDown(EKEY_CODE keyCode) const{
        return KeyDown[keyCode];
    }

    bool CAppReceiver::isKeyUp(EKEY_CODE keyCode) const{
        return !KeyDown[keyCode];

    }

