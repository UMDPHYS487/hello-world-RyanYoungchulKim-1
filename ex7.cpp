#include <iostream>

int main() {
  int entry;
  std::cout << "Please enter an integer: " << std::endl;
  std::cin >> entry;
  switch(entry % 2) {
  case 0:
    switch(entry < 10) {
    case 1:
      std::cout << entry * entry << std::endl;
      break;
    default:
      std::cout << "hahaha" << std::endl;
    }
    break;
  case 1:
    std::cout << entry / 2 << std::endl;
  }
}