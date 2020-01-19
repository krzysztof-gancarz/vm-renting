//
// Created by student on 19.01.2020.
//

#ifndef POBI_MACHINESREPOSITORY_H
#define POBI_MACHINESREPOSITORY_H

#include "Machine.h"

class MachinesRepository {
public:
    MachinesRepository();
    void add(Machine_ptr machine, std::vector <Machine_ptr> machines);
    void remove(Machine_ptr machine, std::vector <Machine_ptr> machines);

};


#endif //POBI_MACHINESREPOSITORY_H
