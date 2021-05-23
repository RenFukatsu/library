---
title: 素因数分解
documentation_of: //math/prime_factor.h
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
