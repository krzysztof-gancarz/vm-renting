//
// Created by student on 26.01.2020.
//

#include "ClientsManager.h"

ClientsManager::ClientsManager() {}

void ClientsManager::createClient(std::string name, std::string address, std::string birth, bool isVip) {
    Client_ptr newClient(new Client(name,address, birth, isVip));
    repo.add(newClient);
}

Client_ptr ClientsManager::getClient(int i) {
    return repo.getByIndex(i);
}

void ClientsManager::listClients() {}
