#ifndef CLIENTE_H
#define CLIENTE_H
#include <iostream>
#include "Mesa.h"
#include "FactoriaAbstracta.h"
#include "MesaCocina.h"
#include "MesaOficina.h"
#include "SillaCocina.h"
#include "SillaOficina.h"
#include <vector>

class Cliente {
private :
    vector<Mesa> mesas;
    vector<Silla> sillas;


public:

	void comprar(FactoriaAbstracta factoria,Mesa mesa,Silla silla);
    void menuPrincipal(FactoriaAbstracta factoria,Mesa mesa, Silla silla);
    void menuSecundario(FactoriaAbstracta factoria,Mesa mesa,Silla silla);


};

#endif
