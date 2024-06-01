//
// Created by sarwa on 6/1/2024.
//

#include "../include/geometry.h"
#include "../include/userinput.h"
#include <cmath>
#include <iostream>

const double pi = 3.1415926;


struct circle fc(const char *prompt) {
    double radius = userinputD(prompt);
    double perimeter = 2*pi*radius;
    double area = pi*pow(radius, 2);
    struct circle nc = {perimeter, area};
    return nc;
}

double pyTheorem(double opp, double adj, double hyp) {
    double x = 0;
    if (hyp == 0) {
        x = sqrt(pow(opp, 2) + pow(adj, 2));
    } else if (opp == 0) {
        x = sqrt(pow(adj, 2) - pow(hyp, 2));
    } else if (adj == 0) {
        x = sqrt(pow(opp, 2) - pow(hyp, 2));
    }

    return x;
}

struct triangle fti(const char *prompt) {
    double opp = 0;
    double adj = 0;
    double hyp = 0;

    do {
        std::cout << "1. opposite: " << opp << std::endl << "2. adjacent: " << adj << std::endl << "3. hypotenuse: " << hyp << std::endl;
        int input = userinputI("input: ");
        switch (input) {
            case 1:
                opp = userinputD("opp: ");
                break;
            case 2:
                adj = userinputD("adj: ");
                break;
            case 3:
                hyp = userinputD("hyp: ");
                break;
            default:
                fprintf(stderr, "nuh uh: \n");
                break;
        }
    } while (!opp && !adj || !opp && !hyp || !adj && !hyp);

    struct triangle nti = {opp, adj, hyp};
    return nti;
}

struct sphere fs(const char *prompt) {
    double radius = userinputD(prompt);
    double volume = (double)4/3*pi*pow(radius, 3);
    double surfaceArea = 4*pi*pow(radius, 2);
    struct sphere ns = {volume, surfaceArea};
    return ns;
}