//
// Created by student on 19.01.2020.
//
#include "Machine.h"


Machine::Machine(std::string kernelVersion, std::string version, std::string os) {
    this->kernelVersion = kernelVersion;
    this->version = version;
    this->os = os;
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