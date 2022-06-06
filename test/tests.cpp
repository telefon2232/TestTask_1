#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include <memory>

#include "doctest.h"
#include "../algo.h"

TEST_CASE("Empty string test") {
    auto test_impl = std::make_shared<algo::Algo>();

    CHECK(test_impl->vowel_max_len(1, "") == 0);
}

TEST_CASE("Basic topic test 1") {
    auto test_impl = std::make_shared<algo::Algo>();

    CHECK(test_impl->vowel_max_len(0, "Asdbuiodevauufgh") == 3);
}

TEST_CASE("Basic topic test 2") {
    auto test_impl = std::make_shared<algo::Algo>();

    CHECK(test_impl->vowel_max_len(2, "aeueo") == 0);
}

TEST_CASE("One vowel test") {
    auto test_impl = std::make_shared<algo::Algo>();

    CHECK(test_impl->vowel_max_len(1, "sdfsfsfsfaf") == 0);
}


