#include "Cliente.h"


using namespace std;

void Cliente::comprar(FactoriaTiendasYMesas factoria) {
    int opcion= 0;
    PrototipoTienda tienda = factoria.crearPrototipoTienda();
	// TODO - implement Cliente::operation
	cout << "Introduzca una opción (1 o 2) "
            "\n 1: Comprar en Tienda 1 (Oficina)"
            "\n 2: Comprar en Tienda 2(Cocina)"
            << endl;
    do {
        cin >> opcion;
    } while (opcion != 1 || opcion != 2);

    switch (opcion) {
        case 1: {
            TiendaOficina oficina = tienda.crearTiendaOficina();

            break;
        }
        case 2: {
            TiendaCocina cocina = tienda.crearTiendaCocina();
            break;
        }
        
    }

}

void Cliente::setNumMesas(int numMesas) {
    if(numMesas < 100)
    numMesas++;
}
