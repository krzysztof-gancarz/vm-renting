//
// Created by student on 19.01.2020.
//

#include "ReservationsRepository.h"
#include "Reservation.h"
#include "Exception.h"

ReservationsRepository::ReservationsRepository() {

}

void ReservationsRepository::add(Reservation_ptr reservation) {
    items.push_back(reservation);
}

Reservation_ptr ReservationsRepository::getById(boost::uuids::uuid UUID) {
    for (int i = 0; i < items.size(); i++) {
        if (items[i]->getUuid() == UUID) {
            return items[i];
        }
        else {
            throw ParameterException("Brak takiego ID ");
        }
    }
    return nullptr;
}
int ReservationsRepository::getIndexById(boost::uuids::uuid UUID) {
    for (int i = 0; i < items.size(); i++) {
        if (items[i]->getUuid() == UUID) {
            return i;
        }
        else {
            throw ParameterException("Brak pasujacego indeksu ");
        }
    }
    return -1;
}

void ReservationsRepository::remove(int i) {
    items.erase(items.begin()+i);
}