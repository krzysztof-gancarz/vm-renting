#ifndef VM_RENTING_CLIENT_H
#define VM_RENTING_CLIENT_H

#include <iostream>
#include <memory>
#include "ClientType.h"
#include "Reservation.h"
#include <boost/uuid/uuid.hpp>
#include <boost/date_time.hpp>


class Client{
    std::string name;
    std::string address;
    Type_ptr clientType;
    boost::uuids::uuid UUID;
    boost::gregorian::date birthDate;
    std::vector<Reservation*> reservations;
public:
    Client(std::string name, std::string address, std::string birth, bool isVip);


    Type_ptr setClientType(bool isVip);
    std::string clientInfo();

    std::vector<Reservation*> getReservations();
    void addReservation(Reservation* reservation);

    std::string getName();
    std::string getAddress();
    boost::gregorian::greg_year_month_day getBirthDate();

    boost::uuids::uuid getID();

    const Type_ptr getClientType() const;
};
typedef std::shared_ptr  <Client> Client_ptr;

#endif