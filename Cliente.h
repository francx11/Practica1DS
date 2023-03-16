#ifndef CLIENTE_H
#define CLIENTE_H
#include <iostream>
#include "FactoriaAbstracta.h"
#include <vector>

class Mesa;

using namespace std;

class Cliente {
private :
    vector<Mesa* > mesas;
    vector<Silla* > sillas;


public:

	void comprar(FactoriaAbstracta * factoria,Mesa * mesa,Silla * silla);


};

#endif
