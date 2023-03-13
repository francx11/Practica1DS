//
// Created by francisco on 7/03/23.
//

#ifndef PRACTICA1DS_FACTORIAABSTRACTA_H
#define PRACTICA1DS_FACTORIAABSTRACTA_H
#include "Mesa.h"
#include <string>
#include "Silla.h"

using namespace std;


class FactoriaAbstracta {
public:
    virtual ~FactoriaAbstracta();
    /*
    virtual void establecerDimensiones(int largo, int ancho, int alto);
    virtual void establecerMaterial(string material);
     */
    virtual Mesa & obtenerMesa(Mesa mesa);
    virtual Silla & obtenerSilla(Silla silla);




};


#endif //PRACTICA1DS_FACTORIAABSTRACTA_H
