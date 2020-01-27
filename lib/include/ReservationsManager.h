//
// Created by student on 26.01.2020.
//

#ifndef VM_RENTING_RESERVATIONSMANAGER_H
#define VM_RENTING_RESERVATIONSMANAGER_H

#include "ReservationsRepository.h"
#include "MachinesManager.h"

class ReservationsManager {
    ReservationsRepository repo;
public:
    void createReservation(Client_ptr client, MachinesManager machineManager);
    void updateReservations(); //checks if reservations has ended
    void listReservations();
    Reservation_ptr getReservation(int i);
};

#endif //VM_RENTING_RESERVATIONSMANAGER_H
