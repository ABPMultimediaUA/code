/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   readJson.cpp
 * Author: Hector
 * 
 * Created on 30 de noviembre de 2016, 0:21
 */

#include "readJson.h"
#include "../rapidjson/filereadstream.h"
#include "../rapidjson/document.h"
#include <cstdio>

using namespace rapidjson;

readJson::readJson() {
    FILE* fp = fopen("../escena.json", "rb"); // non-Windows use "r"
    char readBuffer[65536];
    FileReadStream is(fp, readBuffer, sizeof(readBuffer));
    Document d;
    d.ParseStream(is);
    fclose(fp);
    assert(d.HasMember("name"));
    assert(d["name"].IsString());
    printf("------------------------------->Primera Etiqueta = %s\n", d["name"].GetString());
}

readJson::readJson(const readJson& orig) {
}

readJson::~readJson() {
}

