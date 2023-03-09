#ifndef CLIENTE_H
#define CLIENTE_H
#include <iostream>
#include "PrototipoMesa.h"
#include "FactoriaMesas.h"
#include "MesaCocina.h"
#include "MesaOficina.h"
#include <vector>

class Cliente {
private :
    vector<FactoriaMesas> mesas;


public:

	void comprar(FactoriaMesas factoria);


};

#endif
