#include "../include/sequence.h"
#include <iostream>

// fib(n) = fib(n - 1) + fib (n - 2)
long long int fibonacci(long long int n) {
  long long int a = 0, b = 1, c, i;
  if (n == 0) {
    return a;
  }

  for (i = 2; i <= n; i++) {
    c = a + b;
    a = b;
    b = c;
    if (i < n) {
      std::cout << b << ", ";
    }
  }

  return b;
}
