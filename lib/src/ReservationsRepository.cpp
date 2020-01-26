//
// Created by student on 19.01.2020.
//

#include "../include/ReservationsRepository.h"
#include <Reservation.h>

void ReservationsRepository::add(Reservation_ptr reservation, std::vector <Reservation_ptr> reservations) {
    reservation.push_back(reservation);
}

void ReservationsRepository::remove(Reservation_ptr reservation, std::vector <Reservation_ptr> reservations) {
    for(int i=0; i<reservation.size(); i++){
        if(reservations[i]==reservation){
            reservations.erase(reservations.begin()+i);
        }
    }
}