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
#include <string>

using namespace rapidjson;
using namespace std;


readJson::readJson() {
    
    leerArchivo("../escena.json");
    crearPared();
    /*   
    assert(d.HasMember("name"));
    assert(d["name"].IsString());
    printf("------------------------------->Primera Etiqueta = %s\n", d["name"].GetString());
    const Value& a = d["hierarchy"];
    assert(a.IsArray());
    
    for (SizeType i = 0; i < a.Size(); i++) 
    {
        if(a[i].HasMember("name"))
        {
            printf("------------------------------------>Etiqueta = %s\n", a[i]["name"].GetString());
            if(a[i]["name"]=="Paredes")
            {
                printf("---------------------------------------------->Entra a Paredes\n");
                
               const Value& b = a[i]["components"];
               assert(b.IsArray());
               
                for (SizeType j = 0; j < b.Size(); j++) 
                {         
                        if(b[j].HasMember("localPosition"))
                        {
                              const Value& c = b[j]["localPosition"];
                              assert(c.IsArray());
                              printf("------------------------------------------------->localPosition: x=%g, y=%g, z=%g\n", c[0].GetDouble(), c[1].GetDouble(),c[2].GetDouble());
                              
                              
                
                        }
                        if(b[j].HasMember("localRotation"))
                        {
                             const Value& c = b[j]["localRotation"];
                              assert(c.IsArray());
                                 printf("------------------------------------------------->localRotation: x=%g, y=%g, z=%g t=%g\n", c[0].GetDouble(), c[1].GetDouble(),c[2].GetDouble(),c[3].GetDouble());
                              
                        }
                        if(b[j].HasMember("localScale"))
                        {
                             const Value& c = b[j]["localScale"];
                              assert(c.IsArray());
                                  printf("------------------------------------------------->localScale: x=%g, y=%g, z=%g\n", c[0].GetDouble(), c[1].GetDouble(),c[2].GetDouble());
                              
                        }
                    
                }
               
                 
               const Value& d = a[i]["children"];
               assert(d.IsArray());
               printf("---------------------------------------------->Entra a Paredes->Children\n");
                 
                for (SizeType t = 0; t < d.Size(); t++) 
                {         
                      printf("------------------------------------------------------->Entra a Paredes->%s\n",d[t]["name"].GetString());
                      const Value& e = d[t]["components"];
                       for (SizeType r = 0; r < e.Size(); r++) 
                       {
                            if(e[r].HasMember("localPosition"))
                            {
                                  const Value& c = e[r]["localPosition"];
                                  assert(c.IsArray());
                                  printf("---------------------------------------------------------------------->localPosition: x=%g, y=%g, z=%g\n", c[0].GetDouble(), c[1].GetDouble(),c[2].GetDouble());



                            }
                            if(e[r].HasMember("localRotation"))
                            {
                                 const Value& c = e[r]["localRotation"];
                                  assert(c.IsArray());
                                     printf("---------------------------------------------------------------------->localRotation: x=%g, y=%g, z=%g t=%g\n", c[0].GetDouble(), c[1].GetDouble(),c[2].GetDouble(),c[3].GetDouble());

                            }
                            if(e[r].HasMember("localScale"))
                            {
                                 const Value& c = e[r]["localScale"];
                                  assert(c.IsArray());
                                      printf("---------------------------------------------------------------------->localScale: x=%g, y=%g, z=%g\n", c[0].GetDouble(), c[1].GetDouble(),c[2].GetDouble());

                            }
                          
                       }
                }
            }
        }
    }
   /* assert(a[0].HasMember("name"));
      printf("------------------------------->Primera Etiqueta = %s\n", a[0]["name"].GetString());*/
}
readJson::readJson(const readJson& orig) {
}

readJson::~readJson() {
}

void readJson::leerArchivo(const char* rutaArchivo)
{
    FILE* fp = fopen(rutaArchivo, "rb"); // non-Windows use "r"
    char readBuffer[65536];
    FileReadStream is(fp, readBuffer, sizeof(readBuffer));
    d.ParseStream(is);
    fclose(fp);
}

void readJson::crearPared()
{
      assert(d.HasMember("name"));
    assert(d["name"].IsString());
    printf("------------------------------->Primera Etiqueta = %s\n", d["name"].GetString());
    const Value& a = d["hierarchy"];
    assert(a.IsArray());
    
    for (SizeType i = 0; i < a.Size(); i++) 
    {
        if(a[i].HasMember("name"))
        {
            printf("------------------------------------>Etiqueta = %s\n", a[i]["name"].GetString());
            if(a[i]["name"]=="Paredes")
            {
                printf("---------------------------------------------->Entra a Paredes\n");
                
               const Value& b = a[i]["components"];
               assert(b.IsArray());
               
                for (SizeType j = 0; j < b.Size(); j++) 
                {         
                        if(b[j].HasMember("localPosition"))
                        {
                              const Value& c = b[j]["localPosition"];
                              assert(c.IsArray());
                              printf("------------------------------------------------->localPosition: x=%g, y=%g, z=%g\n", c[0].GetDouble(), c[1].GetDouble(),c[2].GetDouble());

                        }
                        if(b[j].HasMember("localRotation"))
                        {
                             const Value& c = b[j]["localRotation"];
                              assert(c.IsArray());
                                 printf("------------------------------------------------->localRotation: x=%g, y=%g, z=%g t=%g\n", c[0].GetDouble(), c[1].GetDouble(),c[2].GetDouble(),c[3].GetDouble());
                              
                        }
                        if(b[j].HasMember("localScale"))
                        {
                             const Value& c = b[j]["localScale"];
                              assert(c.IsArray());
                                  printf("------------------------------------------------->localScale: x=%g, y=%g, z=%g\n", c[0].GetDouble(), c[1].GetDouble(),c[2].GetDouble());
                              
                        }
                    
                }
               
                 
               const Value& d = a[i]["children"];
               assert(d.IsArray());
               printf("---------------------------------------------->Entra a Paredes->Children\n");
                 
                for (SizeType t = 0; t < d.Size(); t++) 
                {         
                      printf("------------------------------------------------------->Entra a Paredes->%s\n",d[t]["name"].GetString());
                      const Value& e = d[t]["components"];
                       for (SizeType r = 0; r < e.Size(); r++) 
                       {
                            if(e[r].HasMember("localPosition"))
                            {
                                  const Value& c = e[r]["localPosition"];
                                  assert(c.IsArray());
                                  printf("---------------------------------------------------------------------->localPosition: x=%g, y=%g, z=%g\n", c[0].GetDouble(), c[1].GetDouble(),c[2].GetDouble());



                            }
                            if(e[r].HasMember("localRotation"))
                            {
                                 const Value& c = e[r]["localRotation"];
                                  assert(c.IsArray());
                                     printf("---------------------------------------------------------------------->localRotation: x=%g, y=%g, z=%g t=%g\n", c[0].GetDouble(), c[1].GetDouble(),c[2].GetDouble(),c[3].GetDouble());

                            }
                            if(e[r].HasMember("localScale"))
                            {
                                 const Value& c = e[r]["localScale"];
                                  assert(c.IsArray());
                                      printf("---------------------------------------------------------------------->localScale: x=%g, y=%g, z=%g\n", c[0].GetDouble(), c[1].GetDouble(),c[2].GetDouble());

                            }
                          
                       }
                }
            }
        }
    }
}