#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/1/NTL_1_A"

#include <iostream>
#include "../../math/prime_factor.h"

int main() {
    int n;
    std::cin >> n;
    auto mp = Math::factorize(n);
    std::cout << n << ':';
    for (auto [x, cnt] : mp) {
        for (int i = 0; i < cnt; i++) {
            std::cout << ' ' << x;
        }
    }
    std::cout << '\n';
    return 0;
}
