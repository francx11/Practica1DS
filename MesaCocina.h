#ifndef MESACOCINA_H
#define MESACOCINA_H
#include "Mesa.h"


class MesaCocina : public Mesa {
public:
    MesaCocina();
    Mesa * clone() ;
    string toString() ;
    MesaCocina(MesaCocina & copia);



};

#endif
