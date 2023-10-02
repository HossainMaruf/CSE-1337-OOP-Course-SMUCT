#include <iostream>

int main() {

  // std::string name;
  // std::cin >> name;
  // std::cout << name << std::endl;

  std::string fullName;
  getline(std::cin, fullName);
  std::cout << fullName << std::endl;

  return 0;
}