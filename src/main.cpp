#include <iostream>
#include <cmath>
#include "../include/arithmetic.h"
#include "../include/geometry.h"
#include "../include/userinput.h"

int main() {
    int input;
    do {
        input = userinputI("1. Arithmetic 2. Circle 3. Sphere 4. Pythagorean\nSelect an option: ");
    } while (input < 1 || input > 4);

    switch (input) {
        case 1: {
            int operation = userinputI("1. Addition 2. Subtraction 3. Multiplication 4. Division\nSelect operation: ");
            double n1 = userinputD("First number: ");
            double n2 = userinputD("Second number: ");
            double result = calculate(operation, n1, n2);
            if (!std::isnan(result)) {
                std::cout << "Result: " << result << std::endl;
            }
            break;
        }
        case 2: {
            circle nc = fc("Radius: ");
            std::cout << "Perimeter: " << nc.perimeter << "\nArea: " << nc.area << std::endl;
            break;
        }
        case 3: {
            sphere ns = fs("Radius: ");
            std::cout << "Volume: " << ns.volume << "\nSurface Area: " << ns.surfaceArea << std::endl;
            break;
        }
        case 4: {
            triangle t = fti("Sides of the triangle: ");
            std::cout << "Opposite: " << t.opposite << "\nAdjacent: " << t.adjacent << "\nHypotenuse: " << t.hypotenuse << std::endl;
            break;
        }
    }

    return 0;
}
