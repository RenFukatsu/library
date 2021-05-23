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
  bundledCode: "#line 1 \"math/prime_factor.h\"\n\n\n\n#include <vector>\n\nnamespace\
    \ Math {\ntemplate <typename T>\nstd::vector<T> factorize(T n) {\n    std::vector<T>\
    \ res;\n    for (T i = 2; i * i <= n; i++) {\n        while (n % i == 0) {\n \
    \           n /= i;\n            res.push_back(i);\n        }\n    }\n    if (n\
    \ != 1) res.push_back(n);\n    return res;\n}\n}  // namespace Math\n\n\n"
  code: "#ifndef LIBRARY_MATH_PRIME_FACTOR_H_\n#define LIBRARY_MATH_PRIME_FACTOR_H_\n\
    \n#include <vector>\n\nnamespace Math {\ntemplate <typename T>\nstd::vector<T>\
    \ factorize(T n) {\n    std::vector<T> res;\n    for (T i = 2; i * i <= n; i++)\
    \ {\n        while (n % i == 0) {\n            n /= i;\n            res.push_back(i);\n\
    \        }\n    }\n    if (n != 1) res.push_back(n);\n    return res;\n}\n}  //\
    \ namespace Math\n\n#endif  // LIBRARY_MATH_PRIME_FACTOR_H_\n"
  dependsOn: []
  isVerificationFile: false
  path: math/prime_factor.h
  requiredBy: []
  timestamp: '2021-05-23 23:55:08+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/NTL_1_A.test.cpp
documentation_of: math/prime_factor.h
layout: document
title: "\u7D20\u56E0\u6570\u5206\u89E3"
---

```
map<T, int> factorize(T N)
```

整数$N$を$O(\sqrt{N})$で素因数分解を行う関数

### 制約
- $T$は`int / unsigned int / int64_t / unsigned int64_t`
- $2 \leq N \leq 10^{18}$

### 計算量
- $O(\sqrt{N})$
