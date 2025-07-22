// Example 1

#include <iostream>
/*
#include: is telling compiler to bring in the iostream library.
<iostream>: is a standard library in C++ that allows input and output operations.
    -io: stands for input/output.
    -stream: refers to the flow of data.
*/
int main(){
    /* This is the heart of every C++ program.
    int: is a data type that represents integer values.
    main: is a function, which is the entry point of a C++ program.
    (): this function does not take any parameters(information).
    {}: the body of the function.
    */
   std::cout << "Hello, World!" << std::endl;
    /*
    std: is standard namespace "like family name", which is container for all standard C++ library features so that not to conflict with user-defined names.
    cout: stands for character output "see out", object provided by the iostream library to output data.
    <<: insertion operator, used to send data to the output stream.
    "Hello, World!": is a string literal, which is a sequence of characters enclosed.
    ednl: "end line", performs 2 actions:
        1. inserts a new line, anything will print after will appear on the next line.
        2. flushes 'send' the output buffer 'memory area' to fast send the output and to control the output flow.

    so the translation of the line is:
    "the standard output stream will insert the string "Hello, world!" and then insert a new line and flush the output buffer."
    */
   return 0; 
   /*
   return: stop the function and send a value back to the operating system.
   0: the value being returned successfully, an integer because the int main() must return an integer value.

   if the return value is not 0, then there is and error in the program.
   */
}


/*
Note that we could instaed of using std inside the code we could do that:

#includ <iostream>
using namespace std;
int main(){
    cout << "Hello, World!" << endl;
    return 0;
}
*/