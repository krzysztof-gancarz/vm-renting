//
// Created by student on 19.01.2020.
//
#include <boost/uuid/random_generator.hpp>
#include "Machine.h"
#include "Exception.h"


Machine::Machine(std::string kernelVersion, std::string version, std::string os) {
    this->kernelVersion = kernelVersion;
    this->version = version;
    this->os = os;
    this->UUID = boost::uuids::random_generator()();

    if(kernelVersion=="") throw ParameterException("Brak wersji kernela [REQUIRED].");
    if(version=="") throw ParameterException("Brak wersji [REQUIRED].");
    if(os=="") throw ParameterException("Brak os [REQUIRED].");
}

Machine::~Machine() {

}

std::string Machine::getKernelVersion() {
    return kernelVersion;
}

std::string Machine::getVersion() {
    return version;
}

std::string Machine::getOs() {
    return os;
}

boost::uuids::uuid Machine::getUuid() {
    return UUID;
}


std::string Machine::machineInfo() {
    std::stringstream n;
    n << kernelVersion << " : " << version << " : " << os << "\n";

    return n.str();
}

void Machine::endRent() {
    isRented = false;
}
void Machine::startRent() {
    isRented = true;
}

bool Machine::getStatus() {
    return isRented;
}