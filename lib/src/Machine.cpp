//
// Created by student on 19.01.2020.
//
#include <Machine.h>
#include "Exception.hpp"

Machine::Machine(std::string kernelVersion, std::string version,std::string os) :
kernelVersion(kernelVersion), version(version), os(os){
    if(kernelVersion=="") throw ParameterException("Kernel Vesion no set(Required)");
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

string Machine::machineInfo() {
    stringstream n;
    n << kernelVersion << " : " << version << " : " << os << "\n";

    return n.str();
}