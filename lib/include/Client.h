

#include <iostream>
#include "ClientType.h"

class Client{
    std::string name;
    std::string address;
    Type_ptr clientType;

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

