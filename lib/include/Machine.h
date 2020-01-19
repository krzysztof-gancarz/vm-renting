//
// Created by student on 19.01.2020.
//

#ifndef POBI_MACHINE_H
#define POBI_MACHINE_H



class Machine{
    std:string kernelVersion;
    std:string version;
    std:string os;
    bool isRented;

public:
    Machine(std::string kernelVersion, std::string version, std::string os);
    virtual ~Machine();
    std::string getOs();
    std::string getVersion();
    std::string getKernelVersion();
    void endRent();
    void startRent();
    std::string machineInfo();
};

typedef  std::shared_ptr <Machine> Machine_ptr;

#endif //POBI_MACHINE_H
