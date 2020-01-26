//
// Created by student on 26.01.2020.
//

#ifndef VM_RENTING_RESERVATIONSMANAGER_H
#define VM_RENTING_RESERVATIONSMANAGER_H

class ReservationsManager {
    
public:
    ReservationsManager();
    void createReservation();
    void updateReservations(); //checks if reservations has ended
    void listReservations();
};

#endif //VM_RENTING_RESERVATIONSMANAGER_H
