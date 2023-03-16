#include <iostream>
#include "Cliente.h"
#include "FactoriaMuebles.h"
#include "MesaOficina.h"
#include "SillaOficina.h"
#include "SillaCocina.h"
#include "MesaCocina.h"

using namespace std;

int main() {
    Cliente cliente;
    FactoriaAbstracta * factoria = new FactoriaMuebles;

    Mesa * mesa = new MesaOficina();
    Silla * silla = new  SillaOficina();


    cout << "Bienvenido a la tienda de muebles Parasol" << endl;

    int opcion;



    cliente.comprar(factoria,mesa,silla);

    return 0;
}
