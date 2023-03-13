#include "MesaOficina.h"


MesaOficina::MesaOficina(){
    largo= 0;
    ancho= 0;
    alto= 0;
    material="madera";

}

void MesaOficina::establecerDimensiones(int largo, int ancho, int alto) {
    this->largo= largo;
    this->ancho= ancho;
    this->alto= alto;
}

void MesaOficina::establecerMaterial(string material) {
    this->material= material;
}

Mesa *MesaOficina::clone() {
    return new MesaOficina(*this);
}




