#include <iostream>
using namespace std;

int main() {

	// declare variables
	double num1, num2, product;

	// user provides values to multiply together
	cout << "Enter 1st number: ";
	cin >> num1;
	cout << "Enter 2nd number: ";
	cin >> num2;
	
	// multiply and return the output
	product = num1 * num2;
	cout << "Answer: " << product << std::endl;
	cin.get();
}