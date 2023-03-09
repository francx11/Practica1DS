//
// Created by francisco on 7/03/23.
//

#ifndef PRACTICA1DS_FACTORIAMESAS_H
#define PRACTICA1DS_FACTORIAMESAS_H
#include "PrototipoMesa.h"
#include <string>

using namespace std;


class FactoriaMesas {
public:
    virtual ~FactoriaMesas();
    virtual void establecerDimensiones(int largo, int ancho, int alto);
    virtual void establecerMaterial(string material);



};


#endif //PRACTICA1DS_FACTORIAMESAS_H
