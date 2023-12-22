// W3Schools, C++ Pointers, Dereferencing
#include <iostream>
#include <string>
using namespace std;

int main() {
    string food = "Pizza";  // Variable declaration
    string* ptr = &food;    // Pointer declaration

    cout << ptr << "\n";    // Outputs memory address of food with the pointer
    cout << *ptr << "\n";   // Outputs value of food with the pointer
    return 0;
}
