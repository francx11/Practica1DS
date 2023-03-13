//
// Created by francisco on 9/03/23.
//

#include "FactoriaMuebles.h"


Mesa & FactoriaMuebles::obtenerMesa(Mesa mesa) {
    return *(mesa.clone());
}

Silla & FactoriaMuebles::obtenerSilla(Silla silla) {
    return *(silla.clone());
}