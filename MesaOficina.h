#ifndef MESAOFICINA_H
#define MESAOFICINA_H
#include "Mesa.h"

class MesaOficina : public Mesa {

public:
    MesaOficina();
	Mesa * clone() ;
    string toString() ;
    MesaOficina(MesaOficina & copy);
};

#endif
