---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/NTL_1_A.test.cpp
    title: test/aoj/NTL_1_A.test.cpp
  _isVerificationFailed: false
  _pathExtension: h
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"math/prime_factor.h\"\n\n\n\n#include <map>\n#include <vector>\n\
    \nnamespace Math {\ntemplate <typename T>\nstd::map<T, int> factorize(T n) {\n\
    \    std::map<T, int> res;\n    for (T i = 2; i * i <= n; i++) {\n        while\
    \ (n % i == 0) {\n            n /= i;\n            res[i]++;\n        }\n    }\n\
    \    if (n != 1) res[n]++;\n    return res;\n}\n}  // namespace Math\n\n\n"
  code: "#ifndef LIBRARY_MATH_PRIME_FACTOR_H_\n#define LIBRARY_MATH_PRIME_FACTOR_H_\n\
    \n#include <map>\n#include <vector>\n\nnamespace Math {\ntemplate <typename T>\n\
    std::map<T, int> factorize(T n) {\n    std::map<T, int> res;\n    for (T i = 2;\
    \ i * i <= n; i++) {\n        while (n % i == 0) {\n            n /= i;\n    \
    \        res[i]++;\n        }\n    }\n    if (n != 1) res[n]++;\n    return res;\n\
    }\n}  // namespace Math\n\n#endif  // LIBRARY_MATH_PRIME_FACTOR_H_\n"
  dependsOn: []
  isVerificationFile: false
  path: math/prime_factor.h
  requiredBy: []
  timestamp: '2021-05-19 00:34:43+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/NTL_1_A.test.cpp
documentation_of: math/prime_factor.h
layout: document
redirect_from:
- /library/math/prime_factor.h
- /library/math/prime_factor.h.html
title: math/prime_factor.h
---
