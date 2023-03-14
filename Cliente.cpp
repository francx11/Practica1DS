#include "Cliente.h"
#include <iostream>
#include "Mesa.h"
#include "Silla.h"
using namespace std;

void Cliente::comprar(FactoriaAbstracta factoria,Mesa mesa, Silla silla) {

    menuPrincipal(factoria,mesa,silla);





}

void Cliente::menuPrincipal(FactoriaAbstracta factoria,Mesa mesa,Silla silla) {
    int opcion;

    cout << "\n Bienvenido al menú principal de compra de muebles:"
            "\n Introduzca el número correspondiente a la opción que quiera realizar: "
            "\n 1: Comprar muebles"
            "\n 2: Finalizar compra"<<endl;

    cin >> opcion;

    if(opcion == 1){
        cout << "\n Comprando muebles " << endl;
        menuSecundario(factoria, mesa , silla);

    }else{
        cout << "\n Vuelva pronto" << endl;
    }



}

void Cliente::menuSecundario(FactoriaAbstracta factoria, Mesa mesa, Silla silla) {
    int opcion;
    int numSillasOficina;
    int numSillasCocina;
    int numMesasCocina;
    int numMesasOficina;
    cout << "\n Bienvenido al menu secundario: "
            "\n Introduzca número correspondiente a la opción que quiera realizar: "
            "\n 1: Estilo oficina"
            "\n 2: Estilo cocina"
            "\n 3: Vuelta al menu principal" << endl;


    if(opcion == 1){
        cout << "\n Ha elegido comprar muebles de oficina" << endl;

        cout << "\n Introduzca el número de sillas de oficina que quiera comprar" << endl;

        cin >> numSillasOficina;


        cout << "\n Introduzca el número de mesas de oficina que quiera comprar" << endl;

        cin >> numMesasOficina;

        SillaOficina  molde;
        Mesa forma;


        for(int i= 0; i < numSillasOficina; i++){
         //   molde = factoria.obtenerSilla(silla);
         this->sillas.push_back(factoria.obtenerSilla(silla));


        }

        for(int i= 0; i < numMesasOficina; i++){
            this->mesas.push_back(factoria.obtenerMesa(mesa));
        }




        menuSecundario(factoria,mesa,silla);
    }else if(opcion == 2){
        cout << "\n Ha elegido comprar muebles de cocina" << endl;

        cout << "\n Introduzca el número de sillas de cocina que quiera comprar" << endl;
        cin >> numMesasCocina;

        cout << "\n Introduzca el número de mesas de cocina que quiera comprar" << endl;

        cin >> numMesasCocina;

        for(int i= 0; i < numSillasCocina; i++){
            //   molde = factoria.obtenerSilla(silla);
            this->sillas.push_back(factoria.obtenerSilla(silla));


        }

        for(int i= 0; i < numMesasCocina; i++){
            this->mesas.push_back(factoria.obtenerMesa(mesa));
        }



        menuSecundario(factoria,mesa,silla);

    }else{
        menuPrincipal(factoria,mesa,silla);
    }


}


