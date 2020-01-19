//
// Created by student on 19.01.2020.
//

#ifndef POBI_MACHINESREPOSITORY_H
#define POBI_MACHINESREPOSITORY_H

#include "Machine.h"

class MachinesRepository : public Repository {
    std::vector <Machine_ptr> items;
public:
    MachinesRepository();
    void add(Machine_ptr machine);
    void remove(Machine_ptr machine;
    virtual ~MachinesRepository();

};


#endif //POBI_MACHINESREPOSITORY_H
