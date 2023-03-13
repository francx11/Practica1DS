#ifndef MESACOCINA_H
#define MESACOCINA_H
#include "Mesa.h"


class MesaCocina : Mesa {
private:
    int alto;
    int ancho;
    int largo;
    string material;


public:
    MesaCocina();
    virtual Mesa * clone();
    void establecerDimensiones(int largo, int ancho, int alto);
    void establecerMaterial(string material);


};

#endif
