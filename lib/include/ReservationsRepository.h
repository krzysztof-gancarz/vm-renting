//
// Created by student on 19.01.2020.
//

#ifndef POBI_RESERVATIONSREPOSITORY_H
#define POBI_RESERVATIONSREPOSITORY_H

#include <vector>
#include <boost/uuid/uuid.hpp>
#include "Repository.h"
#include "Reservation.h"

class ReservationsRepository : public Repository{
    std::vector <Reservation_ptr> items;

public:
    ReservationsRepository();
    virtual ~ReservationsRepository();
    Reservation_ptr getById(boost::uuids::uuid UUID);
    int getIndexById(boost::uuids::uuid UUID);
    Reservation_ptr getByIndex(int i);
    void add(Reservation_ptr reservation);
    void remove(int i) override;
    int size() override;
};


#endif //POBI_RESERVATIONSREPOSITORY_H
