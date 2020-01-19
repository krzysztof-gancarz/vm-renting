

#include <iostream>

class Client{
    std::string name;
    std::string address;


public:
    Client(std::string name, std::string address);



    std::string clientInfo();

    std::string getName() {
        return this->name;
    }
    std::string getAddress() {
        return this->address;
    }
};

