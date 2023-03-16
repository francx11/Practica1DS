#include "Cliente.h"
#include "Mesa.h"
#include "Silla.h"
#include <iostream>

using namespace std;

void Cliente::comprar(FactoriaAbstracta * factoria,Mesa * mesa, Silla * silla) {

    for (int i = 0; i < 5; i++)
    {
       mesas.push_back(factoria->obtenerMesa(mesa));
       sillas.push_back(factoria->obtenerSilla(silla));
    }

    for (int i = 0; i < 5; i++)
    {
        cout << sillas.at(i)->toString() << endl;
        cout << mesas.at(i)->toString()<< endl;
    }

    return;
    //menuPrincipal(factoria,mesa,silla);

}





