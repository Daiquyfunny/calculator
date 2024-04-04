#include <stdio.h>
#include <stdlib.h>
#include <math.h>

const double pi = 3.1415926;

double calculate(int operation, double n1, double n2) {
  double result;
  switch(operation) {
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
      result = n1 / n2;
      break;
    default:
      return 1;
      break;
  }
  
  return result;
}

int userinputI(char *prompt) {
  int a;
  char x[1024];

  do {
    printf("%s", prompt);
    if (!fgets(x, sizeof(x), stdin)) {
      return 1;
    }
  } while (atoi(x) == 0);
  
  a = atoi(x);
  return a;
}

double userinputD(char *prompt) {
  double a;
  char x[1024];

  do {
    printf("%s", prompt);
    if (!fgets(x, sizeof(x), stdin)) {
      return 1; 
    }
  } while (strtod(x, NULL) == 0);
  
  a = strtod(x, NULL);
  return a;
}

struct sphere {
  double volume;
  double surfaceArea;
};

struct circle {
  double perimeter;
  double area;
};

struct circle fc(char *prompt) {
  double radius = userinputD(prompt);
  double perimeter = 2*pi*radius;
  double area = pi*pow(radius, 2);
  struct circle nc = {perimeter, area};
  return nc;
}

struct sphere fs(char *prompt) {
  double radius = userinputD(prompt);
  double volume = 4/3*pi*pow(radius, 3);
  double surfaceArea = 4*pi*pow(radius, 2);
  struct sphere ns = {volume, surfaceArea};
  return ns;
}

int main(void) {
  int a, input;
  double n1, n2;
  
  printf("1. arithmetic 2. circle 3. sphere\n");
  input = userinputI("input: ");
  switch(input) {
    case 1:
      printf("1. addtion 2. subtraction 3. multiplication 4. division\n");
      a = userinputI("operation: ");
      n1 = userinputD("n1: ");
      n2 = userinputD("n2: ");

      printf("result: %lf", calculate(a, n1, n2));
      break;
    case 2:
      {
        struct circle nc = fc("radius: ");
        printf("perimeter: %lf\narea: %lf", nc.perimeter, nc.area);
      }
      break;
    case 3:
      {
        struct sphere ns = fs("radius: ");
        printf("volume: %lf\narea: %lf", ns.volume, ns.surfaceArea);
      }
      break;
    default:
      return 1;
      break;
  }
  
  return 0;
}
