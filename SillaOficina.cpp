//
// Created by francisco on 13/03/23.
//

#include "SillaOficina.h"

SillaOficina::SillaOficina(){
    largo= 0;
    ancho= 0;
    alto= 0;
    material="madera";

}

void SillaOficina::establecerDimensiones(int largo, int ancho, int alto) {
    this->largo= largo;
    this->ancho= ancho;
    this->alto= alto;
}

void SillaOficina::establecerMaterial(string material) {
    this->material= material;
}

Silla *SillaOficina::clone() {
    return new SillaOficina(*this);
}