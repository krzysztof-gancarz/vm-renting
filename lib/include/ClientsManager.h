//
// Created by student on 26.01.2020.
//

#ifndef VM_RENTING_CLIENTSMANAGER_H
#define VM_RENTING_CLIENTSMANAGER_H

#include "ClientsRepository.h"

class ClientsManager {
    ClientsRepository repo;
public:
    ClientsManager();
    void createClient(std::string name, std::string address, std::string birth, bool isVip);
    void listClients();
    Client_ptr getClient(int i);

};

#endif //VM_RENTING_CLIENTSMANAGER_H
