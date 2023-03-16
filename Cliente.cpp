#include "Cliente.h"
#include "Mesa.h"
#include "Silla.h"
#include <iostream>

using namespace std;

void Cliente::comprar(FactoriaAbstracta * factoria,Mesa * mesa, Silla * silla,int numMesas, int numSillas ) {

    for (int i = 0; i < numMesas; i++)
    {
       mesas.push_back(factoria->obtenerMesa(mesa));

    }

    cout << "\n Ha comprado: " << numMesas << " mesas de " << mesas.at(0)->toString() << endl;

    for (int i = 0; i < numSillas ; ++i) {
        sillas.push_back(factoria->obtenerSilla(silla));

    }

    cout << "\n Ha comprado: " << numSillas << " sillas de " << sillas.at(0)->toString() << endl;


}





