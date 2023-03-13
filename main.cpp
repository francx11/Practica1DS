#include <iostream>
#include "Cliente.h"
#include "FactoriaAbstracta.h"

using namespace std;

int main() {
    Cliente cliente;
    FactoriaMuebles factoria;
    Mesa mesa;
    Silla silla;

    cliente.comprar(factoria,mesa,silla);






    return 0;
}
