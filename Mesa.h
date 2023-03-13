#ifndef PROTOTIPOMESA_H
#define PROTOTIPOMESA_H

#include "FactoriaMuebles.h"
#include <string>

using namespace std;

class Mesa {
private:
    int alto;
    int ancho;
    int largo;
    string material;



public:
	virtual Mesa * clone();
    virtual ~Mesa();
    void establecerDimensiones(int largo, int ancho, int alto);
    void establecerMaterial(string material);
};

#endif
