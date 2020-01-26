
#include <iostream>
#include <sstream>
#include <Vip.h>
#include <NonVip.h>
#include "Client.h"

using namespace std;

Client::Client(std::string name, std::string address, std::string birth, bool isVip) {

    /*if (name == "")
        throw ClientException("No name(required)");
    if (address == "")
        throw ClientException("No address(required)");*/

    this->name = name;
    this->address = address;
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

void Client::addReservation(Reservation* reservation) {
    reservations.push_back(reservation);
}

std::vector<Reservation*> Client::getReservations() {
    return reservations;
}
