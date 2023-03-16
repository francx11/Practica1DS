//
// Created by francisco on 7/03/23.
//

#ifndef PRACTICA1DS_FACTORIAABSTRACTA_H
#define PRACTICA1DS_FACTORIAABSTRACTA_H
#include <string>

#include "Mesa.h"
#include "Silla.h"

using namespace std;

class FactoriaAbstracta {
public:

     virtual Mesa * obtenerMesa(Mesa * mesa)= 0;
     virtual Silla * obtenerSilla(Silla * silla)= 0 ;
};


#endif //PRACTICA1DS_FACTORIAABSTRACTA_H
