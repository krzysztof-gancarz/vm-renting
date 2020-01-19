//
// Created by student on 19.01.2020.
//

#include "Reservation.h"

Reservation::Reservation(Machine_ptr machinePtr, Client_ptr clientPtr) {
    this->ID = boost::uuids::random_generator()();
    this->client = clientPtr;
    this->machine = machinePtr;
    machine->startRent();
    this->begin = boost::posix_time::second_clock::universal_time();
    this->end = begin + boost::posix_time::hours(5);
}
void Reservation::endReservation() {
    end = boost::posix_time::second_clock::universal_time();
    machine->endRent();
}