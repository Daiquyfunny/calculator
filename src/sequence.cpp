#include "../include/sequence.h"

// fib(n) = fib(n - 1) + fib (n - 2)
int fibonacci(int n) {
  if (n == 1) {
    return n;
  } else if (n == 0) {
    return n;
  };

  return fibonacci(n - 1) + fibonacci(n - 2);
}
