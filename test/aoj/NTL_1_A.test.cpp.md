---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: math/prime_factor.h
    title: "\u7D20\u56E0\u6570\u5206\u89E3"
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/1/NTL_1_A
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/1/NTL_1_A
  bundledCode: "#line 1 \"test/aoj/NTL_1_A.test.cpp\"\n#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/1/NTL_1_A\"\
    \n\n#include <iostream>\n#line 1 \"math/prime_factor.h\"\n\n\n\n#include <vector>\n\
    \nnamespace Math {\ntemplate <typename T>\nstd::vector<T> factorize(T n) {\n \
    \   std::vector<T> res;\n    for (T i = 2; i * i <= n; i++) {\n        while (n\
    \ % i == 0) {\n            n /= i;\n            res.push_back(i);\n        }\n\
    \    }\n    if (n != 1) res.push_back(n);\n    return res;\n}\n}  // namespace\
    \ Math\n\n\n#line 5 \"test/aoj/NTL_1_A.test.cpp\"\n\nint main() {\n    int n;\n\
    \    std::cin >> n;\n    auto v = Math::factorize(n);\n    std::cout << n << ':';\n\
    \    for (auto x : v) {\n        std::cout << ' ' << x;\n    }\n    std::cout\
    \ << '\\n';\n    return 0;\n}\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/1/NTL_1_A\"\
    \n\n#include <iostream>\n#include \"../../math/prime_factor.h\"\n\nint main()\
    \ {\n    int n;\n    std::cin >> n;\n    auto v = Math::factorize(n);\n    std::cout\
    \ << n << ':';\n    for (auto x : v) {\n        std::cout << ' ' << x;\n    }\n\
    \    std::cout << '\\n';\n    return 0;\n}\n"
  dependsOn:
  - math/prime_factor.h
  isVerificationFile: true
  path: test/aoj/NTL_1_A.test.cpp
  requiredBy: []
  timestamp: '2021-05-23 23:55:08+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/aoj/NTL_1_A.test.cpp
layout: document
redirect_from:
- /verify/test/aoj/NTL_1_A.test.cpp
- /verify/test/aoj/NTL_1_A.test.cpp.html
title: test/aoj/NTL_1_A.test.cpp
---