//
// Created by student on 19.01.2020.
//

#include "../include/MachinesRepository.h"

MachinesRepository::MachinesRepository() {

}


void MachinesRepository::add(Machine_ptr machine) {
    items.push_back(machine);
}

Machine_ptr MachinesRepository::getById(boost::uuids::uuid UUID) {
    for (int i = 0; i < items.size(); i++) {
        if (items[i]->getUuid() == UUID) {
            return items[i];
        }
    }
    return nullptr;
}
int MachinesRepository::getIndexById(boost::uuids::uuid UUID) {
    for (int i = 0; i < items.size(); i++) {
        if (items[i]->getUuid() == UUID) {
            return i;
        }
    }
    return -1;
}

void MachinesRepository::remove(int i) {
    items.erase(items.begin() + i);
}
