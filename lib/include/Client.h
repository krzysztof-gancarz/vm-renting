#ifndef VM_RENTING_CLIENT_H
#define VM_RENTING_CLIENT_H

#include <iostream>
#include <memory>
#include "ClientType.h"
#include <boost/uuid/uuid.hpp>



class Client{
    std::string name;
    std::string address;
    Type_ptr clientType;
    boost::uuids::uuid UUID;

public:
    Client(std::string name, std::string address, bool isVip);


    Type_ptr setClientType(bool isVip);
    std::string clientInfo();

    std::string getName() {
        return this->name;
    }
    std::string getAddress() {
        return this->address;
    }

    const Type_ptr getClientType() const;
};
typedef std::shared_ptr  <Client> Client_ptr;

#endif