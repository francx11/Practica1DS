//
// Created by francisco on 9/03/23.
//

#ifndef PRACTICA1DS_SILLA_H
#define PRACTICA1DS_SILLA_H

#include "FactoriaMuebles.h"
#include <string>

using namespace std;


class Silla {
public:
    virtual ~Silla();
    virtual Silla * clone();
    virtual string toString();


};


#endif //PRACTICA1DS_SILLA_H
