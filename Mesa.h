#ifndef PRACTICA1DS_MESA_H
#define PRACTICA1DS_MESA_H


#include <string>

using namespace std;

class Mesa
{

public:
     virtual Mesa * clone() = 0;
     virtual string toString() = 0;
};

#endif
