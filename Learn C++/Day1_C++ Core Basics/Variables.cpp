#include <iostream>
#include <string>

using namespace std;

int main() {
    // Declare and initialize different types of variables
    int age =27;
    double pi = 3.14159;
    float temperature = -2.5f;
    char grade = 'C';
    bool passed = false;
    string name= "Jannah";
    bool isStudent = true;

    //Print values
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Pi: " << pi << endl;
    cout << "Temperature: " << temperature << endl;
    cout << "Is Student: " << (isStudent ? "Yes" : "No") << endl; // for Yes/No output instead of true/false
    cout << "Grade: " << grade << endl;
    cout << "Passed: " << (passed? "Yes":"No") << endl;

    return 0;
}