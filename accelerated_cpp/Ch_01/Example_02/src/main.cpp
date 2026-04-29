#include <iostream>
#include <string>

int main() {
  std::cout << "Please enter your name: ";
  std::string name;
  std::cin >> name;

  // Build the message we intend to write
  const std::string greeting = "Hello, " + name + "!";

  // Build the second and fourth lines of the output
  const std::string spaces(greeting.size(), ' ');
  const std::string lineSecond = "* " + spaces + " *";

  // Build the second and fourth lines of the output
  const std::string lineFirst(lineSecond.size(), '*');

  // Write it all
  std::cout << std::endl;
  std::cout << lineFirst << std::endl;
  std::cout << lineSecond << std::endl;
  std::cout << "* " << greeting << " *" << std::endl;
  std::cout << lineSecond << std::endl;
  std::cout << lineFirst << std::endl;

  return 0;
}
