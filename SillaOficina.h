//
// Created by francisco on 13/03/23.
//

#ifndef PRACTICA1DS_SILLAOFICINA_H
#define PRACTICA1DS_SILLAOFICINA_H
#include "Silla.h"


class SillaOficina : Silla{
private:
    int alto;
    int ancho;
    int largo;
    string material;

public:
    SillaOficina();
    virtual Silla * clone();
    void establecerDimensiones(int largo, int ancho, int alto);
    void establecerMaterial(string material);



};


#endif //PRACTICA1DS_SILLAOFICINA_H
