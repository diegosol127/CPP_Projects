#include <iomanip>
#include <ios>
#include <iostream>
#include <string>

// Specify which standard library names to use
using std::cin;
using std::cout;
using std::endl;
using std::setprecision;
using std::streamsize;
using std::string;

int main() {
  // Ask for and read the student's name
  cout << "Please enter your first name: ";
  string name;
  cin >> name;
  cout << "Hello, " << name << "!" << endl;

  // Ask for and read the midterm and final grades
  cout << "Please enter your midterm and final exam grades: ";
  double midterm, final;
  cin >> midterm >> final;

  // Ask for the homework grades
  cout << "Enter all your homework grades followed by end-of-file: ";

  // The number and sum of grades so far
  int count = 0;
  double sum = 0;

  // Variable to read from input stream
  double x;

  // Loop over all grades and compute the running total
  while (cin >> x) {
    ++count;
    sum += x;
  }

  // Write the result
  streamsize prec = cout.precision();
  cout << "Your final grade is " << setprecision(3)
       << 0.2 * midterm + 0.4 * final + 0.4 * sum / count << setprecision(prec)
       << endl;

  return 0;
}
