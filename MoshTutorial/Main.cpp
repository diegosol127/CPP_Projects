#include <iostream>
#include <cmath>

using namespace std;

int main() {
	
	double radius;
	double area;

	const double pi = 2 * acos(0.0);
	cout << "Enter radius of circle: ";
	cin >> radius;

	area = pi * pow(radius, 2);
	cout << "Area of circle: " << area;

	return 0;
}