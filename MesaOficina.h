#ifndef MESAOFICINA_H
#define MESAOFICINA_H
#include "PrototipoMesa.h"

class MesaOficina : PrototipoMesa {
private:
    int alto;
    int ancho;
    int largo;
    string material;


public:
    MesaOficina();
	virtual PrototipoMesa * clone();
    void establecerDimensiones(int largo, int ancho, int alto);
    void establecerMaterial(string material);


};

#endif
