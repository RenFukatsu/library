#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/1/NTL_1_A"

#include <iostream>
#include "../../math/prime_factor.h"

int main() {
    int n;
    std::cin >> n;
    auto v = Math::factorize(n);
    std::cout << n << ':';
    for (auto x : v) {
        std::cout << ' ' << x;
    }
    std::cout << '\n';
    return 0;
}
