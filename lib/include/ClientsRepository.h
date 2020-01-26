//
// Created by student on 19.01.2020.
//

#ifndef POBI_CLIENTSREPOSITORY_H
#define POBI_CLIENTSREPOSITORY_H

#include <vector>
#include <boost/uuid/uuid.hpp>
#include "Repository.h"
#include "Client.h"

class ClientsRepository : public Repository {
    std::vector <Client_ptr> items;
public:
    ClientsRepository();
    Client_ptr getById(boost::uuids::uuid UUID);
    int getIndexById(boost::uuids::uuid UUID);
    void add(Client_ptr client);
    void remove(Client_ptr client);
    virtual ~ClientsRepository();


};


#endif //POBI_CLIENTSREPOSITORY_H
