
#include <iostream>
#include <sstream>

using namespace std;

Client::Client(std::name, std::address) {

    if (name == "")
        throw ClientException("No name(required)");
    if (address == "")
        throw ClientException("No address(required)");
}

string Client::clientInfo() {
    stringstream napis;
    napis << name << " " << address << " " <<"\n";

    return napis.str();
}

