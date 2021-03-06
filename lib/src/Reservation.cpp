//
// Created by student on 19.01.2020.
//

#include "Reservation.h"

Reservation::Reservation(Machine_ptr machinePtr, Client_ptr clientPtr) {
    this->UUID = boost::uuids::random_generator()();
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


std::string Reservation::getBegin() {
    return boost::posix_time::to_simple_string(begin);
}

std::string Reservation::getEnd() {
    return boost::posix_time::to_simple_string(end);
}

bool Reservation::getInfo() {
    return machine->getStatus();
}

boost::uuids::uuid Reservation::getUuid() {
    return UUID;
}

bool Reservation::checkIfEnded() {
    if(end<boost::posix_time::second_clock::universal_time()) {
        machine->endRent();
        return true;
    }
    return false;
}

Client_ptr Reservation::getClient() {
    return client;
}

Machine_ptr Reservation::getMachine() {
    return machine;
}
