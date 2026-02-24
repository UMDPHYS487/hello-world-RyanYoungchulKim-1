#include <iostream>

int y;
int *x;

int main() {
  std::cout << &y << std::endl;
  x = &y;
  std::cout << "x value is " << x << std::endl;
  y = 30;
  std::cout << "now x value is " << x << std::endl;

  std::cout << "dereferenced x is " << *x << std::endl;
  y = 42;
  std::cout << "changed dereferenced x is " << *x << std::endl;
}