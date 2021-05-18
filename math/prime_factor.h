#ifndef LIBRARY_MATH_PRIME_FACTOR_H_
#define LIBRARY_MATH_PRIME_FACTOR_H_

#include <map>
#include <vector>

namespace Math {
template <typename T>
std::map<T, int> factorize(T n) {
    std::map<T, int> res;
    for (T i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            n /= i;
            res[i]++;
        }
    }
    if (n != 1) res[n]++;
    return res;
}
}  // namespace Math

#endif  // LIBRARY_MATH_PRIME_FACTOR_H_
