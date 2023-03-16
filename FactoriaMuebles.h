//
// Created by francisco on 9/03/23.
//

#ifndef PRACTICA1DS_FACTORIAMUEBLES_H
#define PRACTICA1DS_FACTORIAMUEBLES_H
#include "FactoriaAbstracta.h"


class FactoriaMuebles : public FactoriaAbstracta {
public:
    Mesa * obtenerMesa(Mesa * mesa) ;
    Silla * obtenerSilla(Silla * silla) ;
};


#endif //PRACTICA1DS_FACTORIAMUEBLES_H
