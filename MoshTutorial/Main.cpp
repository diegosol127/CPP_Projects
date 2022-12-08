#include <iostream>
#include <cmath>

using namespace std;

int main() {

	double input;
	double output;

	cout << "Enter tempterature in Fahrenheit: ";
	cin >> input;

	output = (input - 32) * 5 / 9;

	cout << "Temperature in Celcius is " << output;

	return 0;
}