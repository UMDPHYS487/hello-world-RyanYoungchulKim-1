#include <bitset>
#include <iostream>

int main() {
  std::bitset<8> b{0b01110010};
  std::cout << b << " initial value\n";

  b = ~b;

  std::cout << b << " final value\n";
}