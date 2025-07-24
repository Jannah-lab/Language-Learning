#include <iostream> 

// Include: "Preprocessor directive" to include the contents of the specified file.
// iostream: "Header file" to handle input and output operations.


int main(){

// int: "Data type" that indicates the function returns an integer value.
// main: "Function name" The entry point of the program to be executed when the program runs.
// (): "Function parameters" which are empty in this case.
// {}: "Function body" where the code is written to be executed.

std::cout << "Hello, World.";

// std::cout: "standard output stream" used to output data to the console.
// <<: ""stream insertion operator" insets the data into the output stream.
// "Hello, World.": "String literal" that will be printed to the console.
// ; : the end of the satement, indicating the end of the instruction.
// std: "Namespace" that contains the standard C++ library functions and objects, including cout.
// :: : "Scope resolution operator" scope objects and functions into the std namespace.
// cout: "Output stream object" is to display output to the console.
}

// Use std::cout better than namespace std; because it avoids potential naming conflicts with other libraries or user-defined names.

