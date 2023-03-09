#ifndef PROTOTIPOMESA_H
#define PROTOTIPOMESA_H

#include "FactoriaMesas.h"

class PrototipoMesa {


public:
	virtual FactoriaMesas * clone();
    virtual ~PrototipoMesa();
};

#endif
