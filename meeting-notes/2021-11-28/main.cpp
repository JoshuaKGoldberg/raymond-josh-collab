// Includes the "iostream" (Input Output streams) library
// so we can use some stuff such as std::cout
#include <iostream>

// ✅: int is the "integer" type
// ✅: main() is the main body of code, the main function for the program
// A function is a block of code that gets run:
// * It takes in a array of "parameters"... but this one doesn't do that (array of size 0 here)
// * It has to return something or explicitly `void` (void means nothing)
    // The main function has to return an int status code:
        // * 0 is the "all clear"
        // * anything else is some standard error
    // If the function doesn't have an explicit return, then the default for that type is used
        // E.g. ints go to 0
// ✅: The `{` and `}` say where that function begins and ends
int main()
{
    // Things like cout are "namespaced" under `std::` to keep them organized
    // Double quotes mean a full string; single quotes mean a single character
    std::cout << "hello world\n";
}
