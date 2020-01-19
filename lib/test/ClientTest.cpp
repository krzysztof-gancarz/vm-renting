#include <boost/test/unit_test.hpp>

#include "Client.h"

BOOST_AUTO_TEST_SUITE(TestSuiteCorrect)

BOOST_AUTO_TEST_CASE(ClientFirstNameCase) {
        Client client("Jan", "Sadowa 5");
        BOOST_REQUIRE_EQUAL(client.getName(), "Jan");
        BOOST_REQUIRE_EQUAL(client.getAddress(), "Sadowa 5");

}

BOOST_AUTO_TEST_SUITE_END()