# include <iostream>

using namespace std;

#define LOG(x) cout << x << endl

int main() {
	//===========================================================
	// All pointers are just integers that hold memory addresses.
	//===========================================================
	
	// If a pointer has a type, it is assumed that the data at the address is presumed to be of that type.

	// typeless null pointer (we don't care whet type this data is)
	void* ptr = nullptr; //invalid pointer (0 == NULL == nullptr)

	// find the memory address of an int variable
	int var = 8;
	int* varPtr = &var;
	// dereference a pointer - what is a pointer storing? We can change what is stored at the memory address.
	// If we want to change the value at a memory address using pointers, it is important to specify the type of pointer being used.
	*varPtr = 10;
	LOG(var);

	// So far, we've created vaariables on the stack. Now let's create one on the heap.
	// char is 1 byte - let's allocate 8 bytes of memory
	char* buffer = new char[8]; // returns a pointer to the beginning of the memory block
	// fill a block of memory with data that we specify
	memset(buffer, 0, 8); //args: 1. pointer to beginning of memory block, 2. value, 3. size (bytes)
	// double pointer - a pointer that points to the memory address of another pointer
	char** bufferPtr = &buffer;
	// delete heap-allocated memory
	delete[] buffer; // use delete keyword with the array operator

	cin.get();

	return 0;
}