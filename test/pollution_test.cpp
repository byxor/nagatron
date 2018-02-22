#include "catch.hpp"
#include "pollution.hpp"

TEST_CASE("A directory") {

  PollutionChecker checker;

  SECTION("is not polluted when it is empty") {
    REQUIRE(!checker.IsPolluted(Contents{}));
  }

  SECTION("is polluted when it contains paths") {
    REQUIRE(checker.IsPolluted(Contents {"foo", "bar"}));
  }

  SECTION("is not polluted when paths are whitelisted") {
    Contents contents {"bar"};
    Contents whitelisted {"bar", "baz"};
    REQUIRE(!checker.IsPolluted(contents, whitelisted));
  }
}
