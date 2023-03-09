#ifndef MESACOCINA_H
#define MESACOCINA_H
#include "PrototipoMesa.h"

class MesaCocina : PrototipoMesa {
private:
    int alto;
    int ancho;
    int largo;
    string material;


public:
    MesaCocina();
    virtual FactoriaMesas* clone();
    void establecerDimensiones(int largo, int ancho, int alto);
    void establecerMaterial(string material);


};

#endif
