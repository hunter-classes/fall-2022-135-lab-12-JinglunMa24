#include <iostream>
#include "funcs.h"

// Task A
std::vector<int> makeVector(int n) {
    std::vector<int> result;
    for (int i = 0; i < n; i++) {
        result.push_back(i);
    }
    return result;
}

// Task B
std::vector<int> goodVibes(const std::vector<int> &v) {
    std::vector<int> result;
    for (int i = 0; i < v.size(); i++) {
        if (v.at(i) >= 0) {
            result.push_back(v.at(i));
        }
    }
    return result;
}

// Task C
void gogeta(std::vector<int> &goku, std::vector<int> &vegeta) {
    for (int i = 0; i < vegeta.size(); i++) {
        goku.push_back(vegeta.at(i));
    }
    vegeta.clear();
}

// Task D
std::vector<int> sumPairWise(const std::vector<int> &v1, const std::vector<int> &v2) {
    std::vector<int> result, larger, smaller;
    if (v1.size() > v2.size()) {
        larger = v1;
        smaller = v2;
    }
    else {
        larger = v2;
        smaller = v1;
    }

    for (int i = 0; i < larger.size(); i++) {
        if (i < smaller.size()) {
            result.push_back(larger.at(i) + smaller.at(i));
        }
        else {
            result.push_back(larger.at(i));
        }
    }

    return result;
}