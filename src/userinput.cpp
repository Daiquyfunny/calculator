#include "../include/userinput.h"
#include <iostream>
#include <limits>

int userinputI(const char *prompt) {
  int x;

  std::cout << prompt;
  while (!(std::cin >> x)) {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cerr << "Error, try again: ";
  }

  return x;
}

long long int userinputL(const char *prompt) {
  long long int x;

  std::cout << prompt;
  while (!(std::cin >> x)) {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cerr << "Error, try again: ";
  }

  std::cout << x << "\n";
  return x;
}

double userinputD(const char *prompt) {
  double x;

  std::cout << prompt;
  while (!(std::cin >> x)) {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cerr << "Error, try again: ";
  }

  return x;
}
