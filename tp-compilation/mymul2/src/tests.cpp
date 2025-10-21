#include <catch2/catch_test_macros.hpp>

#include "mul2.hpp"

TEST_CASE( "null value", "[mul2]" ) {
    REQUIRE( mul2(0) == 0 );
}

TEST_CASE( "non-null values", "[mul2]" ) {
    REQUIRE( mul2(1) == 2 );
    REQUIRE( mul2(21) == 42 );
}

