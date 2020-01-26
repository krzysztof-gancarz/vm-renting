
#ifndef VM_RENTING_RESERVATION_H
#define VM_RENTING_RESERVATION_H

#include <boost/uuid/uuid.hpp>
#include <boost/uuid/random_generator.hpp>
#include <boost/date_time.hpp>
#include "Machine.h"
#include "Client.h"
class Client;
typedef std::shared_ptr <Client> Client_ptr;


class Reservation {
    boost::uuids::uuid ID;
    boost::posix_time::ptime begin;
    boost::posix_time::ptime end;
    Client_ptr client;
    Machine_ptr machine;
public:
    Reservation(Machine_ptr machinePtr, Client_ptr clientPtr);
    void endReservation();
    bool getInfo();
    std::string getBegin();
    std::string getEnd();


};
typedef std::shared_ptr <Reservation> Reservation_ptr;

#endif //VM_RENTING_RESERVATION_H
