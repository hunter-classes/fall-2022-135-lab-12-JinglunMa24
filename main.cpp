#include <iostream>
#include <vector>
#include "funcs.h"

int main() {
    // Task A
    std::vector<int> v1 = makeVector(20);
    std::cout << v1.size() << '\n';
    // return 20


    // Task B
    std::vector<int> v2{1, -2, 3, -4, 5, -6, 7, -8, 9, -10};
    std::vector<int> gv = goodVibes(v2);
    for (int i = 0; i < gv.size(); i++) {
        std::cout << gv.at(i) << ", ";
    }
    std::cout << '\n';
    // return 1, 3, 5, 7, 9,


    // Task C
    std::vector<int> v3{1, 2, 3};
    std::vector<int> v4{4, 5};
    gogeta(v3, v4);
    for (int i = 0; i < v3.size(); i++) {
        std::cout << v3.at(i) << ", ";
    }
    std::cout << '\n';
    // return 1, 2, 3, 4, 5,


    // Task D
    std::vector<int> v5{1, 2, 3};
    std::vector<int> v6{4, 5};
    std::vector<int> sPW = sumPairWise(v5, v6);
    for (int i = 0; i < sPW.size(); i++) {
        std::cout << sPW.at(i) << ", ";
    }
    std::cout << '\n';
    // return 5, 7, 3,

    return 0;
}