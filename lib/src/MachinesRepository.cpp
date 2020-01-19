//
// Created by student on 19.01.2020.
//

#include "../include/MachinesRepository.h"


#include <iostream>

void MachineRepository::add(Machine_ptr machine, std::vector <Machine_ptr> machines) {
    machines.push_back(machine);
}

void MachineRepository::remove(Machine_ptr machine, std::vector <Machine_ptr> machines) {
    for (int i=0; i<machines.size(); i++)
        if(machines[i]==machine){
            machines.erase(machines.begin()+i);
        }
}

