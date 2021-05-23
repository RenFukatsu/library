#ifndef LIBRARY_MATH_PRIME_FACTOR_H_
#define LIBRARY_MATH_PRIME_FACTOR_H_

#include <vector>

namespace Math {
template <typename T>
std::vector<T> factorize(T n) {
    std::vector<T> res;
    for (T i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            n /= i;
            res.push_back(i);
        }
    }
    if (n != 1) res.push_back(n);
    return res;
}
}  // namespace Math

#endif  // LIBRARY_MATH_PRIME_FACTOR_H_
