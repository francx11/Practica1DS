#ifndef CLIENTE_H
#define CLIENTE_H
#include <iostream>
#include "PrototipoMesa.h"
#include "PrototipoTienda.h"
#include "FactoriaTiendasYMesas.h"

class Cliente {
private :
    int numMesas;


public:
    Cliente(){
        numMesas= 0;
    }

	void comprar(FactoriaTiendasYMesas factoria);

    int getnumMesas();
    void setNumMesas(int numMesas);

};

#endif
