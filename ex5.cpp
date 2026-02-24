#include <iostream>

int factorial(int base) {
  int counter = 1;
  for(int i = base; i > 0; i--) {
    counter = counter * i;
  }
  return counter;
}

int main() {
  int entered_value;
  std::cout << "Please enter an integer value: ";
  std::cin >> entered_value;
  std::cout << "The value you entered is " << entered_value << " and its factorial is " << factorial(entered_value) <<std::endl;
}
