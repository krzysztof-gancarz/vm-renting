//
// Created by student on 19.01.2020.
//
#include <Machine.cpp>

Machine::Machine(std::string kernelVersion, std::string version,std::string os) :
kernelVersion(kernelVersion), version(version), os(os){
    if(kernelVersion=="") throw ParameterException("Kernel Vesion no set(Required)");
}

Machine::~Machine() {

}

std::string Machine::getKernelVersion() {
    return kernelVersion;
}

std::string Child::getVersion() {
    return version;
}

std::string Child::getOs() {
    return os;
}