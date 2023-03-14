//
// Created by francisco on 13/03/23.
//

#include "SillaCocina.h"


Silla *SillaCocina::clone() {
    return new SillaCocina(*this);
}

string SillaCocina::toString() {
    return "Cocina";

}