#include <iostream>

using namespace std;

#define LOG(x) cout << x << endl;

// Define a global variable with the same name but different value as a static variable in another file
int s_Variable = 10;

// If we put the keyword "extern" in front of "int" it will reference a global variable defined in another
// cpp file / translation unit
extern int g_Variable; // External linking
// extern int s_Variable2; // This code would not work because s_Variable2 is a static variable

// We can see the same concepts apply to functions
void s_Function() {
	// THIS WILL EXECUTE
}
//void g_Function() {
//	// THIS WILL NOT EXECUTE
//}

int main() {
	LOG(g_Variable); // calls variable defined in this file and not the static variable defined in another one
	cin.get();
}