#include "../include/sequence.h"
#include <gmp-x86_64.h>
#include <gmp.h>
#include <iostream>

// fib(n) = fib(n - 1) + fib (n - 2)
void fibonacci(long long int n) {
  mpz_t a, b, c;
  mpz_init_set_ui(a, 0);
  mpz_init_set_ui(b, 1);
  mpz_init(c);

  if (n == 0) {
    mpz_out_str(stdout, 10, a);
    std::cout << '\n';
    return;
  }

  for (long long int i = 0; i <= n; i++) {
    mpz_add(c, a, b);
    mpz_set(a, b);
    mpz_set(b, c);

    std::cout << ", ";
    mpz_out_str(stdout, 10, b);
  }

  std::cout << '\n';

  mpz_clear(a);
  mpz_clear(b);
  mpz_clear(c);
}
