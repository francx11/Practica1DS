#include "MesaCocina.h"

Mesa *MesaCocina::clone() {
    return new MesaCocina(*this);
}

string MesaCocina::toString() {
    return "Cocina";
}

MesaCocina::MesaCocina() {

}

MesaCocina::MesaCocina(MesaCocina &copia) {
    *this= copia;
}