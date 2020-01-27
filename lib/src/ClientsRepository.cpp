//
// Created by student on 19.01.2020.
//

#include "../include/ClientsRepository.h"
#include "Exception.h"



void ClientsRepository::add(Client_ptr client) {
    items.push_back(client);
}

Client_ptr ClientsRepository::getById(boost::uuids::uuid UUID) {
    for (int i = 0; i < items.size(); i++) {
        if (items[i]->getUuid() == UUID) {
            return items[i];
        }
        else {
            throw ParameterException("Brak takiego ID ");
        }
    }
    return nullptr;
}
int ClientsRepository::getIndexById(boost::uuids::uuid UUID) {
    for (int i = 0; i < items.size(); i++) {
        if (items[i]->getUuid() == UUID) {
            return i;
        }
        else {
            throw ParameterException("Brak pasujacego indeksu ");
        }
    }
    return -1;
}

void ClientsRepository::remove(int i) {
    items.erase(items.begin()+i);

}

int ClientsRepository::size() {
    return items.size();
}

Client_ptr ClientsRepository::getByIndex(int i) {
    if(i>=items.size()){
        return nullptr;
    }
    return items[i];
}

ClientsRepository::~ClientsRepository() {

}