//
// Created by student on 19.01.2020.
//

#ifndef MACHINE_H
#define MACHINE_H

#include <string>
#include <memory>
#include <sstream>
#include <boost/uuid/uuid.hpp>

class Machine {
    std::string kernelVersion;
    std::string version;
    std::string os;
    boost::uuids::uuid UUID;
    bool isRented;

public:
    Machine(std::string kernelVersion, std::string version, std::string os);
    virtual ~Machine();
    std::string getOs();
    std::string getVersion();
    std::string getKernelVersion();
    boost::uuids::uuid getUuid();
    void endRent();
    void startRent();
    std::string machineInfo();
    bool getStatus();
};

typedef  std::shared_ptr <Machine> Machine_ptr;

#endif //POBI_MACHINE_H
