#ifndef MESACOCINA_H
#define MESACOCINA_H
#include "Mesa.h"


class MesaCocina : Mesa {


public:
    MesaCocina();
    virtual Mesa * clone();
    virtual string toString();



};

#endif
