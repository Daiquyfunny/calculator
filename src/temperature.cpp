#include "../include/temperature.h"
#include "../include/userinput.h"
#include <iostream>

double convert(int mode) {
    double o;

    switch (mode) {
        case 1:
        {
            o = (userinputD("Degree Celsius to Fahrenheit: ") * 9/5) + 32;
            break;
        }
        case 2:
        {
            o = (userinputD("Degree Fahrenheit to Celsius: ") - 32) * 5/9;
            break;
        }
        default:
            fprintf(stderr, "Error");
            return 1;
    }

    return o;
}
