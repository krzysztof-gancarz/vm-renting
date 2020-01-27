//
// Created by student on 26.01.2020.
//

#include "ClientsManager.h"
#include <boost/uuid/uuid_io.hpp>

ClientsManager::ClientsManager() {}

void ClientsManager::createClient(std::string name, std::string address, std::string birth, bool isVip) {
    Client_ptr newClient(new Client(name,address, birth, isVip));
    repo.add(newClient);
}

Client_ptr ClientsManager::getClient(int i) {
    return repo.getByIndex(i);
}

void ClientsManager::listClients() {
    for(int i=0;i<repo.size();i++) {
        std::cout<< i << ": " << repo.getByIndex(i)->getName()<< " " << repo.getByIndex(i)->getAddress() << " " << boost::gregorian::to_simple_string(repo.getByIndex(i)->getBirthDate()) << " " << repo.getByIndex(i)->getClientType() << "    #" << repo.getByIndex(i)->getUuid() << "\n";
    }
}
