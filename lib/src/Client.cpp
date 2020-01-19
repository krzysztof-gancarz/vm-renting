
#include <iostream>
#include <sstream>
#include <Vip.h>
#include <NonVip.h>
#include "Client.h"

using namespace std;

Client::Client(std::string name, std::string address, bool isVip) {

    /*if (name == "")
        throw ClientException("No name(required)");
    if (address == "")
        throw ClientException("No address(required)");*/

    this->name = name;
    this->address = address;
    clientType = setClientType(isVip);
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