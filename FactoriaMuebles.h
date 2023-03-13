//
// Created by francisco on 9/03/23.
//

#ifndef PRACTICA1DS_FACTORIAMUEBLES_H
#define PRACTICA1DS_FACTORIAMUEBLES_H
#include "Mesa.h"
#include "Silla.h"
#include "FactoriaAbstracta.h"


class FactoriaMuebles : public FactoriaAbstracta{
public:
    virtual ~FactoriaMuebles();
    virtual Mesa & obtenerMesa(Mesa mesa);
    virtual Silla & obtenerSilla(Silla silla);


};


#endif //PRACTICA1DS_FACTORIAMUEBLES_H
