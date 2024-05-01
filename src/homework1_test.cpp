#define BOOST_TEST_MODULE homework1 test

#include <boost/test/included/unit_test.hpp>
#include "version_config.h"

BOOST_AUTO_TEST_CASE(version_test)
{
    BOOST_CHECK( version() != 100000 );
}
