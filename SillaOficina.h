//
// Created by francisco on 13/03/23.
//

#ifndef PRACTICA1DS_SILLAOFICINA_H
#define PRACTICA1DS_SILLAOFICINA_H
#include "Silla.h"


class SillaOficina : Silla{


public:
    SillaOficina();
    virtual Silla * clone();
    virtual string toString();



};


#endif //PRACTICA1DS_SILLAOFICINA_H
