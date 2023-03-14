//
// Created by francisco on 13/03/23.
//

#ifndef PRACTICA1DS_SILLACOCINA_H
#define PRACTICA1DS_SILLACOCINA_H
#include "Silla.h"


class SillaCocina : Silla{
public:
    SillaCocina();
    virtual Silla * clone();
    virtual string toString();




};


#endif //PRACTICA1DS_SILLACOCINA_H
