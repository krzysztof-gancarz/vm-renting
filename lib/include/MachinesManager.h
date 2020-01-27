//
// Created by student on 26.01.2020.
//

#ifndef VM_RENTING_MACHINESMANAGER_H
#define VM_RENTING_MACHINESMANAGER_H

#include "MachinesRepository.h"

class MachinesManager {
    MachinesRepository repo;
public:
    void createMachine(std::string kernelVersion, std::string version, std::string os);
    void listMachines();
    Machine_ptr getMachine(int i);
    Machine_ptr getFreeMachine();

};

#endif //VM_RENTING_MACHINESMANAGER_H
