
#ifndef VM_RENTING_CLIENTTYPE_H
#define VM_RENTING_CLIENTTYPE_H

#include <memory>
class ClientType {
protected:
    int maxReservations;

public:
    virtual int getMaxReservations()=0;
    virtual ~ClientType();
    virtual std::string getInfo()=0;

};

typedef std::shared_ptr <ClientType> Type_ptr;

#endif //VM_RENTING_CLIENTTYPE_H
