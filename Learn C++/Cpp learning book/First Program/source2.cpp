#include <iostream>

int main(){
    std::cout <<"Some string." <<" Another string.";

    // We can output multiple strings in a single line by multiple << operators.

    std::cout << "First line." << '\n' << "Second line.";

    // \n: newline character, to move the next output to a new line.
    // '' : single quotes for character literals. ex: 'a', '1', '\n', 'B', etc...
    // \ : escape character, used to represent special characters in string literals.
}