#include "MesaOficina.h"



Mesa *MesaOficina::clone(){
    return new MesaOficina(*this);
}

string MesaOficina::toString() {
    return "Oficina";
}
 MesaOficina::MesaOficina() {

}

MesaOficina::MesaOficina(MesaOficina &copy) {
    *this= copy;
}




