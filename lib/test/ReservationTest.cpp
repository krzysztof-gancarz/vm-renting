#include <boost/test/unit_test.hpp>

#include "Reservation.h"
#include "Machine.h"
#include "Client.h"


BOOST_AUTO_TEST_SUITE(ReservationTest)

    BOOST_AUTO_TEST_CASE(CreatingReservationCase) {
        Client_ptr client(new Client("Rafal Gladki", "Sloneczna 7", false));
        Machine_ptr machine(new Machine("1.0", "1.0", "RafalOS"));
        Reservation reservation(machine, client);
        BOOST_REQUIRE_EQUAL(reservation.getInfo(), true);


    }

BOOST_AUTO_TEST_SUITE_END()