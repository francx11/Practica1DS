#include <iostream>
#include "Cliente.h"
#include "FactoriaMuebles.h"
#include "MesaOficina.h"
#include "SillaOficina.h"
#include "SillaCocina.h"
#include "MesaCocina.h"

using namespace std;


int menu_principal(){



    cout << "\n Bienvenido a la tienda de muebles Parasol"
            "\n Vendemos mesas y sillas de oficina y cocina" << endl;

    cout << "\n Elija qué tipo de mueble quiere comprar : " << endl;
    cout << "\n 1: De oficina" << endl;
    cout << "\n 2: De cocina" << endl;
    cout << "\n 3: Finalizar compra" << endl;


    int opcion1;

    cin >> opcion1;

    return opcion1;


}

int main() {
    Cliente cliente;
    FactoriaAbstracta * factoria = new FactoriaMuebles;
    int numSillas, numMesas;


    int opcion1= menu_principal();




    while(opcion1 != 3) {

        if (opcion1 == 1) {
            cout << "\n Introduzca el número de mesas que quiere comprar: " << endl;
            cin >> numMesas;

            cout << "\n Introduzca el número de sillas que quiere comprar: " << endl;
            cin >> numSillas;

            Mesa *mesa1 = new MesaOficina();
            Silla *silla1 = new SillaOficina();


            cliente.comprar(factoria, mesa1, silla1, numMesas, numSillas);

            opcion1= menu_principal();

        } else if (opcion1 == 2) {
            cout << "\n Introduzca el número de mesas que quiere comprar: " << endl;
            cin >> numMesas;

            cout << "\n Introduzca el número de sillas que quiere comprar: " << endl;
            cin >> numSillas;

            Mesa *mesa2 = new MesaCocina();
            Silla *silla2 = new SillaOficina();


            cliente.comprar(factoria, mesa2, silla2, numSillas, numMesas);

            opcion1= menu_principal();


        }else{
            opcion1= menu_principal();
            return 0;
        }


    }

return 0;
    }















