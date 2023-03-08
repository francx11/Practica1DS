#ifndef PROTOTIPOTIENDA_H
#define PROTOTIPOTIENDA_H
#include "TiendaCocina.h"
#include "TiendaOficina.h"

class PrototipoTienda {


public:
	void Clone();
    TiendaCocina crearTiendaCocina();
    TiendaOficina crearTiendaOficina();

};

#endif
