#ifndef POBI_MACHINESREPOSITORY_H
#define POBI_MACHINESREPOSITORY_H


#include <vector>
#include <boost/uuid/uuid.hpp>
#include "Repository.h"
#include "Machine.h"

class MachinesRepository : public Repository {

    std::vector <Machine_ptr> items;
public:
    MachinesRepository();
    Machine_ptr getById(boost::uuids::uuid UUID);
    int getIndexById(boost::uuids::uuid UUID);
    void add(Machine_ptr machine);
    void remove(int i);
    virtual ~MachinesRepository();


};


#endif //POBI_MACHINESREPOSITORY_H
