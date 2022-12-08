#include <iostream>
#include <ctime>

using namespace std;

int main() {

	// loop condition
	const int maxIter = 99;
	int iter = 1;
	bool rollDice = 1;
	while(rollDice && (iter <= maxIter), iter++) {

		// specify min and max values for random number generator
		const int minVal = 1;
		const int maxVal = 6;

		// generate 2 random numbers
		srand(time(NULL));
		short roll_1 = (rand() % (maxVal - minVal + 1)) + minVal;
		short roll_2 = (rand() % (maxVal - minVal + 1)) + minVal;

		// print to console
		cout << roll_1 << ", " << roll_2 << endl;
		cout << "Enter 1 to roll again. Enter 0 to exit: ";
		cin >> rollDice;
		cout << endl;
		if ((rollDice != 0) && (rollDice != 1)) {
			cout << "Invalid entry";
			rollDice = 0;
		}
	}

	return 0;
}