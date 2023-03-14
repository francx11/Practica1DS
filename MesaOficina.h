#ifndef MESAOFICINA_H
#define MESAOFICINA_H
#include "Mesa.h"

class MesaOficina : Mesa {


public:
    MesaOficina();
	virtual Mesa * clone();
    virtual string toString();



};

#endif
