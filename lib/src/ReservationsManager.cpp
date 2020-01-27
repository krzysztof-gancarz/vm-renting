
#include "ReservationsManager.h"



void ReservationsManager::createReservation(Client_ptr client, MachinesManager machineManager) {
    updateReservations();
    Machine_ptr machine = machineManager.getFreeMachine();
    Reservation_ptr newReservation(new Reservation(machine, client));
    repo.add(newReservation);
}

void ReservationsManager::listReservations() {

}

void ReservationsManager::updateReservations() {
    for(int i=0;i<repo.size();i++) {
        if(repo.getByIndex(i)->getInfo()) {
            repo.getByIndex(i)->checkIfEnded();
        }
    }
}

Reservation_ptr ReservationsManager::getReservation(int i) {
    return repo.getByIndex(i);
}

