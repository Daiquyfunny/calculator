//
// Created by sarwa on 6/1/2024.
//

#include "../include/arithmetic.h"
#include <iostream>

double calculate(int operation, double n1, double n2) {
    double result;

    switch (operation) {
        case 1:
            result = n1 + n2;
            break;
        case 2:
            result = n1 - n2;
            break;
        case 3:
            result = n1 * n2;
            break;
        case 4:
            if (n2 == 0) {
                fprintf(stderr, "nuh uh: \n");
                return 1;
            }
            result = n1 / n2;
            break;
        default:
            fprintf(stderr, "nuh uh: \n");
            return 1;
    }

    return result;
}