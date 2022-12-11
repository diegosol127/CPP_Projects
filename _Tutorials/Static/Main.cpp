#include <iostream>

using namespace std;

#define LOG(x) cout << x << endl;

struct Entity {

	// Recall that structs only differ from classes in that they are public by default

	// Public variables
	int x, y;

	// Static variables
	static int s_x, s_y;
	// Since these variables static, our initializer (line for "e1") will fail because 
	// "x" and "y" are no longer class members
	
	void Print() {
		LOG(x << ", " << y)
	}

	void s_Print() {
		LOG(s_x << ", " << s_y)
	}
};

// We need to define our static variables
int Entity::s_x; // <scope of static variable>::<static variable>
int Entity::s_y;

int main() {
	
	// Instatiate an instance of our struct
	Entity e0;
	e0.x = 2;
	e0.y = 3;

	// Another way to initialize using an initializer
	Entity e1 = { 5, 8 };
	// This method will fail if the class variables are static


	// Let's try the same with the static variables in our class
	// (techically the wrong way to do this properly)
	Entity e2;
	e2.s_x = 10;
	e2.s_y = 11;

	Entity e3;
	e3.s_x = 15; // Points to the same memory address as "e2.s_x"
	e3.s_y = 16; // Points to the same memory address as "e2.s_y"

	// It is also possible to change the static class variables like this
	Entity::s_x = 20;
	Entity::s_y = 21;
	// This is chaning the value by refering to the static variables as if
	// they are within the "Entity" scope (which they essentially are)

	LOG("PUBLIC VARIABLES")
	e0.Print();
	e1.Print();

	LOG("================")
	
	LOG("STATIC VARIABLES")
	e2.s_Print();
	e3.s_Print();

	cin.get();
}