#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

TEST_CASE("Task A") {
    std::vector<int> v1 = makeVector(20);
    CHECK(v1.size() == 19);
    for (int i = 0; i < v1.size(); i++) {
        CHECK(v1.at(i) == i);
    }

    std::vector<int> v2 = makeVector(100);
    CHECK(v2.size() == 99);
    for (int i = 0; i < v2.size(); i++) {
        CHECK(v2.at(i) == i);
    }

    std::vector<int> v3 = makeVector(0);
    CHECK(v3.size() == 0);
}


TEST_CASE("Task B") {
    std::vector<int> v1 = goodVibes({1, 2, 3, 4, 5, -6, -7, -8, -9, -10});
    std::vector<int> v1Res{1, 2, 3, 4, 5};
    std::vector<int> v2 = goodVibes({1, -2, 3, -4, 5, -6, 7, -8, 9, -10});
    std::vector<int> v2Res{1, 3, 5, 7, 9};

    CHECK(v1 == v1Res);
    CHECK(v2 == v2Res);
}


TEST_CASE("Task C") {
    std::vector<int> v1{1, 2, 3};
    std::vector<int> v2{4, 5};
    std::vector<int> v3{95, 96, 97};
    std::vector<int> v4{98, 99, 100};
    std::vector<int> res1{1, 2, 3, 4, 5};
    std::vector<int> res2{95, 96, 97, 98, 99, 100};
    gogeta(v1, v2);
    gogeta(v3, v4);

    CHECK(v1 == res1);
    CHECK(v2.empty());
    CHECK(v3 == res2);
    CHECK(v4.empty());
}


TEST_CASE("Task D") {
    std::vector<int> v1{1, 2, 3};
    std::vector<int> v2{4, 5};
    std::vector<int> v3{95, 96, 97};
    std::vector<int> v4{98, 99, 100};
    std::vector<int> v5{9, 8};
    std::vector<int> v6{7, 6, 5, 4};
    std::vector<int> res1{5, 7, 3};
    std::vector<int> res2{193, 195, 197};
    std::vector<int> res3{16, 14, 5, 4};

    CHECK(sumPairWise(v1, v2) == res1);
    CHECK(sumPairWise(v3, v4) == res2);
    CHECK(sumPairWise(v5, v6) == res3);
}