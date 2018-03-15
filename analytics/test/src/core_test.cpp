#define BOOST_TEST_MODULE "analytics-test"
#include <boost/test/unit_test.hpp>

#include <core.h>


BOOST_AUTO_TEST_SUITE( core_test_suite )

BOOST_AUTO_TEST_CASE(sum_test_1) {

        const double first = 1.0;
        const double second = 2.0;
        const double actual = poc::analytics::core::sum(first,second);
        const double expected = 3.0;

        BOOST_CHECK(actual == expected);
}

BOOST_AUTO_TEST_CASE(sum_test_2) {

    BOOST_CHECK(true);
}


BOOST_AUTO_TEST_SUITE_END()