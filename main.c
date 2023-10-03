#include <stdio.h>

int add(int n, int nx) {
    return n + nx;
}

int sub(int n, int nx) {
    return n - nx;
}

int mult(int n , int nx){
    return n * nx;
}

int division(int n, int nx){
    return n / nx;
}

int main() {
    int input;

    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    printf("hey watchu want mate: ");
    scanf_s("%d", &input);
    switch (input) {
        case 1:
            int in; int inx;
            printf("first num: ");scanf_s("%d", &in); printf("second num: ");scanf_s("%d", &inx);
            printf("%d", add(in, inx));
            break;
        case 2:
            int sin; int sinx;
            printf("first num: ");scanf_s("%d", &sin); printf("second num: ");scanf_s("%d", &sinx);
            printf("%d", sub(sin, sinx));
            break;
        case 3:
            int min; int minx;
            printf("first num: ");scanf_s("%d", &min); printf("second num: ");scanf_s("%d", &minx);
            printf("%d", mult(min, minx));
            break;
        case 4:
            int din; int dinx;
            printf("first num: ");scanf_s("%d", &din); printf("second num: ");scanf_s("%d", &dinx);
            printf("%d", division(din, dinx));
            break;
        default:
            printf("yeah idk whatchu talking about");
    }
    
    return 0;
}