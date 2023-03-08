#include "MesaCocina.h"

public MesaCocina(&this){
    return this;
}

MesaCocina* mesaCocina::Clone() { //Hay que crear constructor para que funcione este metodo
    return new MesaCocina(this);
}
