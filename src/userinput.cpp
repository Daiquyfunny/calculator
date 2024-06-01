#include "../include/userinput.h"
#include <iostream>

int userinputI(const char *prompt) {
    std::string input;
    int x;
    std::cout << prompt;
    std::cin >> input;

    if (input.find('.') != std::string::npos || std::cin.fail()) {
        x = 0;
    } else {
        x = stoi(input);
    }

    return x;
}

double userinputD(const char *prompt) {
    double x;
    std::string input;
    std::cout << prompt;
    std::cin >> input;

    if (std::cin.fail()) {
        x = 0;
    } else {
        x = std::stod(input);
    }

    return x;
}