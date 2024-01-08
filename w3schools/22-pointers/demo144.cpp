// W3Schools, C++ Pointers, Create Pointers
#include <iostream>
#include <string>
using namespace std;

int main() {
    string food = "Pizza";
    string* ptr = &food;

    cout << food << "\n";
    cout << &food << "\n";
    cout << ptr << "\n";
    return 0;

    /*  
        Three ways to declare pointer variables:
        string* mystring;
        string *mystring;
        string * mystring;
    */
}
