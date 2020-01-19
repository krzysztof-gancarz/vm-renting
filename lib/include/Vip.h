
#ifndef VM_RENTING_VIP_H
#define VM_RENTING_VIP_H


#include "ClientType.h"

class Vip : public ClientType{
public:
    Vip();
    virtual ~Vip();
    int getMaxReservations();
    std::string getInfo();

};

#endif //VM_RENTING_VIP_H
