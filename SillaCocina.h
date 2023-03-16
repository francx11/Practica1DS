//
// Created by francisco on 13/03/23.
//

#ifndef PRACTICA1DS_SILLACOCINA_H
#define PRACTICA1DS_SILLACOCINA_H
#include "Silla.h"


class SillaCocina : public Silla{
public:
    SillaCocina();
    Silla * clone() ;
    string toString() ;
    SillaCocina(SillaCocina & copy);




};


#endif //PRACTICA1DS_SILLACOCINA_H
