//
// Created by francisco on 13/03/23.
//

#include "SillaOficina.h"


Silla *SillaOficina::clone() {
    return new SillaOficina(*this);
}

string Silla::toString() {
    return "Oficina";
}