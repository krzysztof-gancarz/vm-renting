//
// Created by student on 19.01.2020.
//

#include "../include/ClientsRepository.h"

#include <iostream>

void ClientsRepository::addClient(Client_ptr client) {
    items.push_back(client);
}

void ClientRepository::remove(Client_ptr client) {

    for (int i=0; i<items.size(); i++)
        if(items[i]==client){
            items.erase(items.begin()+i);
        }
}
