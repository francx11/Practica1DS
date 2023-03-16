//
// Created by francisco on 9/03/23.
//

#ifndef PRACTICA1DS_SILLA_H
#define PRACTICA1DS_SILLA_H


#include <string>

using namespace std;

class Silla {
public:
    virtual Silla * clone() = 0;
    virtual string toString() = 0;
};


#endif //PRACTICA1DS_SILLA_H
