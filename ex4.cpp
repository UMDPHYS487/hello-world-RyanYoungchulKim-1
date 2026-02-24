//example 4
#include <iostream>

int factorial(int base) {
  int counter = 1;
  for(int i = base; i > 0; i--) {
    counter = counter * i;
  }
  return counter;
}

int main() {
  for(int i = 1; i <= 10; i++) {
    std::cout << "factorial of "<< i << " is " << factorial(i) <<std::endl;
  }
}