#include <iostream>

int main() {
  int factorial = 0;
  for(int i = 1; i <= 10; i++) {
    factorial = 1;
    for(int j = i; j > 0; j--) {
      factorial = factorial * j;
    }
    std::cout << "factorial of " << i << " is " << factorial <<std::endl;
  }
}