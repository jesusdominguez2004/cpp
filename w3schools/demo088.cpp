// W3Schools, C++ Strings, User Input Strings
#include <iostream>
#include <string>
using namespace std;

int main() {
    string fullName;
    cout << "Type your full name: ";
    getline(cin, fullName);                 // function to read a line of text
    cout << "Your name is: " << fullName;
    return 0;
}
