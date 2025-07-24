#include <iostream>

int main(){

// Boolean type: is for representing true or false values.
    bool a = true;
    bool b{false};
    std::cout << "The value of a is: " << a << std::endl;
    std::cout << "The value of b is: " << b << std::endl;


// Character Type: is for representing single character. and must be enclosed in single quotes.
    char c = 'A'; //Note that i cant use a or b variable here because i cant change the type of variables after declaration.
    char d{'B'};
    std::cout << "The value of c is: " << c << std::endl;
    std::cout << "The value of d is: " << d << std::endl;
    c = 'C';    // notice that we change the value of c not the type so don't write it as [char c = 'C';] just use [c = 'C';]
    std::cout << "The new value of c is: " << c << std::endl;

    // Size of character type: is 1 byte.
        std::cout << "The size of type char is: " << sizeof(char) << " byte(s)" << std::endl;

    // Note: character is represented by an inteer number in the character set (ASCII).
    char e = 65;
    std::cout << "The value of e is: " << e << std::endl;


// Integer Types: integral values (whole numbers) both -ve and +ve.
    int x = 123;
    int y{-256};
    std::cout << "The value of x is: " << x << ", the value of y is: " << y << std::endl;

    // Size of integer type: is 4 bytes.
    std::cout << "The size of type int is: " << sizeof(int) << " byte(s)" << std::endl;

    //Note: we can change the value of x and y as we did with c.
    x = 456;
    y = -789;
    std::cout << "The new value of x is: " << x << ", the new value of y is: " << y << std::endl;

    // Interger literals can be written in different bases:
    int t = 10;    //Decimal base
    int u = 012;   // Octal base (starts with 0) which is 10 in decimal
    int v = 0xA;   // Hexadecimal base (starts with 0x) which is 10 in decimal
    std::cout << "The value of t is: " << t << ", the value of u is: " << u << ", the value of v is: "<< v << std::endl;


//Floating-Point Types: float, double, and long double are used to represent real number.
    double f= 3.14;
    float g{1.};
    long double h= 2.42354346546436456;
    std::cout << "The value of f is: " << f << ", the value of g is: " << g << ", the value of h is: " << h << std::endl;

    //Size of floating-point types:
    std::cout <<"The size of double is: " << sizeof(double) << " byte(s)" << std::endl; // equats to 8 bytes
    std::cout <<"The size of float is: " << sizeof(float) << " byte(s)" << std::endl; // equats to 4 bytes
    std::cout <<"The size of long double is: " << sizeof(long double) << " byte(s)" << std::endl; // equats to 12 bytes


//Void Type: represents no value or no type It is used in functions that have type void.
    // Explain it into pointers and functions later.


//Modifiers type: 

}