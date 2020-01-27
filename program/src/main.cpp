#include "ReservationsManager.h"
#include "ClientsManager.h"
#include "MachinesManager.h"
#include "Client.h"
#include "Machine.h"
#include "Reservation.h"
#include <iostream>

using namespace std;

int main() {
    ClientsManager clients;
    clients.createClient("Milosz Wojcik", "Aleja Politechniki 9B", "1998/02/15", true);
    clients.createClient("Adam Malysz", "Wroblewskiego 97C", "1978/03/12", false);
    MachinesManager machines;

    machines.createMachine("12.32" , "1.002", "Fedora");
    machines.createMachine("12.33" , "1.003", "Fedora X");
    machines.createMachine("12.34" , "1.004", "Fedora XS");
    machines.createMachine("12.35" , "1.005", "Fedora XL");

    ReservationsManager reservations;
    reservations.createReservation(clients.getClient(0), machines);
    reservations.createReservation(clients.getClient(1), machines);





    return 0;
}