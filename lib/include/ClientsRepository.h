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

    Client_ptr getById(boost::uuids::uuid UUID);
    int getIndexById(boost::uuids::uuid UUID);
    Client_ptr getByIndex(int i);
    void add(Client_ptr client);
    void remove(int i) override;
    ~ClientsRepository() override;
    int size() override;


};


#endif //POBI_CLIENTSREPOSITORY_H
