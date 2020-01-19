
#ifndef VM_RENTING_NONVIP_H
#define VM_RENTING_NONVIP_H


#include "ClientType.h"

class NonVip : public ClientType {
public:
    NonVip();
    virtual ~NonVip();
    int getMaxReservations();
    std::string getInfo();
};


#endif //VM_RENTING_NONVIP_H
