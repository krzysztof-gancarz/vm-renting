//
// Created by student on 19.01.2020.
//

#include "../include/MachinesRepository.h"


#include <iostream>

void MachineRepository::add(Machine_ptr machine) {
    items.push_back(machine);
}

void MachineRepository::remove(Machine_ptr machine) {

    for (int i=0; i<items.size(); i++)
        if(items[i]==machine){
            items.erase(items.begin()+i);
        }
}

