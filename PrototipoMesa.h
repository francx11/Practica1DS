#ifndef PROTOTIPOMESA_H
#define PROTOTIPOMESA_H

#include "FactoriaMesas.h"

class PrototipoMesa : FactoriaMesas {


public:
	virtual PrototipoMesa * clone();
    virtual ~PrototipoMesa();
};

#endif
