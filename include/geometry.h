//
// Created by sarwa on 6/1/2024.
//

#ifndef CALCULATOR_GEOMETRY_H
#define CALCULATOR_GEOMETRY_H

struct circle {
    double perimeter;
    double area;
};

struct circle fc(const char *prompt);

struct sphere {
    double volume;
    double surfaceArea;
};

struct triangle {
    double opposite;
    double adjacent;
    double hypotenuse;
};


double pyTheorem(double opp, double adj, double hyp);
struct triangle fti(const char *prompt);
struct sphere fs(const char *prompt);

#endif //CALCULATOR_GEOMETRY_H
