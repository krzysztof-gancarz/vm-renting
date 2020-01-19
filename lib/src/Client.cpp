
#include <iostream>
#include <sstream>

#include "Client.h"

using namespace std;

Client::Client(std::name, std::address) {

    if (name == "")
        throw ClientException("No name(required)");
    if (address == "")
        throw ClientException("No address(required)");

    this->name = name;
    this->address = address;
}

string Client::clientInfo() {
    stringstream napis;
    napis << name << " " << address << " " <<"\n";

    return napis.str();
}

