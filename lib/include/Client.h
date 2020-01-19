

#include <iostream>
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

