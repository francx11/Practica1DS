#include "MesaOficina.h"


    public mesaOficina(){

    }

    MesaOficina* mesaOficina::Clone() { //Hay que crear constructor para que funcione este metodo
        return new mesaOficina(this);
    }
};


