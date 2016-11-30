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
#include "../rapidjson/pointer.h"
#include "../rapidjson/istreamwrapper.h"
#include <fstream>
#include <cstdio>

using namespace rapidjson;


readJson::readJson() {
   /* FILE* fp = fopen("../escena.json", "rb"); // non-Windows use "r"
    char readBuffer[65536];
    FileReadStream is(fp, readBuffer, sizeof(readBuffer));*/
    std::ifstream ifs("../escena.json");
    IStreamWrapper is(ifs);
    Document d;
    d.ParseStream(is);
   // fclose(fp);
    assert(d.HasMember("name"));
    assert(d["name"].IsString());
    printf("------------------------------->Primera Etiqueta = %s\n", d["name"].GetString());
    
    //printf("------------------------------->Primera Etiqueta = %s\n", d.MemberBegin()->value.GetString());


    for (Value::ConstMemberIterator itr = d.MemberBegin(); itr != d.MemberEnd(); ++itr)
    {
        
        //printf("Type of member %s is %s\n", itr->name.IsString(), itr->value.IsString());
        printf("CACA\n");
    }


}

readJson::readJson(const readJson& orig) {
}

readJson::~readJson() {
}

