//
// Created by student on 19.01.2020.
//

#ifndef POBI_CLIENTSREPOSITORY_H
#define POBI_CLIENTSREPOSITORY_H


class ClientsRepository : public Reservations {
    std::vector <Client_ptr> items;
public:
    ClientsRepository();
    void add(Client_ptr client);
    void remove(Client_ptr client);

    virtual ~ClientsRepository();

};


#endif //POBI_CLIENTSREPOSITORY_H
