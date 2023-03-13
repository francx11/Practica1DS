//
// Created by francisco on 13/03/23.
//

#include "SillaCocina.h"

SillaCocina::SillaCocina(){
    largo= 0;
    ancho= 0;
    alto= 0;
    material="madera";

}

void SillaCocina::establecerDimensiones(int largo, int ancho, int alto) {
    this->largo= largo;
    this->ancho= ancho;
    this->alto= alto;
}

void SillaCocina::establecerMaterial(string material) {
    this->material= material;
}

Silla *SillaCocina::clone() {
    return new SillaCocina(*this);
}