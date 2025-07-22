#include <iostream>
#include <string>
using namespace std;

string greet() {
    return "Hello World";
}

int main() {
    cout << greet() << endl;
    return 0;
}
/* Translation of the code:

first: telling the compiler to load libraries so I can talk to it:

    1.#include <iostream>: load tools for input/output, like cout and cin.
    2.#include <string>: Load support for sting data type.
    3.using namespace std;: use the standard namespace (standard library) which have (cout, cin, sting, endl, etc...) till i finish the code.
    
second: telling the compiler my instructions and defining everything I need:

    1. string greet(): is my function name and return (give back) a string value.
    2. return "Hello WOrld";: return the value "Hello World" when the function is called.

third: telling the compiler where to start running my code:
    1. int main(): here we enter the cpp program (like the door of the hause).
    2. cout << greet() << endl;: 
        - output the value "Hello World" returned by the greet() function.
        - end the line and flush the output buffer(memory area).
    3. return 0;: end the program and return a value of 0 to the operating system, indicating that the program ran successfully.
    4. end of the code.

*/