#include <boost/test/unit_test.hpp>

#include "Client.h"
#include "Vip.h"

BOOST_AUTO_TEST_SUITE(TestSuiteCorrect)

BOOST_AUTO_TEST_CASE(ClientFirstNameCase) {
        Client client1("Jan", "Sadowa 5", true);
        Client client2("Jan", "Sadowa 5", false);
        BOOST_REQUIRE_EQUAL(client1.getName(), "Jan");
        BOOST_REQUIRE_EQUAL(client1.getAddress(), "Sadowa 5");
        BOOST_REQUIRE_EQUAL(client1.getClientType()->getInfo(), "Klient Vip");
        BOOST_REQUIRE_EQUAL(client2.getClientType()->getInfo(), "Klient NonVip");

}

BOOST_AUTO_TEST_SUITE_END()