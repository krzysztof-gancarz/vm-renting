
#ifndef VM_RENTING_RESERVATION_H
#define VM_RENTING_RESERVATION_H

#include <boost/uuid/uuid.hpp>
#include <boost/date_time.hpp>
#include

class Reservation {
    boost::uuids::uuid ID;
    boost::posix_time::ptime begin;
    boost::posix_time::ptime end;
public:
    Reservation(Machine_prt);

};


#endif //VM_RENTING_RESERVATION_H
