#include <iostream>
#include <string>

int main() {
  // Ask for the person's name
  std::cout << "Please enter your first name: ";

  // Read in the name
  std::string name;
  std::cin >> name;

  // Write a greeting
  std::cout << "Hello, " << name << "!" << std::endl;
  return 0;
}
