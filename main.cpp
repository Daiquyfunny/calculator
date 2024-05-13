#include <iostream>
#include <cmath>
#include <ostream>

const double pi = 3.1415926;

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

struct sphere {
  double volume;
  double surfaceArea;
};

struct circle {
  double perimeter;
  double area;
};

struct triangle {
  double opposite;
  double adjacent;
  double hypotenuse;
};

double pyThorem(double opp, double adj, double hyp) {
  double x;
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
        userinputD("opp: ");
        break;
      case 2:
        userinputD("adj: ");
        break;
      case 3:
        userinputD("hyp: ");
        break;
      default:
        fprintf(stderr, "nuh uh: \n");
        break;
    } 
  } while (!opp && !adj || !opp && !hyp || !adj && !hyp);

  struct triangle nti = {opp, adj, hyp};
  return nti;
}

struct circle fc(const char *prompt) {
  double radius = userinputD(prompt);
  double perimeter = 2*pi*radius;
  double area = pi*pow(radius, 2);
  struct circle nc = {perimeter, area};
  return nc;
}

struct sphere fs(const char *prompt) {
  double radius = userinputD(prompt);
  double volume = (double)4/3*pi*pow(radius, 3);
  double surfaceArea = 4*pi*pow(radius, 2);
  struct sphere ns = {volume, surfaceArea};
  return ns;
}

int main() {
  int a;
  int input;
  double n1;
  double n2;

  do {
    input = userinputI("1. arithmetic 2. circle 3. sphere 4. pythagorean\ninput: ");
  } while (input == 0 || input < 1 || input > 4); 

  switch (input) {
    case 1:
      printf("1. addition 2. subtraction 3. multiplication 4. division\n");
      a = userinputI("operation: ");
      n1 = userinputI("n1: ");
      n2 = userinputI("n2: "); 

      std::cout << "result: " << calculate(a, n1, n2);
      break;
    case 2:
      {
        struct circle nc = fc("radius: ");
        std::cout << "perimeter: " << nc.perimeter << std::endl << "area: " << nc.area;
        break;
      }
    case 3:
      {
        struct sphere ns = fs("radius: ");
        std::cout << "volume: " << ns.volume << std::endl << "area: "<< ns.surfaceArea;
        break;
      }
    case 4:
      {
        struct triangle nturtle = fti("input: ");
        std::cout << pyThorem(nturtle.adjacent, nturtle.opposite, nturtle.hypotenuse);
        break;
      }
    default:
      return 1;
      break;
  }

  return 0;
}
