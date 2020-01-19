
#include "NonVip.h"
NonVip::NonVip() {
    this->maxReservations = 2;
}

NonVip::~NonVip() {

}

int NonVip::getMaxReservations() {
    return maxReservations;
}
std::string NonVip::getInfo() {
    return "Klient NonVip";
}