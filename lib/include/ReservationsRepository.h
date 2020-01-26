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

    void add(Reservation_ptr reservation, std::vector <Reservation_ptr> reservations);
    void remove(Reservation_ptr reservation, std::vector <Reservation_ptr> reservations);
};


#endif //POBI_RESERVATIONSREPOSITORY_H
