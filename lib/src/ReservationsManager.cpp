
#include "ReservationsManager.h"



void ReservationsManager::createReservation(Client_ptr client, MachinesManager machineManager) {
    updateReservations();
    Machine_ptr machine = machineManager.getFreeMachine();
    Reservation reserv(machine, client);
    Reservation_ptr newReservation(&reserv);
    repo.add(newReservation);
}

void ReservationsManager::listReservations() {

}

void ReservationsManager::updateReservations() {
    for(int i=0;i<repo.size();) {
        if(repo.getByIndex(i)->getInfo()) {
            repo.getByIndex(i)->checkIfEnded();
        }
    }
}

