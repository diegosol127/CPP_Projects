// STATIC IN C++
// ============================================
// 
// Outside of a class/struct
// -------------------------
// - linkage of that static symbol is going to be internal
// - linkage of the symbol will only be visible to the translation unit it is defined in
// - when it comes time to link functions/variables/etc to defined symbols, the linker won't look 
//   outside of the scope of the translation unit (cpp file) it's defined in
// 
// Inside a class/struct
// -------------------------
// - the variable will share memory with all of the instances of that class/struct
// - across all instances of that class/struct there will only be one instance of that static variable
// - similar concept to static methods inside classes


// Define a variable to be static - will only be linked internally inside this translation unit
static int s_Variable = 5; // "s_" indicates the variable is static
static int s_Variable2 = 6;
// If we remove static from this line we get an error because the variable is already defined in a different
// translation unit - we cannot have 2 global variables with the same name

// define a global variable to be referenced in another file
int g_Variable = 7;

// The same concept applies to static functions - they will not be linked to objects outside of the scope of
// this file
static void s_Function() {

}

// If the function is global, it can be called from another file / translation unit
void g_Function() {

}