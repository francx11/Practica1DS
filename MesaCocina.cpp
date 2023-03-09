#include "MesaCocina.h"

MesaCocina::MesaCocina(){
    largo= 0;
    ancho= 0;
    alto= 0;
    material="madera";

}

void MesaCocina::establecerDimensiones(int largo, int ancho, int alto) {
    this->largo= largo;
    this->ancho= ancho;
    this->alto= alto;
}

void MesaCocina::establecerMaterial(string material) {
    this->material= material;
}
PrototipoMesa *MesaCocina::clone() {
    return new MesaCocina(*this);
}