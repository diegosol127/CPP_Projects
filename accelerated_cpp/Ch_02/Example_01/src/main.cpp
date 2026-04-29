#include <iostream>
#include <string>

// Specify which standard library names to use
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
  // Ask the user for their name
  cout << "Please enter your name: ";
  string name;
  cin >> name;
  cout << endl;

  // Build the message we intend to write
  const string greeting = "Hello, " + name + "!";

  // Calculations
  const int padding = 3;
  const int rows = 3 + 2 * padding;
  const string::size_type cols = greeting.size() + 2 + 2 * padding;

  // Loop over each line of output
  for (int r = 0; r < rows; ++r) {

    // Initialize column index counter
    string::size_type c = 0;

    // Loop invariant: c characters have be written in the current row
    while (c < cols) {

      // Check condition for writing the greeting
      if (r == padding + 1 && c == padding + 1) {

        // Write the greeting
        cout << greeting;
        c += greeting.size();

      } else {

        // Check condition for writing a border character
        if (r == 0 || r == rows - 1 || c == 0 || c == cols - 1) {

          // Write a border character
          cout << "*";
        } else {

          // Write a blank space
          cout << " ";
        }

        // Increment the column index counter
        ++c;
      }
    }

    // Start a new line
    cout << endl;
  }

  return 0;
}
