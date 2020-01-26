
#include <iostream>
#include <sstream>
#include <Vip.h>
#include <NonVip.h>
#include "Client.h"
#include "Exception.h"
#include <boost/uuid/random_generator.hpp>

using namespace std;

Client::Client(std::string name, std::string address, std::string birth, bool isVip) {


    if(name=="") throw ParameterException("Brak nazwy klienta [REQUIRED].");
    if(address=="") throw ParameterException("Brak adresu klienta [REQUIRED].");
    if(birth=="") throw ParameterException("Brak daty urodzenia klienta [REQUIRED].");

    this->name = name;
    this->address = address;
    this->UUID = boost::uuids::random_generator()();
    clientType = setClientType(isVip);
    birthDate = boost::gregorian::date(boost::gregorian::from_string(birth));
}

string Client::clientInfo() {
    stringstream napis;
    napis << name << " " << address << " " <<"\n";

    return napis.str();
}
Type_ptr Client::setClientType(bool isVip) {
    if(isVip) {
        return Type_ptr(new Vip());
    }
    else return Type_ptr(new NonVip());
}

const Type_ptr Client::getClientType() const {
    return clientType;
}

std::string Client::getAddress() {
    return address;
}

std::string Client::getName() {
    return name;
}
boost::gregorian::greg_year_month_day Client::getBirthDate() {
    return birthDate.year_month_day();
}

void Client::addReservation(Reservation_ptr reservation) {
    reservations.push_back(reservation);
}

std::vector<Reservation_ptr> Client::getReservations() {
    return reservations;
}


boost::uuids::uuid Client::getID() {
    return UUID;
}

typedef std::shared_ptr <Client> Client_ptr;