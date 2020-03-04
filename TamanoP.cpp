

#include "TamanoP.h"

TamanoP::TamanoP(std::string _msg, float _radioAc): _msg(_msg), _radioActual(_radioAc) {

}

TamanoP::~TamanoP() {
}

std::string TamanoP::getError() {
    return _msg;
}



