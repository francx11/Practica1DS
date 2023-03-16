//
// Created by francisco on 13/03/23.
//

#ifndef PRACTICA1DS_SILLAOFICINA_H
#define PRACTICA1DS_SILLAOFICINA_H
#include "Silla.h"


class SillaOficina : public Silla{


public:
    SillaOficina();
    Silla * clone() ;
    string toString();
    SillaOficina(SillaOficina & copy);



};


#endif //PRACTICA1DS_SILLAOFICINA_H
