//
// Created by student on 26.01.2020.
//

#include <MachinesManager.h>
#include <iostream>
#include <boost/uuid/uuid_io.hpp>

Machine_ptr MachinesManager::getFreeMachine() {
    for(int i=0;i<repo.size();i++) {
        if(!repo.getByIndex(i)->getStatus()) {
            return repo.getByIndex(i);
        }
    }
    return nullptr;
}

Machine_ptr MachinesManager::getMachine(int i) {
    return repo.getByIndex(i);
}

void MachinesManager::createMachine(std::string kernelVersion, std::string version, std::string os) {
    Machine_ptr newMachine(new Machine(kernelVersion, version, os));
    repo.add(newMachine);
}

void MachinesManager::listMachines() {
    for(int i=0; i<repo.size(); i++) {
        std::cout << i << ": " << repo.getByIndex(i)->getStatus() << " " << repo.getByIndex(i)->getKernelVersion() << " " << repo.getByIndex(i)->getVersion() << " " << repo.getByIndex(i)->getOs() << "    #" << repo.getByIndex(i)->getUuid() << "\n";
    }
}