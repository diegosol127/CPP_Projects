#include <iostream>

void Log(const char*);

int main() {

	for (int i = 0; i < 5; i++) {
		Log("Hello World!");
	}

	std::cin.get();
}