#include <iostream>

int main(int argc, char *argv[]) {
  // argc: Number of command-line arguments
  // argv: Array of command-line arguments
  for (int i = 0; i < argc; ++i) {
    std::cout << "Argument " << i << ": " << argv[i] << std::endl;
  }
  return 0;
}
