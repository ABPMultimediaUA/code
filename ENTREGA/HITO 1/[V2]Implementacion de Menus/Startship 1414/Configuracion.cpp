/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <valarray>

#include "Configuracion.h"
#include "ManejadorEstadoGeneral.h"

#ifdef _IRR_WINDOWS_
#pragma comment(lib, "Irrlicht.lib")
#pragma comment(linker, "/subsystem:windows /ENTRY:mainCRTStartup")
#endif

Configuracion::Configuracion() {

    IrrXMLReader* xml = createIrrXMLReader("configuracion.xml");

    if (!xml) {

        //        paramIrr.WindowSize = dimension2d<s32>(1366, 768);
        //        paramIrr.Fullscreen = true;
        //        this->escribir();
        this->leer("configuracionDefault.xml");

    } else {

        this->leer("configuracion.xml");

    }
}

Configuracion::Configuracion(const Configuracion& orig) {
}

Configuracion::~Configuracion() {

}

void Configuracion::leer(const char *file) {
    u32 screenWidth, screenHeight;

    IrrXMLReader* xml = createIrrXMLReader(file);
    while (xml && xml->read()) {
        switch (xml->getNodeType()) {
            case EXN_ELEMENT:
            {
                if (!strcmp("settings", xml->getNodeName())) {
                    screenWidth = xml->getAttributeValueAsInt("width");
                    screenHeight = xml->getAttributeValueAsInt("height");

                    //                    paramIrr.Bits = xml->getAttributeValueAsInt("bits");
                    paramIrr.Fullscreen = xml->getAttributeValueAsInt("fullscreen");

                    controlesFlechas = xml->getAttributeValueAsInt("controles");
                    //paramIrr.DriverType  =xml->getAttributeValueSafe ("drivertype");
                } else if (!strcmp("options", xml->getNodeName())) {
                    //                    paramIrr.Vsync = xml->getAttributeValueAsInt("vsync");
                    //                    paramIrr.AntiAlias = xml->getAttributeValueAsInt("antialias");
                    //                    paramIrr.Stencilbuffer = xml->getAttributeValueAsInt("stencilbuffer");

                }
            }
        }//switch
    }//while

    delete xml;

    //transfer parameters
    paramIrr.WindowSize = dimension2d<s32>(screenWidth, screenHeight);
    //paramIrr.DriverType = video::EDT_OPENGL;
    return;
}

void Configuracion::escribir(const char *file) {

    wchar_t bits_str[32], videoheigth[32], videowidth[32], fullscreen[32],
            controles[32], antialias[32], stencilbuffer[32];

    //  wchar_t width2[32] = L"1756";

    // wchar_t heigth2[32] = L"766";

    //formats the strings for XMLwriter

    swprintf(videowidth, L"%d", paramIrr.WindowSize.Width);
    swprintf(videoheigth, L"%d", paramIrr.WindowSize.Height);
    //    swprintf(bits_str, 4, L"%d", paramIrr.Bits);
    swprintf(fullscreen, L"%d", paramIrr.Fullscreen);
    swprintf(controles, L"%d", controlesFlechas);
    //    swprintf(vsync, 2, L"%d", paramIrr.Vsync);
    //    swprintf(antialias, 2, L"%d", paramIrr.AntiAlias);
    //    swprintf(stencilbuffer, 2, L"%d", paramIrr.Stencilbuffer);
    // define xml writer
    IXMLWriter * xml_write_file = device->getFileSystem()->createXMLWriter(file);

    //must write header of file to xml file
    xml_write_file->writeXMLHeader();
    xml_write_file->writeComment(L"Fichero de configuracion de Starship 1414");
    xml_write_file->writeLineBreak();
    xml_write_file->writeElement(L"config");
    xml_write_file->writeLineBreak();
    //writing maximum 5 elements
    xml_write_file->writeElement(L"settings", false
            , L"width", videowidth
            , L"height", videoheigth
            , L"fullscreen", fullscreen
            , L"controles", controles);
    //            , L"bits", bits_str
    //            , L"driver", L"EDT_OPENGL");
    //must write closing tag
    xml_write_file->writeClosingTag(L"settings");
    xml_write_file->writeLineBreak();

    //writing optionnal parameters
    //    xml_write_file->writeElement(L"options", false
    //            , L"vsync", vsync
    //            , L"antialias", antialias
    //            , L"stencilbuffer", stencilbuffer);
    //    xml_write_file->writeLineBreak();
    //    xml_write_file->writeClosingTag(L"options");
    //    xml_write_file->writeLineBreak();
    //must write closing tag
    xml_write_file->writeClosingTag(L"config");
    // cleanup and write buffer to disk
    xml_write_file->drop();
}

void Configuracion::editar(s32 width, s32 height, bool fullscreen2, const char *file) {

    wchar_t bits_str[32], videoheigth[32], videowidth[32], fullscreen[32],
            controles[32], antialias[32], stencilbuffer[32];


    paramIrr.WindowSize = dimension2d<s32>(width, height);

    paramIrr.Fullscreen = fullscreen2;
    //formats the strings for XMLwriter

    swprintf(videowidth, L"%d", paramIrr.WindowSize.Width);
    swprintf(videoheigth, L"%d", paramIrr.WindowSize.Height);

    //    swprintf(bits_str, 4, L"%d", paramIrr.Bits);
    swprintf(fullscreen, L"%d", paramIrr.Fullscreen);
    swprintf(controles, L"%d", controlesFlechas);
    //    swprintf(vsync, 2, L"%d", paramIrr.Vsync);
    //    swprintf(antialias, 2, L"%d", paramIrr.AntiAlias);
    //    swprintf(stencilbuffer, 2, L"%d", paramIrr.Stencilbuffer);
    // define xml writer
    IXMLWriter * xml_write_file = device->getFileSystem()->createXMLWriter(file);

    //must write header of file to xml file
    xml_write_file->writeXMLHeader();
    xml_write_file->writeComment(L"Fichero de configuracion de Starship 1414");
    xml_write_file->writeLineBreak();
    xml_write_file->writeElement(L"config");
    xml_write_file->writeLineBreak();
    //writing maximum 5 elements
    xml_write_file->writeElement(L"settings", false
            , L"width", videowidth
            , L"height", videoheigth
            , L"fullscreen", fullscreen
            , L"controles", controles);
    //            , L"bits", bits_str
    //            , L"driver", L"EDT_OPENGL");
    //must write closing tag
    xml_write_file->writeClosingTag(L"settings");
    xml_write_file->writeLineBreak();

    //writing optionnal parameters
    //    xml_write_file->writeElement(L"options", false
    //            , L"vsync", vsync
    //            , L"antialias", antialias
    //            , L"stencilbuffer", stencilbuffer);
    //    xml_write_file->writeLineBreak();
    //    xml_write_file->writeClosingTag(L"options");
    //    xml_write_file->writeLineBreak();
    //must write closing tag
    xml_write_file->writeClosingTag(L"config");
    // cleanup and write buffer to disk
    xml_write_file->drop();
}

bool Configuracion::getfullscreen() {

    if (paramIrr.Fullscreen == 1) {
        return true;
    }

    return false;
}

SIrrlichtCreationParameters Configuracion::getParametros() {
    return paramIrr;
}

void Configuracion::setControles(bool x) {
    controlesFlechas = x;
}

bool Configuracion::getControles() {
    return controlesFlechas;
}

//<?xml version="1.0"?>
//<!--This is a config file for arcade nostalgia-->
//<config>
//   <settings width="1024" height="768" bits="32" fullscreen="1" driver="EDT_OPENGL">   </settings>
//   <options vsync="0" antialias="1" stencilbuffer="0">
//   </options>
//</config>