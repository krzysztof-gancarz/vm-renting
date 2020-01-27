#include <boost/test/unit_test.hpp>

#include "Machine.h"
BOOST_AUTO_TEST_SUITE(MachineTest)

    BOOST_AUTO_TEST_CASE(MachineVersionTest) {
        Machine machine("1.0","1.0","RafalOS");
        BOOST_REQUIRE_EQUAL(machine.getKernelVersion(), "1.0");
        BOOST_REQUIRE_EQUAL(machine.getVersion(), "1.0");
        BOOST_REQUIRE_EQUAL(machine.getOs(), "RafalOS");
    }

    BOOST_AUTO_TEST_CASE(MachineRentTest) {
        Machine machine("1.0","1.0","RafalOS");
        machine.startRent();
        BOOST_REQUIRE_EQUAL(machine.getStatus(), true);
        machine.endRent();
        BOOST_REQUIRE_EQUAL(machine.getStatus(), false);

    }

BOOST_AUTO_TEST_SUITE_END()