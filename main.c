#include <stdio.h>
#include <stdlib.h>

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

int main(void) {
  int a;
  double n1, n2;
  char input[1024], na[1024], nb[1024];
  
  printf("1. addtion 2. subtraction 3. multiplication 4. division\n");
  do {
    printf("operation: ");
    if (!fgets(input, 1024, stdin)) {
      return 1;
    }

    a = atoi(input);
  } while (a == 0);

  do {
    printf("na: ");
    if (!fgets(na, 1024, stdin)) {
      return 1;
    }

    n1 = strtod(na, NULL);
  } while (n1 == 0);

  do {
    printf("nb: ");
    if (!fgets(nb, 1024, stdin)) {
      return 1;
    }

    n2 = strtod(nb, NULL);
  } while (n2 == 0);

  printf("%lf", calculate(a, n1, n2));
  
  return 0;
}
