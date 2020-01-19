//
// Created by student on 19.01.2020.
//

#ifndef POBI_RESERVATIONSREPOSITORY_H
#define POBI_RESERVATIONSREPOSITORY_H


class ReservationsRepository : public Repository{

public:
    ReservationsRepository();
    virtual ~ReservationsRepository();

    void getInfo();
    void getItems();
    void setVipMaxReservations();
    void setNonVipMaxReservations();

    void add();
    void remove();
};


#endif //POBI_RESERVATIONSREPOSITORY_H
