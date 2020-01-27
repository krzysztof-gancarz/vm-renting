#include <boost/test/unit_test.hpp>

#include "MachinesManager.h"
#include "ClientsManager.h"
#include "ReservationsManager.h"

BOOST_AUTO_TEST_SUITE(ManagerTest)

    BOOST_AUTO_TEST_CASE(MachinesManagerTest) {
        MachinesManager manager;
        manager.createMachine("test", "test", "test");
        manager.createMachine("test", "test", "test");
        manager.createMachine("test", "test", "test");
        BOOST_REQUIRE_EQUAL(manager.getFreeMachine(),manager.getMachine(0));
        manager.getMachine(0)->startRent();
        BOOST_REQUIRE_EQUAL(manager.getFreeMachine(),manager.getMachine(1));
    }

    BOOST_AUTO_TEST_CASE(ClientsManagerTest) {
        ClientsManager manager;
        manager.createClient("Karol", "Sosnowa 5", "1997/02/09", true);
        manager.createClient("Karol", "Sosnowa 5", "1997/02/09", true);
        BOOST_REQUIRE_NE(manager.getClient(0), manager.getClient(1));
        BOOST_REQUIRE_EQUAL(manager.getClient(0), manager.getClient(0));
    }

    BOOST_AUTO_TEST_CASE(ReservationsManagerTest) {
        ReservationsManager reservations;
        ClientsManager clients;
        MachinesManager machines;
        clients.createClient("Karol", "Sosnowa 5", "1997/02/09", true);
        clients.createClient("Karol", "Sosnowa 5", "1997/02/09", true);
        machines.createMachine("test", "test", "test");
        machines.createMachine("test", "test", "test");
        reservations.createReservation(clients.getClient(0), machines);
        reservations.createReservation(clients.getClient(1), machines);
        BOOST_REQUIRE_EQUAL(reservations.getReservation(0)->getInfo(), true);
        reservations.getReservation(0)->endReservation();
        BOOST_REQUIRE_EQUAL(reservations.getReservation(0)->getInfo(), false);
        BOOST_REQUIRE_EQUAL(reservations.getReservation(0)->getMachine(), machines.getMachine(0));
        reservations.createReservation(clients.getClient(1), machines);
        BOOST_REQUIRE_EQUAL(reservations.getReservation(2)->getMachine(), machines.getMachine(0));
        BOOST_REQUIRE_EQUAL(reservations.getReservation(2)->getClient(), clients.getClient(1));


    }

BOOST_AUTO_TEST_SUITE_END()