#include <boost/test/unit_test.hpp>

#include "MachinesRepository.h"
#include "ClientsRepository.h"
#include "ReservationsRepository.h"

BOOST_AUTO_TEST_SUITE(RepositoryTest)

    BOOST_AUTO_TEST_CASE(ClientsRepositoryTest) {
        ClientsRepository repo;
        Client_ptr client1(new Client("Rafal", "Sosnowa 5", "1992/11/23", false));
        Client_ptr client2(new Client("Rafal", "Sosnowa 5", "1992/11/23", false));
        repo.add(client1);
        repo.add(client2);
        BOOST_REQUIRE_EQUAL(repo.getByIndex(0), client1);
        BOOST_REQUIRE_EQUAL(repo.getByIndex(1), client2);
        repo.remove(1);
        BOOST_REQUIRE_EQUAL(repo.getByIndex(1), nullptr);
        BOOST_REQUIRE_EQUAL(repo.getById(client1->getUuid()),client1);
        BOOST_REQUIRE_EQUAL(repo.getIndexById(client1->getUuid()),0);
        BOOST_REQUIRE_EQUAL(repo.size(),1);
    }

    BOOST_AUTO_TEST_CASE(MachinesRepositoryTest) {
        MachinesRepository repo;
        Machine_ptr machine1(new Machine("test", "test", "test"));
        Machine_ptr machine2(new Machine("test", "test", "test"));
        repo.add(machine1);
        repo.add(machine2);
        BOOST_REQUIRE_EQUAL(repo.getByIndex(0), machine1);
        BOOST_REQUIRE_EQUAL(repo.getByIndex(1), machine2);
        repo.remove(1);
        BOOST_REQUIRE_EQUAL(repo.getByIndex(1), nullptr);
        BOOST_REQUIRE_EQUAL(repo.getById(machine1->getUuid()),machine1);
        BOOST_REQUIRE_EQUAL(repo.getIndexById(machine1->getUuid()),0);
        BOOST_REQUIRE_EQUAL(repo.size(),1);


    }

    BOOST_AUTO_TEST_CASE(ReservationsRepositoryTest) {
        ReservationsRepository repo;
        Client_ptr client1(new Client("Rafal", "Sosnowa 5", "1992/11/23", false));
        Machine_ptr machine1(new Machine("test", "test", "test"));
        Machine_ptr machine2(new Machine("test", "test", "test"));
        Reservation_ptr reservation1(new Reservation(machine1, client1));
        Reservation_ptr reservation2(new Reservation(machine2, client1));
        repo.add(reservation1);
        repo.add(reservation2);
        BOOST_REQUIRE_EQUAL(repo.getByIndex(0), reservation1);
        BOOST_REQUIRE_EQUAL(repo.getByIndex(1), reservation2);
        repo.remove(1);
        BOOST_REQUIRE_EQUAL(repo.getByIndex(1), nullptr);
        BOOST_REQUIRE_EQUAL(repo.getById(reservation1->getUuid()),reservation1);
        BOOST_REQUIRE_EQUAL(repo.getIndexById(reservation1->getUuid()),0);
        BOOST_REQUIRE_EQUAL(repo.size(),1);
    }

BOOST_AUTO_TEST_SUITE_END()