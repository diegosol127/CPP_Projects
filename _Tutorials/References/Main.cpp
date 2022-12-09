# include <iostream>

using namespace std;

#define LOG(x) cout << x << endl

// Let's write a function to increment an integer
void Increment(int value) {
	value++;
}

// Same incrementation funtion but it takes a pointer and increments the value at the specified memory address
void IncrementPtr(int* value) {
	// dereference "value" to write to memory instead of modifying the pointer itself
	(*value)++;
}

// Same incrementation funtion but it takes a refernece and increments the value of the referenced variable
void IncrementRef(int& value) {
	// dereference "value" to write to memory instead of modifying the pointer itself
	value++;
}

int main() {
	// ==============================================================================
	// References have to reference an already existing variable
	// There is nothing you can do with a reference that a pointer cannot do
	// Pointers are more powerful but references look cleaner, so use them if you can
	// Once you declare a reference you cannot change what it is referenceing
	// ==============================================================================

	int a = 5;

	// Create a reference to the variable
	int& ref = a; // Note that "&" is part of the variable declaration
	// By makinga reference, we've created an alias for our variable

	// Recall that for pointers, we use "&" to get the memory address of an existing variable
	// int* b = &a;

	// Let's see how a refence can be used to change the value of the variable it's referencing
	ref = 2;
	cout << "'a' after changing its reference from 5 to 2: ";
	LOG(ref); // We see that "a" has changed from 5 to 2

	// In this case we want to increment "a" using a function we built
	// The issue is that this function essentially copies "a" and creates another variable that gets incremented intead of "a"
	Increment(a); // ***THIS DOES NOT WORK***
	cout << "'a' after using the 'Increment' function: ";
	LOG(a);

	// Use the pointer increment funcition to actually increment the value of "a"
	IncrementPtr(&a); // ***THIS WORKS***
	cout << "'a' after using the 'IncrementPtr' function: ";
	LOG(a);
	
	// Use the reference increment funcition to actually increment the value of "a"
	IncrementRef(a); // ***THIS WORKS***
	cout << "'a' after using the 'IncrementRef' function: ";
	LOG(a);
	// This last version ends up working exactly the same way as the previous one, except it looks nicer in the source code

	//=====================================================================================================================
	//=====================================================================================================================
	LOG("-----------------------------------------------");


	// How to change the reference of a reference...
	int c = 5;
	int d = 8;
	LOG("Before chainging the pointers:");
	LOG("c = " << c);
	LOG("d = " << d);

	// we need to create a variable that can point to "c" first and then later o switch it to point to "d"
	int* newRef = &c; // pointer that contains memory address of "c"
	// change the value of "c" in memory using its pointer by dereferencing it first
	*newRef = 2;
	// now switch it so that the pointer now points to "d"
	newRef = &d;
	// now you can dereference the pointer and change the value of "d"
	*newRef = 1;

	LOG("After chainging the pointers:");
	LOG("c = " << c);
	LOG("d = " << d);

	cin.get();
}
