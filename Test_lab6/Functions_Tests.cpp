#define CATCH_CONFIG_MAIN
#include "./libs/catch.hpp"
#include "../lab6//Functions.h"

TEST_CASE() {
    REQUIRE(Euclid_algorithm(1, 0) == 2);
    REQUIRE(Euclid_algorithm(69, 13) == 1);
    REQUIRE(Euclid_algorithm(14, 7) == 7);
    REQUIRE(Euclid_algorithm(7975, 2585) == 55);
    REQUIRE(Euclid_algorithm(1877, 1032) == 1);
    REQUIRE(Euclid_algorithm(533, 533) == 533);
    REQUIRE(Euclid_algorithm(30, 239) == 1);
}
