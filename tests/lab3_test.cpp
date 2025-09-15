#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/lab3.hpp"

using namespace std;

TEST_CASE("Hofstadter G sequence correctness") {
    REQUIRE(hofstadter_naive(0) == 0);
    REQUIRE(hofstadter_naive(1) == 1);
    REQUIRE(hofstadter_naive(2) == 1);
    REQUIRE(hofstadter_naive(3) == 2);
    REQUIRE(hofstadter_naive(4) == 3);
    REQUIRE(hofstadter_naive(5) == 3);
    REQUIRE(hofstadter_naive(6) == 4);

    vector<int> memo(20, -1);
    REQUIRE(hofstadter_memorized(0, memo) == 0);
    REQUIRE(hofstadter_memorized(1, memo) == 1);
    REQUIRE(hofstadter_memorized(2, memo) == 1);
    REQUIRE(hofstadter_memorized(3, memo) == 2);
    REQUIRE(hofstadter_memorized(4, memo) == 3);
    REQUIRE(hofstadter_memorized(5, memo) == 3);
    REQUIRE(hofstadter_memorized(6, memo) == 4);
}

TEST_CASE("Benchmarking Hofstadter sequence") {
    BENCHMARK("Naive G(50)") {
        return hofstadter_naive(50);
    };

    BENCHMARK("Naive G(100)") {
        return hofstadter_naive(100);
    };

    BENCHMARK("Naive G(150)") {
        return hofstadter_naive(150);
    };

    BENCHMARK("Naive G(200)") {
        return hofstadter_naive(200);
    };

        BENCHMARK("Naive G(250)") {
        return hofstadter_naive(250);
    };

    BENCHMARK("Memorized G(50)") {
        vector<int> memo(51, -1);
        return hofstadter_memorized(50, memo);
    };

    BENCHMARK("Memorized G(100)") {
        vector<int> memo(101, -1);
        return hofstadter_memorized(100, memo);
    };

    BENCHMARK("Memorized G(150)") {
        vector<int> memo(151, -1);
        return hofstadter_memorized(150, memo);
    };

    BENCHMARK("Memorized G(200)") {
        vector<int> memo(201, -1);
        return hofstadter_memorized(200, memo);
    };

        BENCHMARK("Memorized G(250)") {
        vector<int> memo(250, -1);
        return hofstadter_memorized(250, memo);
    };
}
