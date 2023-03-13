#ifndef MESAOFICINA_H
#define MESAOFICINA_H
#include "Mesa.h"

class MesaOficina : Mesa {
private:
    int alto;
    int ancho;
    int largo;
    string material;


public:
    MesaOficina();
	virtual Mesa * clone();
    void establecerDimensiones(int largo, int ancho, int alto);
    void establecerMaterial(string material);


};

#endif
