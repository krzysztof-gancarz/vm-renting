
#include "Vip.h"

Vip::Vip() {
    this->maxReservations = 4;
}

Vip::~Vip() {

}

int Vip::getMaxReservations() {
    return maxReservations;
}

std::string Vip::getInfo() {
    return "Klient Vip";
}