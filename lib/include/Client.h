#ifndef VM_RENTING_CLIENT_H
#define VM_RENTING_CLIENT_H

#include <iostream>
#include <memory>
#include "ClientType.h"
#include "Reservation.h"
#include <boost/uuid/uuid.hpp>
#include <boost/date_time.hpp>
class Reservation;
typedef std::shared_ptr <Reservation> Reservation_ptr;

class Client{
    std::string name;
    std::string address;
    Type_ptr clientType;
    boost::uuids::uuid UUID;
    boost::gregorian::date birthDate;
    std::vector<Reservation_ptr> reservations;
public:
    Client(std::string name, std::string address, std::string birth, bool isVip);


    Type_ptr setClientType(bool isVip);


    std::vector<Reservation_ptr> getReservations();
    void addReservation(Reservation_ptr reservation);

    std::string getName();
    std::string getAddress();
    std::string clientInfo();
    boost::gregorian::greg_year_month_day getBirthDate();

    boost::uuids::uuid getUuid();

    const Type_ptr getClientType() const;
};
typedef std::shared_ptr <Client> Client_ptr;


#endif