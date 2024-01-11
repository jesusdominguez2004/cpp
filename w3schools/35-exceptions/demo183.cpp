// W3Schools, C++ Exceptions
#include <iostream>
using namespace std;

int main() {
    try {
        int age = 15;
        if (age >= 18) {
            cout << "Access granted - you are old enough.";
        } else {
            throw 505;
        }
    } catch (int myNum) {
        cout << "Access denied - You must be at least 18 year old.\n";
        cout << "Error number: " << myNum;
    }
    return 0;
}
