// W3Schools, C++ Pointers, Modify Pointers
#include <iostream>
#include <string>
using namespace std;

int main() {
    string food = "Pizza";
    string* ptr = &food;

    cout << food << "\n";   // value
    cout << &food << "\n";  // memory address
    
    cout << ptr << "\n";    // memory address (pointer)
    cout << *ptr << "\n";   // value (pointer)

    *ptr = "Hamburger";
    cout << *ptr << "\n";
    cout << food << "\n";
    return 0;
}
